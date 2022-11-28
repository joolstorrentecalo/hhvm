(*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Hh_prelude
module Indexable = Symbol_indexable

type def = {
  kind: SymbolDefinition.kind;
  name: string;
  full_name: string;
}

type symbol = private {
  occ: Relative_path.t SymbolOccurrence.t;
  def: def option;
}

(** [fanout] flag is used in incremental mode. It identifies files which are
    unchanged compared to the base db. Such files don't need to be re-indexed
   if an identical [sym_hash] exists on the base db. [sym_hash] captures the
   file path and the part of the tast which determines xrefs *)
type t = private {
  (* path to be used in the glean index *)
  path: string;
  cst: Full_fidelity_positioned_syntax.t;
  tast: Tast.program;
  source_text: Full_fidelity_source_text.t;
  symbols: symbol list;
  sym_hash: Md5.t option;
  fanout: bool;
}

val create :
  Provider_context.t ->
  Indexable.t ->
  gen_sym_hash:bool ->
  root_path:string ->
  hhi_path:string ->
  t
