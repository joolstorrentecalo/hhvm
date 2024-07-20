// @generated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
// This file is probably not the place you want to edit!

//! Client implementation for each service in `module`.

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, unused_imports, clippy::all)]


#[doc(inline)]
pub use :: as types;

pub mod errors;

pub(crate) use crate as client;
pub(crate) use ::::services;


/// Client definitions for `Service`.
pub struct ServiceImpl<P, T, S = ::fbthrift::NoopSpawner> {
    transport: T,
    _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
}

impl<P, T, S> ServiceImpl<P, T, S>
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
        ::fbthrift::help::GetTransport::transport(self)
    }


    fn _func_impl(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>> {
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const SERVICE_NAME: &::std::ffi::CStr = c"Service";
        const SERVICE_METHOD_NAME: &::std::ffi::CStr = c"Service.func";
        let args = self::Args_Service_func {
            arg1: arg_arg1,
            arg2: arg_arg2,
            arg3: arg_arg3,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("func", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME, SERVICE_METHOD_NAME, request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "Service.func"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res = ::fbthrift::help::async_deserialize_response_envelope::<P, crate::errors::service::FuncReader, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(res) => res,
                ::std::result::Result::Err(aexn) => {
                    ::std::result::Result::Err(crate::errors::service::FuncError::ApplicationException(aexn))
                }
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "Service.func"))
        .boxed()
    }
}

impl<P, T, S> ::fbthrift::help::GetTransport<T> for ServiceImpl<P, T, S>
where
    T: ::fbthrift::Transport,
{
    fn transport(&self) -> &T {
        &self.transport
    }
}

pub trait Service: ::std::marker::Send {
    fn func(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>>;
}

pub trait ServiceExt<T>: Service
where
    T: ::fbthrift::Transport,
{
    fn func_with_rpc_opts(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>>;

    fn transport(&self) -> &T;
}

struct Args_Service_func<'a> {
    arg1: &'a ::std::primitive::str,
    arg2: &'a ::std::primitive::str,
    arg3: &'a crate::types::Foo,
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_Service_func<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "Service.func"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("arg1", ::fbthrift::TType::String, 1i16);
        ::fbthrift::Serialize::write(&<crate::types::adapters::StringWithAdapter as ::fbthrift::adapter::ThriftAdapter>::to_thrift_field::<fbthrift::metadata::NoThriftAnnotations>(&self.arg1, 1), p);
        p.write_field_end();
        p.write_field_begin("arg2", ::fbthrift::TType::String, 2i16);
        ::fbthrift::Serialize::write(&self.arg2, p);
        p.write_field_end();
        p.write_field_begin("arg3", ::fbthrift::TType::Struct, 3i16);
        ::fbthrift::Serialize::write(&self.arg3, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P, T, S> Service for ServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn func(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>> {
        let rpc_options = T::RpcOptions::default();
        self._func_impl(
            arg_arg1,
            arg_arg2,
            arg_arg3,
            rpc_options,
        )
    }
}

impl<P, T, S> ServiceExt<T> for ServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn func_with_rpc_opts(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>> {
        self._func_impl(
            arg_arg1,
            arg_arg2,
            arg_arg3,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        self.transport()
    }
}

#[allow(deprecated)]
impl<'a, S> Service for S
where
    S: ::std::convert::AsRef<dyn Service + 'a>,
    S: ::std::marker::Send,
{
    fn func(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>> {
        self.as_ref().func(
            arg_arg1,
            arg_arg2,
            arg_arg3,
        )
    }
}

#[allow(deprecated)]
impl<'a, S, T> ServiceExt<T> for S
where
    S: ::std::convert::AsRef<dyn Service + 'a> + ::std::convert::AsRef<dyn ServiceExt<T> + 'a>,
    S: ::std::marker::Send + ::fbthrift::help::GetTransport<T>,
    T: ::fbthrift::Transport,
{
    fn func_with_rpc_opts(
        &self,
        arg_arg1: &::std::primitive::str,
        arg_arg2: &::std::primitive::str,
        arg_arg3: &crate::types::Foo,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyI32_4873, crate::errors::service::FuncError>> {
        <Self as ::std::convert::AsRef<dyn ServiceExt<T>>>::as_ref(self).func_with_rpc_opts(
            arg_arg1,
            arg_arg2,
            arg_arg3,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        ::fbthrift::help::GetTransport::transport(self)
    }
}

#[derive(Clone)]
pub struct make_Service;

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
impl dyn Service {
    pub fn new<P, T>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl Service + ::std::marker::Send + ::std::marker::Sync + 'static>
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
    ) -> ::std::sync::Arc<impl Service + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(ServiceImpl::<P, T, S>::new(transport))
    }
}

impl<T> dyn ServiceExt<T>
where
    T: ::fbthrift::Transport,
{
    pub fn new<P>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl ServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
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
    ) -> ::std::sync::Arc<impl ServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(ServiceImpl::<P, T, S>::new(transport))
    }
}

pub type ServiceDynClient = <make_Service as ::fbthrift::ClientFactory>::Api;
pub type ServiceClient = ::std::sync::Arc<ServiceDynClient>;

/// The same thing, but to be called from generic contexts where we are
/// working with a type parameter `C: ClientFactory` to produce clients.
impl ::fbthrift::ClientFactory for make_Service {
    type Api = dyn Service + ::std::marker::Send + ::std::marker::Sync + 'static;

    fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        <dyn Service>::with_spawner(protocol, transport, spawner)
    }
}


/// Client definitions for `AdapterService`.
pub struct AdapterServiceImpl<P, T, S = ::fbthrift::NoopSpawner> {
    transport: T,
    _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
}

impl<P, T, S> AdapterServiceImpl<P, T, S>
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
        ::fbthrift::help::GetTransport::transport(self)
    }


