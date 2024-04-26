// @generated by Thrift for thrift/compiler/test/fixtures/rust-raw-identifiers/src/mod.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `mod`.

/// Error definitions for `Foo`.
pub mod foo {

    pub type ReturnError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::foo::ReturnExn> for ReturnError {
        fn from(e: crate::services::foo::ReturnExn) -> Self {
            match e {
                crate::services::foo::ReturnExn::ApplicationException(aexn) =>
                    ReturnError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum ReturnReader {}

    pub type SuperError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::foo::SuperExn> for SuperError {
        fn from(e: crate::services::foo::SuperExn) -> Self {
            match e {
                crate::services::foo::SuperExn::ApplicationException(aexn) =>
                    SuperError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum SuperReader {}

}

