/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/refs/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>



namespace cpp2 {
namespace module_constants {

::cpp2::StructWithRef const& kStructWithRef() {
  static folly::Indestructible<::cpp2::StructWithRef> const instance{ ::apache::thrift::detail::make_structured_constant<::cpp2::StructWithRef>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::def_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::opt_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::req_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>())) };
  return *instance;
}

::cpp2::StructWithRefTypeUnique const& kStructWithRefTypeUnique() {
  static folly::Indestructible<::cpp2::StructWithRefTypeUnique> const instance{ ::apache::thrift::detail::make_structured_constant<::cpp2::StructWithRefTypeUnique>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::def_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::opt_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::req_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>())) };
  return *instance;
}

::cpp2::StructWithRefTypeShared const& kStructWithRefTypeShared() {
  static folly::Indestructible<::cpp2::StructWithRefTypeShared> const instance{ ::apache::thrift::detail::make_structured_constant<::cpp2::StructWithRefTypeShared>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::def_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::opt_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::req_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>())) };
  return *instance;
}

::cpp2::StructWithRefTypeSharedConst const& kStructWithRefTypeSharedConst() {
  static folly::Indestructible<::cpp2::StructWithRefTypeSharedConst> const instance{ ::apache::thrift::detail::make_structured_constant<::cpp2::StructWithRefTypeSharedConst>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::def_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::opt_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>()), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::req_field>(::apache::thrift::detail::make_structured_constant<::cpp2::Empty>())) };
  return *instance;
}



} // namespace module_constants
} // namespace cpp2
