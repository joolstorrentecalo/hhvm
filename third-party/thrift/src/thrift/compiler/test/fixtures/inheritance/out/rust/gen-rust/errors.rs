// @generated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `module`.

/// Error definitions for `MyRoot`.
pub mod my_root {

    pub type DoRootError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_root::DoRootExn> for DoRootError {
        fn from(e: crate::services::my_root::DoRootExn) -> Self {
            match e {
                crate::services::my_root::DoRootExn::ApplicationException(aexn) =>
                    DoRootError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum DoRootReader {}

}

/// Error definitions for `MyNode`.
pub mod my_node {

    pub type DoMidError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_node::DoMidExn> for DoMidError {
        fn from(e: crate::services::my_node::DoMidExn) -> Self {
            match e {
                crate::services::my_node::DoMidExn::ApplicationException(aexn) =>
                    DoMidError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum DoMidReader {}

}

/// Error definitions for `MyLeaf`.
pub mod my_leaf {

    pub type DoLeafError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_leaf::DoLeafExn> for DoLeafError {
        fn from(e: crate::services::my_leaf::DoLeafExn) -> Self {
            match e {
                crate::services::my_leaf::DoLeafExn::ApplicationException(aexn) =>
                    DoLeafError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum DoLeafReader {}

}

