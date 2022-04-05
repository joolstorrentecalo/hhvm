// Copyright (c) Facebook, Inc. and its affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.

pub mod emitter; // emitter is public API for mutating state
pub mod jump_targets;
mod label;

use ast_body::AstBody;
use ast_scope::{self as ast_scope, Scope, ScopeItem};
use bitflags::bitflags;
use emitter::Emitter;
use ffi::{Slice, Str};
use hhas_symbol_refs::{HhasSymbolRefs, IncludePathSet};
use hhbc_ast::Label;
use iterator::IterId;
use local::Local;
use ocamlrep::rc::RcOc;
use oxidized::{ast, namespace_env::Env as NamespaceEnv};
use std::collections::BTreeSet;

pub use label::*;

bitflags! {
    #[derive(Default)]
    pub struct Flags: u8 {
        const NEEDS_LOCAL_THIS =    0b0000_0001;
        const IN_TRY =              0b0000_0010;
        const ALLOWS_ARRAY_APPEND = 0b0000_0100;
    }
}

/// `'a` is an AST lifetime, `'arena` the lifetime of the `InstrSeq`
/// arena.
#[derive(Clone, Debug)]
pub struct Env<'a, 'arena> {
    pub arena: &'arena bumpalo::Bump,
    pub flags: Flags,
    pub jump_targets_gen: jump_targets::Gen,
    pub scope: Scope<'a, 'arena>,
    pub namespace: RcOc<NamespaceEnv>,
    pub call_context: Option<String>,
    pub pipe_var: Option<Local>,
}

impl<'a, 'arena> Env<'a, 'arena> {
    pub fn default(arena: &'arena bumpalo::Bump, namespace: RcOc<NamespaceEnv>) -> Self {
        Env {
            arena,
            namespace,
            flags: Flags::default(),
            jump_targets_gen: jump_targets::Gen::default(),
            scope: Scope::default(),
            call_context: None,
            pipe_var: None,
        }
    }

    pub fn with_allows_array_append<F, R>(&mut self, alloc: &'arena bumpalo::Bump, f: F) -> R
    where
        F: FnOnce(&'arena bumpalo::Bump, &mut Self) -> R,
    {
        let old = self.flags.contains(Flags::ALLOWS_ARRAY_APPEND);
        self.flags.set(Flags::ALLOWS_ARRAY_APPEND, true);
        let r = f(alloc, self);
        self.flags.set(Flags::ALLOWS_ARRAY_APPEND, old);
        r
    }

    pub fn with_need_local_this(&mut self, need_local_this: bool) {
        if need_local_this {
            self.flags |= Flags::NEEDS_LOCAL_THIS;
        }
    }

    pub fn with_pipe_var(&mut self, local: Local) {
        self.pipe_var = Some(local);
    }

    pub fn with_scope(mut self, scope: Scope<'a, 'arena>) -> Env<'a, 'arena> {
        self.scope = scope;
        self
    }

    pub fn make_class_env(arena: &'arena bumpalo::Bump, class: &'a ast::Class_) -> Env<'a, 'arena> {
        Env::default(arena, RcOc::clone(&class.namespace)).with_scope(Scope {
            items: vec![ScopeItem::Class(ast_scope::Class::new_ref(class))],
        })
    }

    pub fn do_in_loop_body<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        label_break: Label,
        label_continue: Label,
        iterator: Option<IterId>,
        b: &[ast::Stmt],
        f: F,
    ) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>, &[ast::Stmt]) -> R,
    {
        self.jump_targets_gen
            .with_loop(label_break, label_continue, iterator);
        self.run_and_release_ids(e, |env, e| f(env, e, b))
    }

    pub fn do_in_switch_body<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        end_label: Label,
        cases: &[ast::Case],
        dfl: &Option<ast::DefaultCase>,
        f: F,
    ) -> R
    where
        F: FnOnce(
            &mut Self,
            &mut Emitter<'arena, 'decl>,
            &[ast::Case],
            &Option<ast::DefaultCase>,
        ) -> R,
    {
        self.jump_targets_gen.with_switch(end_label);
        self.run_and_release_ids(e, |env, e| f(env, e, cases, dfl))
    }

    pub fn do_in_try_catch_body<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        finally_label: Label,
        try_block: &[ast::Stmt],
        catch_block: &[ast::Catch],
        f: F,
    ) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>, &[ast::Stmt], &[ast::Catch]) -> R,
    {
        self.jump_targets_gen.with_try_catch(finally_label);
        self.run_and_release_ids(e, |env, e| f(env, e, try_block, catch_block))
    }

    pub fn do_in_try_body<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        finally_label: Label,
        block: &[ast::Stmt],
        f: F,
    ) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>, &[ast::Stmt]) -> R,
    {
        self.jump_targets_gen.with_try(finally_label);
        self.run_and_release_ids(e, |env, e| f(env, e, block))
    }

    pub fn do_in_finally_body<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        block: &[ast::Stmt],
        f: F,
    ) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>, &[ast::Stmt]) -> R,
    {
        self.jump_targets_gen.with_finally();
        self.run_and_release_ids(e, |env, e| f(env, e, block))
    }

    pub fn do_in_using_body<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        finally_label: Label,
        block: &[ast::Stmt],
        f: F,
    ) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>, &[ast::Stmt]) -> R,
    {
        self.jump_targets_gen.with_using(finally_label);
        self.run_and_release_ids(e, |env, e| f(env, e, block))
    }

    pub fn do_function<'decl, R, F>(
        &mut self,
        e: &mut Emitter<'arena, 'decl>,
        defs: &AstBody<'_>,
        f: F,
    ) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>, &AstBody<'_>) -> R,
    {
        self.jump_targets_gen.with_function();
        self.run_and_release_ids(e, |env, e| f(env, e, defs))
    }

    fn run_and_release_ids<'decl, R, F>(&mut self, e: &mut Emitter<'arena, 'decl>, f: F) -> R
    where
        F: FnOnce(&mut Self, &mut Emitter<'arena, 'decl>) -> R,
    {
        let res = f(self, e);
        self.jump_targets_gen.release_ids();
        self.jump_targets_gen.revert();
        res
    }
}

#[derive(Clone, Debug, Default)]
pub struct SymbolRefsState<'arena> {
    pub includes: IncludePathSet<'arena>,
    pub constants: BTreeSet<Str<'arena>>,
    pub functions: BTreeSet<Str<'arena>>,
    pub classes: BTreeSet<Str<'arena>>,
}

impl<'arena> SymbolRefsState<'arena> {
    pub fn to_hhas(self, alloc: &'arena bumpalo::Bump) -> HhasSymbolRefs<'arena> {
        HhasSymbolRefs {
            includes: Slice::new(alloc.alloc_slice_fill_iter(self.includes.into_iter())),
            constants: Slice::new(alloc.alloc_slice_fill_iter(self.constants.into_iter())),
            functions: Slice::new(alloc.alloc_slice_fill_iter(self.functions.into_iter())),
            classes: Slice::new(alloc.alloc_slice_fill_iter(self.classes.into_iter())),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn make_env() {
        let a = bumpalo::Bump::new();
        let alloc: &bumpalo::Bump = &a;
        let namespace = RcOc::new(NamespaceEnv::empty(vec![], false, false));
        let _: Env<'_, '_> = Env::default(alloc, namespace);
    }
}
