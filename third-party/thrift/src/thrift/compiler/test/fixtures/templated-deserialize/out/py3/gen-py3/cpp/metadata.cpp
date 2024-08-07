/**
 * Autogenerated by Thrift for thrift/annotation/cpp.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-py3/cpp/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
namespace cpp {
::apache::thrift::metadata::ThriftMetadata cpp_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<RefType>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<EnumUnderlyingType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Type>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Ref>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Name>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Lazy>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<DisableLazyChecksum>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Adapter>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<PackIsset>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MinimizePadding>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ScopedEnumAsUnionType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<FieldInterceptor>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<UseOpEncode>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<EnumType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Frozen2Exclude>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Frozen2RequiresCompleteContainerParams>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ProcessInEbThreadUnsafe>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<RuntimeAnnotation>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<UseCursorSerialization>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<GenerateDeprecatedHeaderClientMethods>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation
} // namespace cpp
