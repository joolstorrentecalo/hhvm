// @generated by Thrift for thrift/compiler/test/fixtures/complex-union/src/module.thrift
// This file is probably not the place you want to edit!


#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::redundant_closure, clippy::type_complexity)]

#[allow(unused_imports)]
pub(crate) use crate as types;

pub type containerTypedef = ::std::collections::BTreeMap<::std::primitive::i16, ::std::string::String>;

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Debug)]
pub enum ComplexUnion {
    intValue(::std::primitive::i64),
    stringValue(::std::string::String),
    intListValue(::std::vec::Vec<::std::primitive::i64>),
    stringListValue(::std::vec::Vec<::std::string::String>),
    typedefValue(crate::types::containerTypedef),
    stringRef(::std::string::String),
    UnknownField(::std::primitive::i32),
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Debug)]
pub enum ListUnion {
    intListValue(::std::vec::Vec<::std::primitive::i64>),
    stringListValue(::std::vec::Vec<::std::string::String>),
    UnknownField(::std::primitive::i32),
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Debug)]
pub enum DataUnion {
    binaryData(::std::vec::Vec<::std::primitive::u8>),
    stringData(::std::string::String),
    UnknownField(::std::primitive::i32),
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct Val {
    pub strVal: ::std::string::String,
    pub intVal: ::std::primitive::i32,
    pub typedefValue: crate::types::containerTypedef,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `@rust.Exhaustive` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Debug)]
pub enum ValUnion {
    v1(crate::types::Val),
    v2(crate::types::Val),
    UnknownField(::std::primitive::i32),
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Debug)]
pub enum VirtualComplexUnion {
    thingOne(::std::string::String),
    thingTwo(::std::string::String),
    UnknownField(::std::primitive::i32),
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct NonCopyableStruct {
    pub num: ::std::primitive::i64,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `@rust.Exhaustive` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Debug)]
pub enum NonCopyableUnion {
    s(crate::types::NonCopyableStruct),
    UnknownField(::std::primitive::i32),
}


impl ::std::default::Default for ComplexUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for ComplexUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::ComplexUnion {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::UnionType
    }
}

