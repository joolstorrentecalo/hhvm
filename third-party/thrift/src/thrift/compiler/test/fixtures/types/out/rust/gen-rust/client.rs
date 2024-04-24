// @generated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
// This file is probably not the place you want to edit!

//! Client implementation for each service in `module`.

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, unused_imports, clippy::all)]

#[doc(inline)]
pub use :: as types;

pub mod errors {
    #[doc(inline)]
    pub use ::::errors::some_service;
    #[doc(inline)]
    #[allow(ambiguous_glob_reexports)]
    pub use ::::errors::some_service::*;
}

pub(crate) use crate as client;
pub(crate) use ::::services;

// Used by Thrift-generated code to implement service inheritance.
#[doc(hidden)]
#[deprecated]
pub mod dependencies {
    pub mod included {
        pub use included__clients::*;
    }
}


/// Client definitions for `SomeService`.
pub struct SomeServiceImpl<P, T, S = ::fbthrift::NoopSpawner> {
    transport: T,
    _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
}

impl<P, T, S> SomeServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    pub fn new(
        transport: T,
    ) -> Self {
        Self {
            transport,
            _phantom: ::std::marker::PhantomData,
        }
    }

    pub fn transport(&self) -> &T {
        &self.transport
    }


    fn _bounce_map_impl(
        &self,
        arg_m: &included__types::SomeMap,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "SomeService";
            SERVICE_METHOD_NAME = "SomeService.bounce_map";
        }
        let args = self::Args_SomeService_bounce_map {
            m: arg_m,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("bounce_map", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "SomeService.bounce_map"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let (res, _de): (::std::result::Result<crate::services::some_service::BounceMapExn, _>, _) =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::some_service::BounceMapError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "SomeService.bounce_map"))
        .boxed()
    }

    fn _binary_keyed_map_impl(
        &self,
        arg_r: &[::std::primitive::i64],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "SomeService";
            SERVICE_METHOD_NAME = "SomeService.binary_keyed_map";
        }
        let args = self::Args_SomeService_binary_keyed_map {
            r: arg_r,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("binary_keyed_map", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "SomeService.binary_keyed_map"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let (res, _de): (::std::result::Result<crate::services::some_service::BinaryKeyedMapExn, _>, _) =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::some_service::BinaryKeyedMapError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "SomeService.binary_keyed_map"))
        .boxed()
    }
}

