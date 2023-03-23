// Copyright (c) Meta Platforms, Inc. and affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.

pub mod elab_as_expr;
pub mod elab_block;
pub mod elab_class_id;
pub mod elab_class_vars;
pub mod elab_const_expr;
pub mod elab_defs;
pub mod elab_dynamic_class_name;
pub mod elab_enum_class;
pub mod elab_expr_call_call_user_func;
pub mod elab_expr_call_hh_invariant;
pub mod elab_expr_call_hh_meth_caller;
pub mod elab_expr_collection;
pub mod elab_expr_import;
pub mod elab_expr_lvar;
pub mod elab_expr_tuple;
pub mod elab_func_body;
pub mod elab_hint_haccess;
pub mod elab_hint_happly;
pub mod elab_hint_hsoft;
pub mod elab_hint_retonly;
pub mod elab_hint_this;
pub mod elab_hint_wildcard;
pub mod elab_hkt;
pub mod elab_shape_field_name;
pub mod elab_user_attributes;
pub mod guard_invalid;
pub mod validate_class_consistent_construct;
pub mod validate_class_member;
pub mod validate_class_methods;
pub mod validate_class_req;
pub mod validate_class_tparams;
pub mod validate_class_user_attribute_const;
pub mod validate_class_var_user_attribute_const;
pub mod validate_class_var_user_attribute_lsb;
pub mod validate_control_context;
pub mod validate_coroutine;
pub mod validate_enum_supertyping;
pub mod validate_expr_array_get;
pub mod validate_expr_call_echo;
pub mod validate_expr_cast;
pub mod validate_expr_function_pointer;
pub mod validate_expr_list;
pub mod validate_fun_param_inout;
pub mod validate_fun_params;
pub mod validate_function_pointer;
pub mod validate_global_const;
pub mod validate_hint_habstr;
pub mod validate_hint_hrefinement;
pub mod validate_illegal_name;
pub mod validate_interface;
pub mod validate_method_private_final;
pub mod validate_module;
pub mod validate_php_lambda;
pub mod validate_shape_name;
pub mod validate_trait_internal;
pub mod validate_user_attribute_arity;
pub mod validate_user_attribute_deprecated_static;
pub mod validate_user_attribute_dynamically_callable;
pub mod validate_user_attribute_entry_point;
pub mod validate_user_attribute_infer_flows;
pub mod validate_user_attribute_memoize;
pub mod validate_user_attribute_soft_internal;
pub mod validate_xhp_attribute;
pub mod validate_xhp_name;