impl<P> ::fbthrift::Serialize<P> for ComplexUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("ComplexUnion");
        match self {
            Self::intValue(inner) => {
                p.write_field_begin("intValue", ::fbthrift::TType::I64, 1);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::stringValue(inner) => {
                p.write_field_begin("stringValue", ::fbthrift::TType::String, 5);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::intListValue(inner) => {
                p.write_field_begin("intListValue", ::fbthrift::TType::List, 2);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::stringListValue(inner) => {
                p.write_field_begin("stringListValue", ::fbthrift::TType::List, 3);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::typedefValue(inner) => {
                p.write_field_begin("typedefValue", ::fbthrift::TType::Map, 9);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::stringRef(inner) => {
                p.write_field_begin("stringRef", ::fbthrift::TType::String, 14);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for ComplexUnion
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("intListValue", ::fbthrift::TType::List, 2),
            ::fbthrift::Field::new("intValue", ::fbthrift::TType::I64, 1),
            ::fbthrift::Field::new("stringListValue", ::fbthrift::TType::List, 3),
            ::fbthrift::Field::new("stringRef", ::fbthrift::TType::String, 14),
            ::fbthrift::Field::new("stringValue", ::fbthrift::TType::String, 5),
            ::fbthrift::Field::new("typedefValue", ::fbthrift::TType::Map, 9),
        ];
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a ComplexUnion")?;
        let mut once = false;
        let mut alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (::fbthrift::TType::I64, 1, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::intValue(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::String, 5, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::stringValue(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::List, 2, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::intListValue(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::List, 3, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::stringListValue(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::Map, 9, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::typedefValue(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::String, 14, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::stringRef(::fbthrift::Deserialize::read(p)?));
                }
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "ComplexUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl ComplexUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::intValue(_) => Some(("intValue", "intValue")),
            Self::stringValue(_) => Some(("stringValue", "stringValue")),
            Self::intListValue(_) => Some(("intListValue", "intListValue")),
            Self::stringListValue(_) => Some(("stringListValue", "stringListValue")),
            Self::typedefValue(_) => Some(("typedefValue", "typedefValue")),
            Self::stringRef(_) => Some(("stringRef", "stringRef")),
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for ComplexUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            5 => {
            },
            2 => {
            },
            3 => {
            },
            9 => {
            },
            14 => {

                if type_id == ::std::any::TypeId::of::<cpp__types::Ref>() {
                    let mut tmp = Some(cpp__types::Ref {
                        r#type: cpp__types::RefType::Unique,
                        ..::std::default::Default::default()
                    });
                    let r: &mut dyn ::std::any::Any = &mut tmp;
                    let r: &mut Option<T> = r.downcast_mut().unwrap();
                    return r.take();
                }
            },
            _ => {}
        }

        None
    }
}


impl ::std::default::Default for ListUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for ListUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::ListUnion {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::UnionType
    }
}

impl<P> ::fbthrift::Serialize<P> for ListUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("ListUnion");
        match self {
            Self::intListValue(inner) => {
                p.write_field_begin("intListValue", ::fbthrift::TType::List, 2);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::stringListValue(inner) => {
                p.write_field_begin("stringListValue", ::fbthrift::TType::List, 3);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for ListUnion
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("intListValue", ::fbthrift::TType::List, 2),
            ::fbthrift::Field::new("stringListValue", ::fbthrift::TType::List, 3),
        ];
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a ListUnion")?;
        let mut once = false;
        let mut alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (::fbthrift::TType::List, 2, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::intListValue(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::List, 3, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::stringListValue(::fbthrift::Deserialize::read(p)?));
                }
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "ListUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl ListUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::intListValue(_) => Some(("intListValue", "intListValue")),
            Self::stringListValue(_) => Some(("stringListValue", "stringListValue")),
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for ListUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            2 => {
            },
            3 => {
            },
            _ => {}
        }

        None
    }
}


impl ::std::default::Default for DataUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for DataUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::DataUnion {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::UnionType
    }
}

impl<P> ::fbthrift::Serialize<P> for DataUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("DataUnion");
        match self {
            Self::binaryData(inner) => {
                p.write_field_begin("binaryData", ::fbthrift::TType::String, 1);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::stringData(inner) => {
                p.write_field_begin("stringData", ::fbthrift::TType::String, 2);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for DataUnion
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("binaryData", ::fbthrift::TType::String, 1),
            ::fbthrift::Field::new("stringData", ::fbthrift::TType::String, 2),
        ];
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a DataUnion")?;
        let mut once = false;
        let mut alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (::fbthrift::TType::String, 1, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::binaryData(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::String, 2, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::stringData(::fbthrift::Deserialize::read(p)?));
                }
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "DataUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl DataUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::binaryData(_) => Some(("binaryData", "binaryData")),
            Self::stringData(_) => Some(("stringData", "stringData")),
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for DataUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {
            },
            _ => {}
        }

        None
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::Val {
    fn default() -> Self {
        Self {
            strVal: ::std::default::Default::default(),
            intVal: ::std::default::Default::default(),
            typedefValue: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::Val {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("Val")
            .field("strVal", &self.strVal)
            .field("intVal", &self.intVal)
            .field("typedefValue", &self.typedefValue)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::Val {}
unsafe impl ::std::marker::Sync for self::Val {}
impl ::std::marker::Unpin for self::Val {}
impl ::std::panic::RefUnwindSafe for self::Val {}
impl ::std::panic::UnwindSafe for self::Val {}

impl ::fbthrift::GetTType for self::Val {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::Val {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::StructType
    }
}

impl<P> ::fbthrift::Serialize<P> for self::Val
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("Val");
        p.write_field_begin("strVal", ::fbthrift::TType::String, 1);
        ::fbthrift::Serialize::write(&self.strVal, p);
        p.write_field_end();
        p.write_field_begin("intVal", ::fbthrift::TType::I32, 2);
        ::fbthrift::Serialize::write(&self.intVal, p);
        p.write_field_end();
        p.write_field_begin("typedefValue", ::fbthrift::TType::Map, 9);
        ::fbthrift::Serialize::write(&self.typedefValue, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::Val
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("intVal", ::fbthrift::TType::I32, 2),
            ::fbthrift::Field::new("strVal", ::fbthrift::TType::String, 1),
            ::fbthrift::Field::new("typedefValue", ::fbthrift::TType::Map, 9),
        ];
        let mut field_strVal = ::std::option::Option::None;
        let mut field_intVal = ::std::option::Option::None;
        let mut field_typedefValue = ::std::option::Option::None;
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a Val")?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::String, 1) => field_strVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 2) => field_intVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::Map, 9) => field_typedefValue = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            strVal: field_strVal.unwrap_or_default(),
            intVal: field_intVal.unwrap_or_default(),
            typedefValue: field_typedefValue.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for Val {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {
            },
            9 => {
            },
            _ => {}
        }

        None
    }
}



impl ::std::default::Default for ValUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for ValUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::ValUnion {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::UnionType
    }
}

impl<P> ::fbthrift::Serialize<P> for ValUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("ValUnion");
        match self {
            Self::v1(inner) => {
                p.write_field_begin("v1", ::fbthrift::TType::Struct, 1);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::v2(inner) => {
                p.write_field_begin("v2", ::fbthrift::TType::Struct, 2);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for ValUnion
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("v1", ::fbthrift::TType::Struct, 1),
            ::fbthrift::Field::new("v2", ::fbthrift::TType::Struct, 2),
        ];
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a ValUnion")?;
        let mut once = false;
        let mut alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (::fbthrift::TType::Struct, 1, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::v1(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::Struct, 2, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::v2(::fbthrift::Deserialize::read(p)?));
                }
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "ValUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl ValUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::v1(_) => Some(("v1", "v1")),
            Self::v2(_) => Some(("v2", "v2")),
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for ValUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {
            },
            _ => {}
        }

        None
    }
}


impl ::std::default::Default for VirtualComplexUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for VirtualComplexUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::VirtualComplexUnion {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::UnionType
    }
}

impl<P> ::fbthrift::Serialize<P> for VirtualComplexUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("VirtualComplexUnion");
        match self {
            Self::thingOne(inner) => {
                p.write_field_begin("thingOne", ::fbthrift::TType::String, 1);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::thingTwo(inner) => {
                p.write_field_begin("thingTwo", ::fbthrift::TType::String, 2);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for VirtualComplexUnion
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("thingOne", ::fbthrift::TType::String, 1),
            ::fbthrift::Field::new("thingTwo", ::fbthrift::TType::String, 2),
        ];
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a VirtualComplexUnion")?;
        let mut once = false;
        let mut alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (::fbthrift::TType::String, 1, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::thingOne(::fbthrift::Deserialize::read(p)?));
                }
                (::fbthrift::TType::String, 2, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::thingTwo(::fbthrift::Deserialize::read(p)?));
                }
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "VirtualComplexUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl VirtualComplexUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::thingOne(_) => Some(("thingOne", "thingOne")),
            Self::thingTwo(_) => Some(("thingTwo", "thingTwo")),
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for VirtualComplexUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {
            },
            _ => {}
        }

        None
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::NonCopyableStruct {
    fn default() -> Self {
        Self {
            num: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::NonCopyableStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("NonCopyableStruct")
            .field("num", &self.num)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::NonCopyableStruct {}
unsafe impl ::std::marker::Sync for self::NonCopyableStruct {}
impl ::std::marker::Unpin for self::NonCopyableStruct {}
impl ::std::panic::RefUnwindSafe for self::NonCopyableStruct {}
impl ::std::panic::UnwindSafe for self::NonCopyableStruct {}

impl ::fbthrift::GetTType for self::NonCopyableStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::NonCopyableStruct {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::StructType
    }
}

impl<P> ::fbthrift::Serialize<P> for self::NonCopyableStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("NonCopyableStruct");
        p.write_field_begin("num", ::fbthrift::TType::I64, 1);
        ::fbthrift::Serialize::write(&self.num, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::NonCopyableStruct
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("num", ::fbthrift::TType::I64, 1),
        ];
        let mut field_num = ::std::option::Option::None;
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a NonCopyableStruct")?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I64, 1) => field_num = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            num: field_num.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for NonCopyableStruct {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            _ => {}
        }

        None
    }
}



impl ::std::default::Default for NonCopyableUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for NonCopyableUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetTypeNameType for self::NonCopyableUnion {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::UnionType
    }
}

impl<P> ::fbthrift::Serialize<P> for NonCopyableUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("NonCopyableUnion");
        match self {
            Self::s(inner) => {
                p.write_field_begin("s", ::fbthrift::TType::Struct, 1);
                ::fbthrift::Serialize::write(inner, p);
                p.write_field_end();
            }
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for NonCopyableUnion
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("s", ::fbthrift::TType::Struct, 1),
        ];
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a NonCopyableUnion")?;
        let mut once = false;
        let mut alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (::fbthrift::TType::Struct, 1, false) => {
                    once = true;
                    alt = ::std::option::Option::Some(Self::s(::fbthrift::Deserialize::read(p)?));
                }
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "NonCopyableUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl NonCopyableUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::s(_) => Some(("s", "s")),
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for NonCopyableUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            _ => {}
        }

        None
    }
}

mod dot_dot {
    #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct OtherFields(pub(crate) ());

    #[allow(dead_code)] // if serde isn't being used
    pub(super) fn default_for_serde_deserialize() -> OtherFields {
        OtherFields(())
    }
}

pub(crate) mod r#impl {
    use ref_cast::RefCast;

    #[derive(RefCast)]
    #[repr(transparent)]
    pub(crate) struct LocalImpl<T>(T);

    #[allow(unused)]
    pub(crate) fn write<T, P>(value: &T, p: &mut P)
    where
        LocalImpl<T>: ::fbthrift::Serialize<P>,
        P: ::fbthrift::ProtocolWriter,
    {
        ::fbthrift::Serialize::write(LocalImpl::ref_cast(value), p);
    }

    #[allow(unused)]
    pub(crate) fn read<T, P>(p: &mut P) -> ::anyhow::Result<T>
    where
        LocalImpl<T>: ::fbthrift::Deserialize<P>,
        P: ::fbthrift::ProtocolReader,
    {
        let value: LocalImpl<T> = ::fbthrift::Deserialize::read(p)?;
        ::std::result::Result::Ok(value.0)
    }
}