pub trait SomeService: ::std::marker::Send {
    fn bounce_map(
        &self,
        arg_m: &included__types::SomeMap,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>>;

    fn binary_keyed_map(
        &self,
        arg_r: &[::std::primitive::i64],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>>;
}

pub trait SomeServiceExt<T>: SomeService
where
    T: ::fbthrift::Transport,
{
    fn bounce_map_with_rpc_opts(
        &self,
        arg_m: &included__types::SomeMap,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>>;
    fn binary_keyed_map_with_rpc_opts(
        &self,
        arg_r: &[::std::primitive::i64],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>>;

    fn transport(&self) -> &T;
}

struct Args_SomeService_bounce_map<'a> {
    m: &'a included__types::SomeMap,
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_SomeService_bounce_map<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "SomeService.bounce_map"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("m", ::fbthrift::TType::Map, 1i16);
        ::fbthrift::Serialize::write(&self.m, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

struct Args_SomeService_binary_keyed_map<'a> {
    r: &'a [::std::primitive::i64],
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_SomeService_binary_keyed_map<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "SomeService.binary_keyed_map"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("r", ::fbthrift::TType::List, 1i16);
        ::fbthrift::Serialize::write(&self.r, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P, T, S> SomeService for SomeServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn bounce_map(
        &self,
        arg_m: &included__types::SomeMap,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>> {
        let rpc_options = T::RpcOptions::default();
        self._bounce_map_impl(
            arg_m,
            rpc_options,
        )
    }
    fn binary_keyed_map(
        &self,
        arg_r: &[::std::primitive::i64],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>> {
        let rpc_options = T::RpcOptions::default();
        self._binary_keyed_map_impl(
            arg_r,
            rpc_options,
        )
    }
}

impl<P, T, S> SomeServiceExt<T> for SomeServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn bounce_map_with_rpc_opts(
        &self,
        arg_m: &included__types::SomeMap,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>> {
        self._bounce_map_impl(
            arg_m,
            rpc_options,
        )
    }
    fn binary_keyed_map_with_rpc_opts(
        &self,
        arg_r: &[::std::primitive::i64],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>> {
        self._binary_keyed_map_impl(
            arg_r,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
      self.transport()
    }
}

#[allow(deprecated)]
impl<'a, S> SomeService for S
where
    S: ::std::convert::AsRef<dyn SomeService + 'a>,
    S: ::std::marker::Send,
{
    fn bounce_map(
        &self,
        arg_m: &included__types::SomeMap,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>> {
        self.as_ref().bounce_map(
            arg_m,
        )
    }
    fn binary_keyed_map(
        &self,
        arg_r: &[::std::primitive::i64],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>> {
        self.as_ref().binary_keyed_map(
            arg_r,
        )
    }
}

#[allow(deprecated)]
impl<S, T> SomeServiceExt<T> for S
where
    S: ::std::convert::AsRef<dyn SomeService + 'static>,
    S: ::std::convert::AsRef<dyn SomeServiceExt<T> + 'static>,
    S: ::std::marker::Send,
    T: ::fbthrift::Transport,
{
    fn bounce_map_with_rpc_opts(
        &self,
        arg_m: &included__types::SomeMap,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>> {
        <Self as ::std::convert::AsRef<dyn SomeServiceExt<T>>>::as_ref(self).bounce_map_with_rpc_opts(
            arg_m,
            rpc_options,
        )
    }
    fn binary_keyed_map_with_rpc_opts(
        &self,
        arg_r: &[::std::primitive::i64],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>> {
        <Self as ::std::convert::AsRef<dyn SomeServiceExt<T>>>::as_ref(self).binary_keyed_map_with_rpc_opts(
            arg_r,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        <dyn SomeServiceExt<T> as SomeServiceExt<T>>::transport(<Self as ::std::convert::AsRef<dyn SomeServiceExt<T>>>::as_ref(self))
    }
}

#[derive(Clone)]
pub struct make_SomeService;

/// To be called by user directly setting up a client. Avoids
/// needing ClientFactory trait in scope, avoids unidiomatic
/// make_Trait name.
///
/// ```
/// # const _: &str = stringify! {
/// use bgs::client::BuckGraphService;
///
/// let protocol = BinaryProtocol::new();
/// let transport = HttpClient::new();
/// let client = <dyn BuckGraphService>::new(protocol, transport);
/// # };
/// ```
impl dyn SomeService {
    pub fn new<P, T>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl SomeService + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
    {
        let spawner = ::fbthrift::help::NoopSpawner;
        Self::with_spawner(protocol, transport, spawner)
    }

    pub fn with_spawner<P, T, S>(
        protocol: P,
        transport: T,
        spawner: S,
    ) -> ::std::sync::Arc<impl SomeService + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(SomeServiceImpl::<P, T, S>::new(transport))
    }
}

impl<T> dyn SomeServiceExt<T>
where
    T: ::fbthrift::Transport,
{
    pub fn new<P>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl SomeServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
    {
        let spawner = ::fbthrift::help::NoopSpawner;
        Self::with_spawner(protocol, transport, spawner)
    }

    pub fn with_spawner<P, S>(
        protocol: P,
        transport: T,
        spawner: S,
    ) -> ::std::sync::Arc<impl SomeServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(SomeServiceImpl::<P, T, S>::new(transport))
    }
}

pub type SomeServiceDynClient = <make_SomeService as ::fbthrift::ClientFactory>::Api;
pub type SomeServiceClient = ::std::sync::Arc<SomeServiceDynClient>;

/// The same thing, but to be called from generic contexts where we are
/// working with a type parameter `C: ClientFactory` to produce clients.
impl ::fbthrift::ClientFactory for make_SomeService {
    type Api = dyn SomeService + ::std::marker::Send + ::std::marker::Sync + 'static;

    fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        <dyn SomeService>::with_spawner(protocol, transport, spawner)
    }
}

