/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FB303ServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace test::fixtures::basic {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int32_t*>> FB303Service_simple_rpc_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::structure, ::test::fixtures::basic::ReservedKeyword*>> FB303Service_simple_rpc_presult;
} // namespace test::fixtures::basic
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::test::fixtures::basic::FB303Service>::fbthrift_serialize_simple_rpc(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int32_t p_int_parameter) {
  ::test::fixtures::basic::FB303Service_simple_rpc_pargs args;
  args.get<0>().value = &p_int_parameter;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "simple_rpc",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::test::fixtures::basic::FB303Service>::simple_rpcT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_int_parameter) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "simple_rpc",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "test.dev/fixtures/basic/FB303Service");
  apache::thrift::SerializedRequest serializedRequest = fbthrift_serialize_simple_rpc<Protocol_>(
    prot, rpcOptions, *header, contextStack, p_int_parameter);
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(std::move(serializedRequest), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::test::fixtures::basic::FB303Service>::simple_rpc(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_int_parameter) {
  ::apache::thrift::RpcOptions rpcOptions;
  simple_rpc(rpcOptions, std::move(callback), p_int_parameter);
}

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::simple_rpc(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_int_parameter) {
  auto [ctx, header] = simple_rpcCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  simple_rpcImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_int_parameter);
}

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::simple_rpcImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_int_parameter, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        simple_rpcT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_int_parameter);
      } else {
        simple_rpcT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_int_parameter);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        simple_rpcT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_int_parameter);
      } else {
        simple_rpcT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_int_parameter);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::fixtures::basic::FB303Service>::simple_rpcCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "FB303Service.simple_rpc",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::sync_simple_rpc(::test::fixtures::basic::ReservedKeyword& _return, ::std::int32_t p_int_parameter) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_simple_rpc(rpcOptions, _return, p_int_parameter);
}

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::sync_simple_rpc(apache::thrift::RpcOptions& rpcOptions, ::test::fixtures::basic::ReservedKeyword& _return, ::std::int32_t p_int_parameter) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = simple_rpcCtx(&rpcOptions);
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
      simple_rpcImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_int_parameter);
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
      recv_simple_rpc(_return, returnState);
  });
}


folly::Future<::test::fixtures::basic::ReservedKeyword> apache::thrift::Client<::test::fixtures::basic::FB303Service>::future_simple_rpc(::std::int32_t p_int_parameter) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_simple_rpc(rpcOptions, p_int_parameter);
}

folly::SemiFuture<::test::fixtures::basic::ReservedKeyword> apache::thrift::Client<::test::fixtures::basic::FB303Service>::semifuture_simple_rpc(::std::int32_t p_int_parameter) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_simple_rpc(rpcOptions, p_int_parameter);
}

folly::Future<::test::fixtures::basic::ReservedKeyword> apache::thrift::Client<::test::fixtures::basic::FB303Service>::future_simple_rpc(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_int_parameter) {
  folly::Promise<::test::fixtures::basic::ReservedKeyword> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::test::fixtures::basic::ReservedKeyword>>(std::move(promise), recv_wrapped_simple_rpc, channel_);
  simple_rpc(rpcOptions, std::move(callback), p_int_parameter);
  return future;
}

folly::SemiFuture<::test::fixtures::basic::ReservedKeyword> apache::thrift::Client<::test::fixtures::basic::FB303Service>::semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_int_parameter) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_simple_rpc, channel_);
  auto callback = std::move(callbackAndFuture.first);
  simple_rpc(rpcOptions, std::move(callback), p_int_parameter);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::test::fixtures::basic::ReservedKeyword, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic::FB303Service>::header_future_simple_rpc(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_int_parameter) {
  folly::Promise<std::pair<::test::fixtures::basic::ReservedKeyword, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::test::fixtures::basic::ReservedKeyword>>(std::move(promise), recv_wrapped_simple_rpc, channel_);
  simple_rpc(rpcOptions, std::move(callback), p_int_parameter);
  return future;
}

folly::SemiFuture<std::pair<::test::fixtures::basic::ReservedKeyword, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic::FB303Service>::header_semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_int_parameter) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_simple_rpc, channel_);
  auto callback = std::move(callbackAndFuture.first);
  simple_rpc(rpcOptions, std::move(callback), p_int_parameter);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::simple_rpc(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_int_parameter) {
  simple_rpc(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_int_parameter);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic::FB303Service>::recv_wrapped_simple_rpc(::test::fixtures::basic::ReservedKeyword& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::fixtures::basic::FB303Service_simple_rpc_presult;
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

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::recv_simple_rpc(::test::fixtures::basic::ReservedKeyword& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_simple_rpc(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::test::fixtures::basic::FB303Service>::recv_instance_simple_rpc(::test::fixtures::basic::ReservedKeyword& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_simple_rpc(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic::FB303Service>::recv_instance_wrapped_simple_rpc(::test::fixtures::basic::ReservedKeyword& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_simple_rpc(_return, state);
}


