/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace apache::thrift::fixtures::types {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int64_t>*>> SomeService_binary_keyed_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::binary, ::apache::thrift::type_class::integral>, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>*>> SomeService_binary_keyed_map_presult;
} // namespace apache::thrift::fixtures::types
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::bounce_mapT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {

  ::apache::thrift::fixtures::types::SomeService_bounce_map_pargs args;
  args.get<0>().value = const_cast<::apache::thrift::fixtures::types::SomeMap*>(&p_m);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "bounce_map",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "apache.org/thrift/fixtures/types/SomeService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}

template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::binary_keyed_mapT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::int64_t>& p_r) {

  ::apache::thrift::fixtures::types::SomeService_binary_keyed_map_pargs args;
  args.get<0>().value = const_cast<::std::vector<::std::int64_t>*>(&p_r);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "binary_keyed_map",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "apache.org/thrift/fixtures/types/SomeService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::bounce_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  bounce_map(rpcOptions, std::move(callback), p_m);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::bounce_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  auto [ctx, header] = bounce_mapCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  bounce_mapImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_m);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::bounce_mapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::apache::thrift::fixtures::types::SomeMap& p_m, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        bounce_mapT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_m);
      } else {
        bounce_mapT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_m);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        bounce_mapT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_m);
      } else {
        bounce_mapT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_m);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::bounce_mapCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "SomeService.bounce_map",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::sync_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_bounce_map(rpcOptions, _return, p_m);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::sync_bounce_map(apache::thrift::RpcOptions& rpcOptions, ::apache::thrift::fixtures::types::SomeMap& _return, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = bounce_mapCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      bounce_mapImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_m);
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_bounce_map(_return, returnState);
  });
}


folly::Future<::apache::thrift::fixtures::types::SomeMap> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::future_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_bounce_map(rpcOptions, p_m);
}

folly::SemiFuture<::apache::thrift::fixtures::types::SomeMap> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::semifuture_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_bounce_map(rpcOptions, p_m);
}

folly::Future<::apache::thrift::fixtures::types::SomeMap> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  folly::Promise<::apache::thrift::fixtures::types::SomeMap> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::apache::thrift::fixtures::types::SomeMap>>(std::move(promise), recv_wrapped_bounce_map, channel_);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return future;
}

folly::SemiFuture<::apache::thrift::fixtures::types::SomeMap> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_bounce_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::header_future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  folly::Promise<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::apache::thrift::fixtures::types::SomeMap>>(std::move(promise), recv_wrapped_bounce_map, channel_);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return future;
}

folly::SemiFuture<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::header_semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_bounce_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::bounce_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  bounce_map(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_m);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_wrapped_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::apache::thrift::fixtures::types::SomeService_bounce_map_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_bounce_map(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_instance_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_bounce_map(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_instance_wrapped_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_bounce_map(_return, state);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::binary_keyed_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::int64_t>& p_r) {
  auto [ctx, header] = binary_keyed_mapCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  binary_keyed_mapImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_r);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::binary_keyed_mapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::int64_t>& p_r, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        binary_keyed_mapT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_r);
      } else {
        binary_keyed_mapT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_r);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        binary_keyed_mapT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_r);
      } else {
        binary_keyed_mapT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_r);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::binary_keyed_mapCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "SomeService.binary_keyed_map",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::sync_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_binary_keyed_map(rpcOptions, _return, p_r);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::sync_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, const ::std::vector<::std::int64_t>& p_r) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = binary_keyed_mapCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      binary_keyed_mapImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_r);
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_binary_keyed_map(_return, returnState);
  });
}


folly::Future<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::future_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_binary_keyed_map(rpcOptions, p_r);
}

folly::SemiFuture<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::semifuture_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_binary_keyed_map(rpcOptions, p_r);
}

folly::Future<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  folly::Promise<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>(std::move(promise), recv_wrapped_binary_keyed_map, channel_);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return future;
}

folly::SemiFuture<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_binary_keyed_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::header_future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  folly::Promise<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>(std::move(promise), recv_wrapped_binary_keyed_map, channel_);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return future;
}

folly::SemiFuture<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::header_semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_binary_keyed_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::binary_keyed_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<::std::int64_t>& p_r) {
  binary_keyed_map(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_r);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_wrapped_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::apache::thrift::fixtures::types::SomeService_binary_keyed_map_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_binary_keyed_map(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_instance_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_binary_keyed_map(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::apache::thrift::fixtures::types::SomeService>::recv_instance_wrapped_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_binary_keyed_map(_return, state);
}


