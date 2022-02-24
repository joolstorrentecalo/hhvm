// Copyright (c) Meta Platforms, Inc. and affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.

use super::{folded, ty::*};
use crate::reason::Reason;
use oxidized_by_ref::{s_map::SMap, s_set::SSet};
use pos::{Pos, ToOxidized};

use oxidized_by_ref as obr;

impl<'a> ToOxidized<'a> for CeVisibility {
    type Output = obr::typing_defs::CeVisibility<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        use obr::typing_defs::CeVisibility as Obr;
        match self {
            CeVisibility::Public => Obr::Vpublic,
            CeVisibility::Private(v) => Obr::Vprivate(v.to_oxidized(arena)),
            CeVisibility::Protected(v) => Obr::Vprotected(v.to_oxidized(arena)),
            CeVisibility::Internal(v) => Obr::Vinternal(v.to_oxidized(arena)),
        }
    }
}

impl<'a> ToOxidized<'a> for IfcFunDecl {
    type Output = obr::typing_defs::IfcFunDecl<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        use obr::typing_defs::IfcFunDecl as Obr;
        match self {
            IfcFunDecl::FDPolicied(x) => Obr::FDPolicied(x.to_oxidized(arena)),
            IfcFunDecl::FDInferFlows => Obr::FDInferFlows,
        }
    }
}

impl<'a> ToOxidized<'a> for TshapeFieldName {
    type Output = obr::typing_defs::TshapeFieldName<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        use obr::typing_defs::TshapeFieldName as Obr;
        match &self {
            TshapeFieldName::TSFlitInt(x) => Obr::TSFlitInt(arena.alloc(
                obr::typing_defs::PosString(obr::pos::Pos::none(), x.to_oxidized(arena)),
            )),
            TshapeFieldName::TSFlitStr(x) => Obr::TSFlitStr(arena.alloc(
                obr::typing_defs::PosByteString(obr::pos::Pos::none(), x.as_bytes().into()),
            )),
            TshapeFieldName::TSFclassConst(cls, name) => Obr::TSFclassConst(arena.alloc((
                (obr::pos::Pos::none(), cls.to_oxidized(arena)),
                obr::typing_defs::PosString(obr::pos::Pos::none(), name.to_oxidized(arena)),
            ))),
        }
    }
}

impl<'a, P: Pos> ToOxidized<'a> for UserAttribute<P> {
    type Output = &'a obr::typing_defs::UserAttribute<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::UserAttribute {
            name: self.name.to_oxidized(arena),
            classname_params: self.classname_params.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for Tparam<R, DeclTy<R>> {
    type Output = &'a obr::typing_defs::Tparam<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::Tparam {
            variance: self.variance,
            name: self.name.to_oxidized(arena),
            tparams: self.tparams.to_oxidized(arena),
            constraints: arena.alloc_slice_fill_iter(
                self.constraints
                    .iter()
                    .map(|(x, y)| (*x, y.to_oxidized(arena))),
            ),
            reified: self.reified,
            user_attributes: self.user_attributes.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for WhereConstraint<DeclTy<R>> {
    type Output = &'a obr::typing_defs::WhereConstraint<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::WhereConstraint(
            self.0.to_oxidized(arena),
            self.1,
            self.2.to_oxidized(arena),
        ))
    }
}

impl<'a, R: Reason> ToOxidized<'a> for DeclTy<R> {
    type Output = &'a obr::typing_defs::Ty<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::Ty(
            self.reason().to_oxidized(arena),
            self.node().to_oxidized(arena),
        ))
    }
}

