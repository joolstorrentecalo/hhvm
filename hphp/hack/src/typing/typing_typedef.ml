(*
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Hh_prelude
open Common
open Aast
open Tast
module Reason = Typing_reason
module Env = Typing_env
module SN = Naming_special_names
module Phase = Typing_phase
module EnvFromDef = Typing_env_from_def

(** [get_cnstr_errs env tcstr super t_pos ty] checks that
  `ty <: tcstr` if not [super], else if [super] that `ty :> tcstr` *)
let get_cnstr_errs env tcstr reverse t_pos ty :
    Typing_env_types.env * Typing_error.t option =
  match tcstr with
  | Some tcstr ->
    let ((env, ty_err_opt1), cstr) =
      Phase.localize_hint_no_subst env ~ignore_errors:false tcstr
    in
    let (env, ty_err_opt2) =
      Typing_ops.sub_type
        t_pos
        Reason.URnewtype_cstr
        env
        (if reverse then
          cstr
        else
          ty)
        (if reverse then
          ty
        else
          cstr)
        Typing_error.Callback.newtype_alias_must_satisfy_constraint
    in
    (env, Option.merge ~f:Typing_error.both ty_err_opt1 ty_err_opt2)
  | _ -> (env, None)

(** Checks that variants of a case type are disjoint *)
let casetype_def env typedef =
  let {
    t_annotation = ();
    t_name = (t_pos, t_name);
    t_tparams = _;
    t_as_constraint = _;
    t_super_constraint = _;
    t_kind = varaints;
    t_user_attributes = _;
    t_vis;
    t_mode = _;
    t_namespace = _;
    t_span = _;
    t_emit_id = _;
    t_is_ctx = _;
    t_file_attributes = _;
    t_internal = _;
    t_module = _;
    t_docs_url = _;
    t_doc_comment = _;
  } =
    typedef
  in
  match (t_vis, varaints) with
  | (Aast.CaseType, (_, Hunion hints)) ->
    (* Given two types with their associated data types, check if
       the data types overlap. If they do report an error *)
    let check data_type1 acc data_type2 =
      match
        Typing_case_types.check_overlapping
          ~pos:t_pos
          ~name:t_name
          env
          data_type1
          data_type2
      with
      | None -> acc
      | Some err -> Typing_error.casetype err :: acc
    in

    (* We check for overlaps pairwise between each variant type in the union *)
    let rec pairwise_check acc = function
      | a :: rest ->
        let acc = List.fold ~init:acc ~f:(check a) rest in
        pairwise_check acc rest
      | [] -> acc
    in
    let (env, errs) =
      hints |> List.fold_map ~init:env ~f:Typing_case_types.data_type_from_hint
    in
    let err = errs |> pairwise_check [] |> Typing_error.multiple_opt in
    Option.iter ~f:(Typing_error_utils.add_typing_error ~env) err;
    env
  | _ -> env

let typedef_def ctx typedef =
  let env = EnvFromDef.typedef_env ~origin:Decl_counters.TopLevel ctx typedef in
  let {
    t_annotation = ();
    t_name;
    t_tparams;
    t_as_constraint;
    t_super_constraint;
    t_kind;
    t_user_attributes;
    t_vis;
    t_mode;
    t_namespace;
    t_span;
    t_emit_id;
    t_is_ctx;
    t_file_attributes;
    t_internal;
    t_module;
    t_docs_url;
    t_doc_comment;
  } =
    typedef
  in
  let (t_pos, t_name_) = t_name in
  let env = Env.set_current_module env t_module in
  let env = Env.set_internal env t_internal in
  let env =
    Env.set_current_package_override_from_file_attributes env t_file_attributes
  in
  let (env, ty_err_opt1) =
    Phase.localize_and_add_ast_generic_parameters_and_where_constraints
      env
      ~ignore_errors:false
      t_tparams
      []
  in
  Option.iter ~f:(Typing_error_utils.add_typing_error ~env) ty_err_opt1;
  Typing_type_wellformedness.typedef env typedef
  |> List.iter ~f:(Typing_error_utils.add_typing_error ~env);
  Env.make_depend_on_current_module env;
  Typing_variance.typedef env typedef;

  let env =
    let ((env, ty_err_opt2), ty) =
      (* This also detects cyclic definitions *)
      Phase.localize_hint_no_subst
        env
        ~ignore_errors:false
        ~report_cycle:(t_pos, Type_expansions.Expansion.Type_alias t_name_)
        t_kind
    in
    let env = casetype_def env typedef in
    Option.iter ~f:(Typing_error_utils.add_typing_error ~env) ty_err_opt2;

    let (env, ty_err_opt3) =
      get_cnstr_errs env t_as_constraint false t_pos ty
    in
    let (env, ty_err_opt4) =
      get_cnstr_errs env t_super_constraint true t_pos ty
    in
    Option.iter
      ~f:(Typing_error_utils.add_typing_error ~env)
      (Option.merge ~f:Typing_error.both ty_err_opt3 ty_err_opt4);
    env
  in

  let env =
    match t_kind with
    | (_pos, Hshape { nsi_allows_unknown_fields = _; nsi_field_map }) ->
      let get_name sfi = sfi.sfi_name in
      Typing_shapes.check_shape_keys_validity
        env
        (List.map ~f:get_name nsi_field_map)
    | _ -> env
  in
  let (env, user_attributes) =
    Typing.attributes_check_def
      env
      SN.AttributeKinds.typealias
      t_user_attributes
  in
  let (env, tparams) = List.map_env env t_tparams ~f:Typing.type_param in
  let (env, file_attributes) = Typing.file_attributes env t_file_attributes in
  {
    Aast.t_annotation = Env.save (Env.get_tpenv env) env;
    Aast.t_name;
    Aast.t_mode;
    Aast.t_vis;
    Aast.t_user_attributes = user_attributes;
    Aast.t_as_constraint;
    Aast.t_super_constraint;
    Aast.t_kind;
    Aast.t_tparams = tparams;
    Aast.t_namespace;
    Aast.t_span;
    Aast.t_emit_id;
    Aast.t_is_ctx;
    Aast.t_file_attributes = file_attributes;
    Aast.t_internal;
    Aast.t_module;
    Aast.t_docs_url;
    Aast.t_doc_comment;
  }
