/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.tcc"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::getProcessor() {
  return std::make_unique<::apache::thrift::fixtures::types::SomeServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::apache::thrift::fixtures::types::SomeServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}


std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::apache::thrift::fixtures::types::SomeServiceServiceInfoHolder apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::bounce_map(::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("bounce_map");
}

void apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::sync_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  return bounce_map(_return, std::move(p_m));
}

folly::SemiFuture<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::semifuture_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_bounce_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::apache::thrift::fixtures::types::SomeMap>();
  sync_bounce_map(*ret, std::move(p_m));
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::future_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_bounce_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_bounce_map(std::move(p_m)), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::co_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_bounce_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/>(std::move(p_m)));
}

folly::coro::Task<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::co_bounce_map(apache::thrift::RequestParams /* params */, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_bounce_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_bounce_map(std::move(p_m));
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::async_tm_bounce_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>>> callback, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_bounce_map.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_bounce_map.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_bounce_map(params, std::move(p_m));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_bounce_map.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_bounce_map(std::move(p_m));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_bounce_map(std::move(p_m));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_bounce_map(params, std::move(p_m));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_bounce_map(std::move(p_m));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::apache::thrift::fixtures::types::SomeMap _return;
        sync_bounce_map(_return, std::move(p_m));
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_m) = std::move(ex).restoreArgs<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& /*_return*/, std::unique_ptr<::std::vector<::std::int64_t>> /*r*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("binary_keyed_map");
}

void apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::sync_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  return binary_keyed_map(_return, std::move(p_r));
}

folly::SemiFuture<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::semifuture_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>();
  sync_binary_keyed_map(*ret, std::move(p_r));
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::future_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_binary_keyed_map(std::move(p_r)), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::co_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<std::unique_ptr<::std::vector<::std::int64_t>> /*r*/>(std::move(p_r)));
}

folly::coro::Task<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::co_binary_keyed_map(apache::thrift::RequestParams /* params */, std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_binary_keyed_map(std::move(p_r));
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>::async_tm_binary_keyed_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>> callback, std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_binary_keyed_map.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_binary_keyed_map(params, std::move(p_r));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_binary_keyed_map(std::move(p_r));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_binary_keyed_map(std::move(p_r));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_binary_keyed_map(params, std::move(p_r));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_binary_keyed_map(std::move(p_r));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t> _return;
        sync_binary_keyed_map(_return, std::move(p_r));
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_r) = std::move(ex).restoreArgs<std::unique_ptr<::std::vector<::std::int64_t>> /*r*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace apache { namespace thrift { namespace fixtures { namespace types {

void SomeServiceSvNull::bounce_map(::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/) {}

void SomeServiceSvNull::binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& /*_return*/, std::unique_ptr<::std::vector<::std::int64_t>> /*r*/) {}


const char* SomeServiceAsyncProcessor::getServiceName() {
  return "SomeService";
}

void SomeServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::apache::thrift::fixtures::types::SomeService>>::gen(response);
}

void SomeServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void SomeServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const SomeServiceAsyncProcessor::ProcessMap& SomeServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const SomeServiceAsyncProcessor::ProcessMap SomeServiceAsyncProcessor::kOwnProcessMap_ {
  {"bounce_map",
    {&SomeServiceAsyncProcessor::setUpAndProcess_bounce_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::setUpAndProcess_bounce_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_bounce_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_bounce_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"binary_keyed_map",
    {&SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_binary_keyed_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_binary_keyed_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& SomeServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap SomeServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"bounce_map",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "SomeService.bounce_map",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  {"binary_keyed_map",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "SomeService.binary_keyed_map",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  };

  return requestInfoMap;
}
}}}} // apache::thrift::fixtures::types
