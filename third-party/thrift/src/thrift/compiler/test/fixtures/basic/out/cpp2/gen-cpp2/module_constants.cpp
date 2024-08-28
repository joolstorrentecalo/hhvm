/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>



namespace test::fixtures::basic {
namespace module_constants {







::std::vector<::std::int32_t> const& AList() {
  static folly::Indestructible<::std::vector<::std::int32_t>> const instance{ std::initializer_list<::std::int32_t>{ static_cast<::std::int32_t>(2),
  static_cast<::std::int32_t>(3),
  static_cast<::std::int32_t>(5),
  static_cast<::std::int32_t>(7) } };
  return *instance;
}

::std::set<::std::string> const& ASet() {
  static folly::Indestructible<::std::set<::std::string>> const instance{ std::initializer_list<::std::string>{ apache::thrift::StringTraits<std::string>::fromStringLiteral("foo"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("bar"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("baz") } };
  return *instance;
}

::std::map<::std::string, ::std::vector<::std::int32_t>> const& AMap() {
  static folly::Indestructible<::std::map<::std::string, ::std::vector<::std::int32_t>>> const instance{ std::initializer_list<::std::map<::std::string, ::std::vector<::std::int32_t>>::value_type>{ { apache::thrift::StringTraits<std::string>::fromStringLiteral("foo"), std::initializer_list<::std::int32_t>{ static_cast<::std::int32_t>(1),
  static_cast<::std::int32_t>(2),
  static_cast<::std::int32_t>(3),
  static_cast<::std::int32_t>(4) } },
  { apache::thrift::StringTraits<std::string>::fromStringLiteral("bar"), std::initializer_list<::std::int32_t>{ static_cast<::std::int32_t>(10),
  static_cast<::std::int32_t>(32),
  static_cast<::std::int32_t>(54) } } } };
  return *instance;
}



} // namespace module_constants
} // namespace test::fixtures::basic
