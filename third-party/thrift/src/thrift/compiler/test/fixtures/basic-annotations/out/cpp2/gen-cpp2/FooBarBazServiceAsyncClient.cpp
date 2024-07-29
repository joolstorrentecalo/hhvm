/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/FooBarBazServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> FooBarBazService_foo_pargs;
typedef apache::thrift::ThriftPresult<true> FooBarBazService_foo_presult;
typedef apache::thrift::ThriftPresult<false> FooBarBazService_bar_pargs;
typedef apache::thrift::ThriftPresult<true> FooBarBazService_bar_presult;
typedef apache::thrift::ThriftPresult<false> FooBarBazService_baz_pargs;
typedef apache::thrift::ThriftPresult<true> FooBarBazService_baz_presult;
} // namespace cpp2
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::FooBarBazService>::fbthrift_serialize_foo(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::cpp2::FooBarBazService_foo_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "foo",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::FooBarBazService>::fbthrift_send_foo(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "foo",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "FooBarBazService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::FooBarBazService>::fbthrift_serialize_bar(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::cpp2::FooBarBazService_bar_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "bar",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::FooBarBazService>::fbthrift_send_bar(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "bar",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "FooBarBazService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::FooBarBazService>::fbthrift_serialize_baz(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::cpp2::FooBarBazService_baz_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "baz",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::FooBarBazService>::fbthrift_send_baz(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "baz",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "FooBarBazService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::cpp2::FooBarBazService>::foo(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  foo(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::FooBarBazService>::foo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = fooCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fooImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::FooBarBazService>::fooImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_foo(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_foo(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_foo(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::FooBarBazService>::fooCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "FooBarBazService.foo",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::FooBarBazService>::sync_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_foo(rpcOptions);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::sync_foo(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = fooCtx(&rpcOptions);
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
      fooImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      recv_foo(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::future_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_foo(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::semifuture_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_foo(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::future_foo(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_foo, channel_);
  foo(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::semifuture_foo(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_foo, channel_);
  auto callback = std::move(callbackAndFuture.first);
  foo(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::FooBarBazService>::header_future_foo(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_foo, channel_);
  foo(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::FooBarBazService>::header_semifuture_foo(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_foo, channel_);
  auto callback = std::move(callbackAndFuture.first);
  foo(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::foo(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  foo(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::FooBarBazService>::recv_wrapped_foo(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::FooBarBazService_foo_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::FooBarBazService>::recv_foo(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_foo(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::FooBarBazService>::recv_instance_foo(::apache::thrift::ClientReceiveState& state) {
  recv_foo(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::FooBarBazService>::recv_instance_wrapped_foo(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_foo(state);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::bar(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  bar(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::FooBarBazService>::bar(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = barCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  barImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::FooBarBazService>::barImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_bar(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_bar(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_bar(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::FooBarBazService>::barCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "FooBarBazService.bar",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::FooBarBazService>::sync_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_bar(rpcOptions);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::sync_bar(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = barCtx(&rpcOptions);
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
      barImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      recv_bar(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::future_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_bar(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::semifuture_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_bar(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::future_bar(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_bar, channel_);
  bar(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::semifuture_bar(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_bar, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bar(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::FooBarBazService>::header_future_bar(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_bar, channel_);
  bar(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::FooBarBazService>::header_semifuture_bar(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_bar, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bar(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::bar(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  bar(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::FooBarBazService>::recv_wrapped_bar(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::FooBarBazService_bar_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::FooBarBazService>::recv_bar(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_bar(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::FooBarBazService>::recv_instance_bar(::apache::thrift::ClientReceiveState& state) {
  recv_bar(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::FooBarBazService>::recv_instance_wrapped_bar(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_bar(state);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::baz(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  baz(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::FooBarBazService>::baz(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = bazCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  bazImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::FooBarBazService>::bazImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_baz(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_baz(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_baz(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::FooBarBazService>::bazCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "FooBarBazService.baz",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::FooBarBazService>::sync_baz() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_baz(rpcOptions);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::sync_baz(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = bazCtx(&rpcOptions);
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
      bazImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      recv_baz(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::future_baz() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_baz(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::semifuture_baz() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_baz(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::future_baz(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_baz, channel_);
  baz(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::FooBarBazService>::semifuture_baz(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_baz, channel_);
  auto callback = std::move(callbackAndFuture.first);
  baz(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::FooBarBazService>::header_future_baz(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_baz, channel_);
  baz(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::FooBarBazService>::header_semifuture_baz(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_baz, channel_);
  auto callback = std::move(callbackAndFuture.first);
  baz(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::FooBarBazService>::baz(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  baz(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::FooBarBazService>::recv_wrapped_baz(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::FooBarBazService_baz_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::FooBarBazService>::recv_baz(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_baz(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::FooBarBazService>::recv_instance_baz(::apache::thrift::ClientReceiveState& state) {
  recv_baz(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::FooBarBazService>::recv_instance_wrapped_baz(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_baz(state);
}


