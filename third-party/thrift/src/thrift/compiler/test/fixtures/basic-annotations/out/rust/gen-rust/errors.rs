// @generated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `module`.

/// Error definitions for `MyService`.
pub mod my_service {

    pub trait AsMyException {
        fn as_my_exception(&self) -> Option<&crate::types::MyException>;
    }

    impl AsMyException for ::anyhow::Error {
        fn as_my_exception(&self) -> Option<&crate::types::MyException> {
            for cause in self.chain() {
                if let Some(PingError::myExcept(e)) = cause.downcast_ref::<PingError>() {
                    return Some(e);
                }
            }
            None
        }
    }

    /// Errors for ping (client side).
    #[derive(Debug)]
    pub enum PingError {
        myExcept(crate::types::MyException),
        ApplicationException(::fbthrift::ApplicationException),
        ThriftError(::anyhow::Error),
    }

    /// Human-readable string representation of the Thrift client error.
    ///
    /// By default, this will not print the full cause chain. If you would like to print the underlying error
    /// cause, either use `format!("{:?}", anyhow::Error::from(client_err))` or print this using the
    /// alternate formatter `{:#}` instead of just `{}`.
    impl ::std::fmt::Display for PingError {
        fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::result::Result<(), ::std::fmt::Error> {
            match self {
                Self::myExcept(inner) => {
                    if f.alternate() {
                        write!(f, "MyService::ping failed with variant `myExcept`: {:#}", inner)?;
                    } else {
                        write!(f, "MyService::ping failed with myExcept(MyException)")?;
                    }
                }
                Self::ApplicationException(inner) => {
                    write!(f, "MyService::ping failed with ApplicationException")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
                Self::ThriftError(inner) => {
                    write!(f, "MyService::ping failed with ThriftError")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
            }

            Ok(())
        }
    }

    impl ::std::error::Error for PingError {
        fn source(&self) -> ::std::option::Option<&(dyn ::std::error::Error + 'static)> {
            match self {
                Self::myExcept(ref inner) => {
                    Some(inner)
                }
                Self::ApplicationException(ref inner) => {
                    Some(inner)
                }
                Self::ThriftError(ref inner) => {
                    Some(inner.as_ref())
                }
            }
        }
    }

    impl ::std::convert::From<crate::types::MyException> for PingError {
        fn from(e: crate::types::MyException) -> Self {
            Self::myExcept(e)
        }
    }

    impl AsMyException for PingError {
        fn as_my_exception(&self) -> Option<&crate::types::MyException> {
            match self {
                Self::myExcept(inner) => Some(inner),
                _ => None,
            }
        }
    }

    impl ::std::convert::From<::anyhow::Error> for PingError {
        fn from(err: ::anyhow::Error) -> Self {
            Self::ThriftError(err)
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for PingError {
        fn from(ae: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(ae)
        }
    }
    impl ::std::convert::From<crate::services::my_service::PingExn> for PingError {
        fn from(e: crate::services::my_service::PingExn) -> Self {
            match e {
                crate::services::my_service::PingExn::ApplicationException(aexn) =>
                    PingError::ApplicationException(aexn),
                crate::services::my_service::PingExn::myExcept(exn) =>
                    PingError::myExcept(exn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PingReader {}

    pub type GetRandomDataError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::GetRandomDataExn> for GetRandomDataError {
        fn from(e: crate::services::my_service::GetRandomDataExn) -> Self {
            match e {
                crate::services::my_service::GetRandomDataExn::ApplicationException(aexn) =>
                    GetRandomDataError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum GetRandomDataReader {}

    pub type HasDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::HasDataByIdExn> for HasDataByIdError {
        fn from(e: crate::services::my_service::HasDataByIdExn) -> Self {
            match e {
                crate::services::my_service::HasDataByIdExn::ApplicationException(aexn) =>
                    HasDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum HasDataByIdReader {}

    pub type GetDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::GetDataByIdExn> for GetDataByIdError {
        fn from(e: crate::services::my_service::GetDataByIdExn) -> Self {
            match e {
                crate::services::my_service::GetDataByIdExn::ApplicationException(aexn) =>
                    GetDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum GetDataByIdReader {}

    pub type PutDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::PutDataByIdExn> for PutDataByIdError {
        fn from(e: crate::services::my_service::PutDataByIdExn) -> Self {
            match e {
                crate::services::my_service::PutDataByIdExn::ApplicationException(aexn) =>
                    PutDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PutDataByIdReader {}

    pub type LobDataByIdError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::LobDataByIdExn> for LobDataByIdError {
        fn from(e: crate::services::my_service::LobDataByIdExn) -> Self {
            match e {
                crate::services::my_service::LobDataByIdExn::ApplicationException(aexn) =>
                    LobDataByIdError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum LobDataByIdReader {}

    pub type DoNothingError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::DoNothingExn> for DoNothingError {
        fn from(e: crate::services::my_service::DoNothingExn) -> Self {
            match e {
                crate::services::my_service::DoNothingExn::ApplicationException(aexn) =>
                    DoNothingError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum DoNothingReader {}

}

/// Error definitions for `MyServicePrioParent`.
pub mod my_service_prio_parent {

    pub type PingError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service_prio_parent::PingExn> for PingError {
        fn from(e: crate::services::my_service_prio_parent::PingExn) -> Self {
            match e {
                crate::services::my_service_prio_parent::PingExn::ApplicationException(aexn) =>
                    PingError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PingReader {}

    pub type PongError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service_prio_parent::PongExn> for PongError {
        fn from(e: crate::services::my_service_prio_parent::PongExn) -> Self {
            match e {
                crate::services::my_service_prio_parent::PongExn::ApplicationException(aexn) =>
                    PongError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PongReader {}

}

/// Error definitions for `MyServicePrioChild`.
pub mod my_service_prio_child {

    pub type PangError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service_prio_child::PangExn> for PangError {
        fn from(e: crate::services::my_service_prio_child::PangExn) -> Self {
            match e {
                crate::services::my_service_prio_child::PangExn::ApplicationException(aexn) =>
                    PangError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum PangReader {}

}

/// Error definitions for `BadInteraction`.
pub mod bad_interaction {

    pub type FooError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::bad_interaction::FooExn> for FooError {
        fn from(e: crate::services::bad_interaction::FooExn) -> Self {
            match e {
                crate::services::bad_interaction::FooExn::ApplicationException(aexn) =>
                    FooError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum FooReader {}

}

/// Error definitions for `BadService`.
pub mod bad_service {

    pub type BarError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::bad_service::BarExn> for BarError {
        fn from(e: crate::services::bad_service::BarExn) -> Self {
            match e {
                crate::services::bad_service::BarExn::ApplicationException(aexn) =>
                    BarError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum BarReader {}

}

/// Error definitions for `FooBarBazService`.
pub mod foo_bar_baz_service {

    pub type FooError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::foo_bar_baz_service::FooExn> for FooError {
        fn from(e: crate::services::foo_bar_baz_service::FooExn) -> Self {
            match e {
                crate::services::foo_bar_baz_service::FooExn::ApplicationException(aexn) =>
                    FooError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum FooReader {}

    pub type BarError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::foo_bar_baz_service::BarExn> for BarError {
        fn from(e: crate::services::foo_bar_baz_service::BarExn) -> Self {
            match e {
                crate::services::foo_bar_baz_service::BarExn::ApplicationException(aexn) =>
                    BarError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum BarReader {}

    pub type BazError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::foo_bar_baz_service::BazExn> for BazError {
        fn from(e: crate::services::foo_bar_baz_service::BazExn) -> Self {
            match e {
                crate::services::foo_bar_baz_service::BazExn::ApplicationException(aexn) =>
                    BazError::ApplicationException(aexn),
            }
        }
    }

    #[doc(hidden)]
    pub enum BazReader {}

}