impl<'a, R: Reason> ToOxidized<'a> for ShapeFieldType<R> {
    type Output = &'a obr::typing_defs::ShapeFieldType<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::ShapeFieldType {
            optional: self.optional,
            ty: self.ty.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for DeclTy_<R> {
    type Output = obr::typing_defs::Ty_<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        use obr::t_shape_map::{TShapeField, TShapeMap};
        use obr::typing_defs::Ty_;
        match self {
            DeclTy_::DTthis => Ty_::Tthis,
            DeclTy_::DTapply(x) => Ty_::Tapply(x.to_oxidized(arena)),
            DeclTy_::DTmixed => Ty_::Tmixed,
            DeclTy_::DTlike(x) => Ty_::Tlike(x.to_oxidized(arena)),
            DeclTy_::DTany => Ty_::Tany(obr::tany_sentinel::TanySentinel),
            DeclTy_::DTerr => Ty_::Terr,
            DeclTy_::DTnonnull => Ty_::Tnonnull,
            DeclTy_::DTdynamic => Ty_::Tdynamic,
            DeclTy_::DToption(x) => Ty_::Toption(x.to_oxidized(arena)),
            DeclTy_::DTprim(x) => Ty_::Tprim(arena.alloc(*x)),
            DeclTy_::DTfun(x) => Ty_::Tfun(x.to_oxidized(arena)),
            DeclTy_::DTtuple(x) => Ty_::Ttuple(x.to_oxidized(arena)),
            DeclTy_::DTshape(shape) => {
                let mut shape_fields = arena_collections::AssocListMut::new_in(arena);
                for (k, v) in shape.1.iter() {
                    shape_fields
                        .insert_or_replace(TShapeField(k.to_oxidized(arena)), v.to_oxidized(arena));
                }
                Ty_::Tshape(arena.alloc((shape.0, TShapeMap::from(shape_fields))))
            }
            DeclTy_::DTvar(ident) => Ty_::Tvar((*ident).into()),
            DeclTy_::DTgeneric(x) => Ty_::Tgeneric(x.to_oxidized(arena)),
            DeclTy_::DTunion(x) => Ty_::Tunion(x.to_oxidized(arena)),
            DeclTy_::DTintersection(x) => Ty_::Tintersection(x.to_oxidized(arena)),
            DeclTy_::DTvecOrDict(x) => Ty_::TvecOrDict(x.to_oxidized(arena)),
            DeclTy_::DTaccess(x) => Ty_::Taccess(x.to_oxidized(arena)),
        }
    }
}

impl<'a, R: Reason> ToOxidized<'a> for TaccessType<R, DeclTy<R>> {
    type Output = &'a obr::typing_defs::TaccessType<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::TaccessType(
            self.ty.to_oxidized(arena),
            self.type_const.to_oxidized(arena),
        ))
    }
}

impl<'a, R: Reason> ToOxidized<'a> for FunImplicitParams<R, DeclTy<R>> {
    type Output = &'a obr::typing_defs::FunImplicitParams<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::FunImplicitParams {
            capability: match &self.capability {
                Capability::CapDefaults(p) => {
                    obr::typing_defs::Capability::CapDefaults(p.to_oxidized(arena))
                }
                Capability::CapTy(ty) => obr::typing_defs::Capability::CapTy(ty.to_oxidized(arena)),
            },
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for FunType<R, DeclTy<R>> {
    type Output = &'a obr::typing_defs::FunType<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::FunType {
            tparams: self.tparams.to_oxidized(arena),
            where_constraints: self.where_constraints.to_oxidized(arena),
            params: self.params.to_oxidized(arena),
            implicit_params: self.implicit_params.to_oxidized(arena),
            ret: self.ret.to_oxidized(arena),
            flags: self.flags,
            ifc_decl: self.ifc_decl.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for PossiblyEnforcedTy<DeclTy<R>> {
    type Output = &'a obr::typing_defs::PossiblyEnforcedTy<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::PossiblyEnforcedTy {
            enforced: self.enforced,
            type_: self.ty.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for FunParam<R, DeclTy<R>> {
    type Output = &'a obr::typing_defs::FunParam<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::FunParam {
            pos: self.pos.to_oxidized(arena),
            name: self.name.to_oxidized(arena),
            type_: self.ty.to_oxidized(arena),
            flags: self.flags,
        })
    }
}

impl<'a> ToOxidized<'a> for ClassConstFrom {
    type Output = obr::typing_defs::ClassConstFrom<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        use obr::typing_defs::ClassConstFrom as Obr;
        match self {
            Self::Self_ => Obr::Self_,
            Self::From(ty) => Obr::From(ty.to_oxidized(arena)),
        }
    }
}

impl<'a> ToOxidized<'a> for ClassConstRef {
    type Output = obr::typing_defs::ClassConstRef<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        obr::typing_defs::ClassConstRef(self.0.to_oxidized(arena), self.1.to_oxidized(arena))
    }
}

