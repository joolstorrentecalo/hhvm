/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/client-methods/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/client-methods/gen-cpp2/HeaderClientMethodsAnnotationOnServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::EchoRequest*>> HeaderClientMethodsAnnotationOnService_echo_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::structure, ::cpp2::EchoResponse*>> HeaderClientMethodsAnnotationOnService_echo_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::EchoRequest*>> HeaderClientMethodsAnnotationOnService_echo_2_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::structure, ::cpp2::EchoResponse*>> HeaderClientMethodsAnnotationOnService_echo_2_presult;
} // namespace cpp2
template <typename RpcOptions>
void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_send_echo(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "echo",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "HeaderClientMethodsAnnotationOnService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_send_echo_2(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "echo_2",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "HeaderClientMethodsAnnotationOnService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  echo(rpcOptions, std::move(callback), p_request);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request) {
  auto [ctx, header] = echoCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_echo(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_request);
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_serialize_echo(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::cpp2::EchoRequest& p_request) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::HeaderClientMethodsAnnotationOnService_echo_pargs args;
    args.get<0>().value = const_cast<::cpp2::EchoRequest*>(&p_request);
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "echo",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_serialize_and_send_echo(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::EchoRequest& p_request, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_echo(rpcOptions, *header, contextStack, p_request);
  if (stealRpcOptions) {
    fbthrift_send_echo(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_echo(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echoCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "HeaderClientMethodsAnnotationOnService.echo",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::sync_echo(::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_echo(rpcOptions, _return, p_request);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::sync_echo(apache::thrift::RpcOptions& rpcOptions, ::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = echoCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_echo(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_request);
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
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
      recv_echo(_return, returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_semifuture_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::cpp2::EchoResponse>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = echoCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_echo, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  apache::thrift::SerializedRequest request = fbthrift_serialize_echo(rpcOptions, *header, contextStack, p_request);
  fbthrift_send_echo(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
}

folly::Future<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::future_echo(const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_echo(rpcOptions, p_request);
}

folly::SemiFuture<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::semifuture_echo(const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_echo(rpcOptions, p_request);
}

folly::Future<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::future_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackType = apache::thrift::FutureCallback<::cpp2::EchoResponse>;
  return fbthrift_semifuture_echo<CallbackType>(rpcOptions, p_request).toUnsafeFuture();
}

folly::SemiFuture<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::semifuture_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackType = apache::thrift::SemiFutureCallback<::cpp2::EchoResponse>;
  return fbthrift_semifuture_echo<CallbackType>(rpcOptions, p_request);
}

folly::Future<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::header_future_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::cpp2::EchoResponse>>(std::move(promise), recv_wrapped_echo, channel_);
  echo(rpcOptions, std::move(callback), p_request);
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::header_semifuture_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_echo, channel_);
  auto callback = std::move(callbackAndFuture.first);
  echo(rpcOptions, std::move(callback), p_request);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::EchoRequest& p_request) {
  echo(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_request);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_wrapped_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::HeaderClientMethodsAnnotationOnService_echo_presult;
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

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_echo(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_instance_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_echo(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_instance_wrapped_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_echo(_return, state);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo_2(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  echo_2(rpcOptions, std::move(callback), p_request);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo_2(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request) {
  auto [ctx, header] = echo_2Ctx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_echo_2(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_request);
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_serialize_echo_2(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::cpp2::EchoRequest& p_request) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::HeaderClientMethodsAnnotationOnService_echo_2_pargs args;
    args.get<0>().value = const_cast<::cpp2::EchoRequest*>(&p_request);
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "echo_2",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_serialize_and_send_echo_2(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::EchoRequest& p_request, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_echo_2(rpcOptions, *header, contextStack, p_request);
  if (stealRpcOptions) {
    fbthrift_send_echo_2(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_echo_2(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo_2Ctx(apache::thrift::RpcOptions* rpcOptions) {
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
      "HeaderClientMethodsAnnotationOnService.echo_2",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::sync_echo_2(::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_echo_2(rpcOptions, _return, p_request);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::sync_echo_2(apache::thrift::RpcOptions& rpcOptions, ::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = echo_2Ctx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_echo_2(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_request);
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
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
      recv_echo_2(_return, returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::fbthrift_semifuture_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::cpp2::EchoResponse>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = echo_2Ctx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_echo_2, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  apache::thrift::SerializedRequest request = fbthrift_serialize_echo_2(rpcOptions, *header, contextStack, p_request);
  fbthrift_send_echo_2(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
}

folly::Future<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::future_echo_2(const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_echo_2(rpcOptions, p_request);
}

folly::SemiFuture<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::semifuture_echo_2(const ::cpp2::EchoRequest& p_request) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_echo_2(rpcOptions, p_request);
}

folly::Future<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::future_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackType = apache::thrift::FutureCallback<::cpp2::EchoResponse>;
  return fbthrift_semifuture_echo_2<CallbackType>(rpcOptions, p_request).toUnsafeFuture();
}

folly::SemiFuture<::cpp2::EchoResponse> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::semifuture_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackType = apache::thrift::SemiFutureCallback<::cpp2::EchoResponse>;
  return fbthrift_semifuture_echo_2<CallbackType>(rpcOptions, p_request);
}

folly::Future<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::header_future_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::cpp2::EchoResponse>>(std::move(promise), recv_wrapped_echo_2, channel_);
  echo_2(rpcOptions, std::move(callback), p_request);
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::header_semifuture_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_echo_2, channel_);
  auto callback = std::move(callbackAndFuture.first);
  echo_2(rpcOptions, std::move(callback), p_request);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::echo_2(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::EchoRequest& p_request) {
  echo_2(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_request);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_wrapped_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::HeaderClientMethodsAnnotationOnService_echo_2_presult;
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

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_echo_2(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_instance_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_echo_2(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::HeaderClientMethodsAnnotationOnService>::recv_instance_wrapped_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_echo_2(_return, state);
}