    fn _count_impl(
        &self,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>> {
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const SERVICE_NAME: &::std::ffi::CStr = c"AdapterService";
        const SERVICE_METHOD_NAME: &::std::ffi::CStr = c"AdapterService.count";
        let args = self::Args_AdapterService_count {
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("count", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME, SERVICE_METHOD_NAME, request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "AdapterService.count"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res = ::fbthrift::help::async_deserialize_response_envelope::<P, crate::errors::adapter_service::CountReader, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(res) => res,
                ::std::result::Result::Err(aexn) => {
                    ::std::result::Result::Err(crate::errors::adapter_service::CountError::ApplicationException(aexn))
                }
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "AdapterService.count"))
        .boxed()
    }

    fn _adaptedTypes_impl(
        &self,
        arg_arg: &crate::types::HeapAllocated,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>> {
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const SERVICE_NAME: &::std::ffi::CStr = c"AdapterService";
        const SERVICE_METHOD_NAME: &::std::ffi::CStr = c"AdapterService.adaptedTypes";
        let args = self::Args_AdapterService_adaptedTypes {
            arg: arg_arg,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("adaptedTypes", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME, SERVICE_METHOD_NAME, request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "AdapterService.adaptedTypes"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res = ::fbthrift::help::async_deserialize_response_envelope::<P, crate::errors::adapter_service::AdaptedTypesReader, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(res) => res,
                ::std::result::Result::Err(aexn) => {
                    ::std::result::Result::Err(crate::errors::adapter_service::AdaptedTypesError::ApplicationException(aexn))
                }
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "AdapterService.adaptedTypes"))
        .boxed()
    }
}

impl<P, T, S> ::fbthrift::help::GetTransport<T> for AdapterServiceImpl<P, T, S>
where
    T: ::fbthrift::Transport,
{
    fn transport(&self) -> &T {
        &self.transport
    }
}

pub trait AdapterService: ::std::marker::Send {
    fn count(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>>;

    fn adaptedTypes(
        &self,
        arg_arg: &crate::types::HeapAllocated,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>>;
}

pub trait AdapterServiceExt<T>: AdapterService
where
    T: ::fbthrift::Transport,
{
    fn count_with_rpc_opts(
        &self,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>>;
    fn adaptedTypes_with_rpc_opts(
        &self,
        arg_arg: &crate::types::HeapAllocated,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>>;

    fn transport(&self) -> &T;
}

struct Args_AdapterService_count<'a> {
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_AdapterService_count<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "AdapterService.count"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_stop();
        p.write_struct_end();
    }
}

struct Args_AdapterService_adaptedTypes<'a> {
    arg: &'a crate::types::HeapAllocated,
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_AdapterService_adaptedTypes<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "AdapterService.adaptedTypes"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("arg", ::fbthrift::TType::Struct, 1i16);
        ::fbthrift::Serialize::write(&self.arg, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P, T, S> AdapterService for AdapterServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn count(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>> {
        let rpc_options = T::RpcOptions::default();
        self._count_impl(
            rpc_options,
        )
    }
    fn adaptedTypes(
        &self,
        arg_arg: &crate::types::HeapAllocated,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>> {
        let rpc_options = T::RpcOptions::default();
        self._adaptedTypes_impl(
            arg_arg,
            rpc_options,
        )
    }
}

impl<P, T, S> AdapterServiceExt<T> for AdapterServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn count_with_rpc_opts(
        &self,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>> {
        self._count_impl(
            rpc_options,
        )
    }
    fn adaptedTypes_with_rpc_opts(
        &self,
        arg_arg: &crate::types::HeapAllocated,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>> {
        self._adaptedTypes_impl(
            arg_arg,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        self.transport()
    }
}

#[allow(deprecated)]
impl<'a, S> AdapterService for S
where
    S: ::std::convert::AsRef<dyn AdapterService + 'a>,
    S: ::std::marker::Send,
{
    fn count(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>> {
        self.as_ref().count(
        )
    }
    fn adaptedTypes(
        &self,
        arg_arg: &crate::types::HeapAllocated,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>> {
        self.as_ref().adaptedTypes(
            arg_arg,
        )
    }
}

#[allow(deprecated)]
impl<'a, S, T> AdapterServiceExt<T> for S
where
    S: ::std::convert::AsRef<dyn AdapterService + 'a> + ::std::convert::AsRef<dyn AdapterServiceExt<T> + 'a>,
    S: ::std::marker::Send + ::fbthrift::help::GetTransport<T>,
    T: ::fbthrift::Transport,
{
    fn count_with_rpc_opts(
        &self,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::CountingStruct, crate::errors::adapter_service::CountError>> {
        <Self as ::std::convert::AsRef<dyn AdapterServiceExt<T>>>::as_ref(self).count_with_rpc_opts(
            rpc_options,
        )
    }
    fn adaptedTypes_with_rpc_opts(
        &self,
        arg_arg: &crate::types::HeapAllocated,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::HeapAllocated, crate::errors::adapter_service::AdaptedTypesError>> {
        <Self as ::std::convert::AsRef<dyn AdapterServiceExt<T>>>::as_ref(self).adaptedTypes_with_rpc_opts(
            arg_arg,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        ::fbthrift::help::GetTransport::transport(self)
    }
}

#[derive(Clone)]
pub struct make_AdapterService;

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
impl dyn AdapterService {
    pub fn new<P, T>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl AdapterService + ::std::marker::Send + ::std::marker::Sync + 'static>
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
    ) -> ::std::sync::Arc<impl AdapterService + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(AdapterServiceImpl::<P, T, S>::new(transport))
    }
}

impl<T> dyn AdapterServiceExt<T>
where
    T: ::fbthrift::Transport,
{
    pub fn new<P>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl AdapterServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
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
    ) -> ::std::sync::Arc<impl AdapterServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(AdapterServiceImpl::<P, T, S>::new(transport))
    }
}

pub type AdapterServiceDynClient = <make_AdapterService as ::fbthrift::ClientFactory>::Api;
pub type AdapterServiceClient = ::std::sync::Arc<AdapterServiceDynClient>;

/// The same thing, but to be called from generic contexts where we are
/// working with a type parameter `C: ClientFactory` to produce clients.
impl ::fbthrift::ClientFactory for make_AdapterService {
    type Api = dyn AdapterService + ::std::marker::Send + ::std::marker::Sync + 'static;

    fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        <dyn AdapterService>::with_spawner(protocol, transport, spawner)
    }
}