impl<'a, R: Reason> ToOxidized<'a> for AbstractTypeconst<R> {
    type Output = &'a obr::typing_defs::AbstractTypeconst<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::AbstractTypeconst {
            as_constraint: self.as_constraint.to_oxidized(arena),
            super_constraint: self.super_constraint.to_oxidized(arena),
            default: self.default.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for ConcreteTypeconst<R> {
    type Output = &'a obr::typing_defs::ConcreteTypeconst<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::ConcreteTypeconst {
            tc_type: self.ty.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for Typeconst<R> {
    type Output = obr::typing_defs::Typeconst<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        use obr::typing_defs::Typeconst as Obr;
        match self {
            Self::TCAbstract(x) => Obr::TCAbstract(x.to_oxidized(arena)),
            Self::TCConcrete(x) => Obr::TCConcrete(x.to_oxidized(arena)),
        }
    }
}

impl<'a, R: Reason> ToOxidized<'a> for folded::SubstContext<R> {
    type Output = &'a obr::decl_defs::SubstContext<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::decl_defs::SubstContext {
            subst: self.subst.to_oxidized(arena),
            class_context: self.class_context.to_oxidized(arena),
            from_req_extends: self.from_req_extends,
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for folded::TypeConst<R> {
    type Output = &'a obr::typing_defs::TypeconstType<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::TypeconstType {
            synthesized: self.is_synthesized,
            concretized: self.is_concreteized,
            is_ctx: self.is_ctx,
            enforceable: self.enforceable.as_ref().map_or_else(
                || (obr::pos::Pos::none(), false),
                |x| (x.to_oxidized(arena), true),
            ),
            reifiable: self.reifiable.as_ref().map(|x| x.to_oxidized(arena)),
            origin: self.origin.to_oxidized(arena),
            kind: self.kind.to_oxidized(arena),
            name: self.name.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for folded::ClassConst<R> {
    type Output = &'a obr::typing_defs::ClassConst<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::typing_defs::ClassConst {
            synthesized: self.is_synthesized,
            abstract_: self.kind,
            origin: self.origin.to_oxidized(arena),
            refs: self.refs.to_oxidized(arena),
            type_: self.ty.to_oxidized(arena),
            pos: self.pos.to_oxidized(arena),
        })
    }
}

impl<'a, R: Reason> ToOxidized<'a> for folded::FoldedClass<R> {
    type Output = obr::decl_defs::DeclClassType<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        obr::decl_defs::DeclClassType {
            name: self.name.to_oxidized(arena),
            pos: self.pos.to_oxidized(arena),
            substs: self.substs.to_oxidized(arena),
            ancestors: self.ancestors.to_oxidized(arena),
            props: self.props.to_oxidized(arena),
            sprops: self.static_props.to_oxidized(arena),
            methods: self.methods.to_oxidized(arena),
            smethods: self.static_methods.to_oxidized(arena),
            consts: self.consts.to_oxidized(arena),
            typeconsts: self.type_consts.to_oxidized(arena),
            tparams: self.tparams.to_oxidized(arena),
            // TODO(milliechen): implement the rest
            construct: (None, obr::typing_defs::ConsistentKind::Inconsistent),
            need_init: false,
            abstract_: false,
            final_: false,
            const_: false,
            internal: false,
            deferred_init_members: SSet::empty(),
            is_xhp: false,
            has_xhp_keyword: false,
            module: None,
            where_constraints: &[],
            support_dynamic_type: false,
            req_ancestors: &[],
            req_ancestors_extends: SSet::empty(),
            extends: SSet::empty(),
            sealed_whitelist: None,
            xhp_attr_deps: SSet::empty(),
            xhp_enum_values: SMap::empty(),
            enum_type: None,
            decl_errors: None,
            condition_types: SSet::empty(),
            kind: oxidized::ast_defs::ClassishKind::Cenum,
        }
    }
}

impl<'a> ToOxidized<'a> for folded::FoldedElement {
    type Output = &'a obr::decl_defs::Element<'a>;

    fn to_oxidized(&self, arena: &'a bumpalo::Bump) -> Self::Output {
        arena.alloc(obr::decl_defs::Element {
            origin: self.origin.to_oxidized(arena),
            visibility: self.visibility.to_oxidized(arena),
            deprecated: self.deprecated.map(|x| {
                bumpalo::collections::String::from_utf8_lossy_in(x.as_bytes(), arena)
                    .into_bump_str()
            }),
            flags: self.flags,
        })
    }
}
