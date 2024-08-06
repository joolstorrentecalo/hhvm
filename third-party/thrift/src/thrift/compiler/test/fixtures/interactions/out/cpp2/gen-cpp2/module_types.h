/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct message;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_message
#define APACHE_THRIFT_ACCESSOR_message
APACHE_THRIFT_DEFINE_ACCESSOR(message);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class CustomException;
} // namespace cpp2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


/** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception" } */
class FOLLY_EXPORT CustomException : public virtual apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::message
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::string_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = CustomException;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  CustomException();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  CustomException(apache::thrift::FragileConstructor, ::std::string message__arg);

  CustomException(CustomException&&) noexcept;

  CustomException(const CustomException& src);


  CustomException& operator=(CustomException&&) noexcept;
  CustomException& operator=(const CustomException& src);

  ~CustomException() override;

 private:
  ::std::string __fbthrift_field_message;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const CustomException&) const;
  bool operator<(const CustomException&) const;

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> message_ref() const& {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> message_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> message_ref() & {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> message_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> message() const& {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> message() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> message() & {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> message() && {
    return {static_cast<T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  const ::std::string& get_message() const& {
    return __fbthrift_field_message;
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  ::std::string get_message() && {
    return std::move(__fbthrift_field_message);
  }

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/module.thrift", "name": "CustomException", "kind": "exception", "field": "message" } */
  template <typename T_CustomException_message_struct_setter = ::std::string>
  [[deprecated("Use `FOO.message_ref() = BAR;` instead of `FOO.set_message(BAR);`")]]
  ::std::string& set_message(T_CustomException_message_struct_setter&& message_) {
    message_ref() = std::forward<T_CustomException_message_struct_setter>(message_);
    return __fbthrift_field_message;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::CustomException";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<CustomException>;
  friend void swap(CustomException& a, CustomException& b);
};

template <class Protocol_>
unsigned long CustomException::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace cpp2
