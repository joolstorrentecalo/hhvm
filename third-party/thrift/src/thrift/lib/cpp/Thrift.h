/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef THRIFT_THRIFT_H_
#define THRIFT_THRIFT_H_

#include <folly/Range.h>
#include <folly/Traits.h>
#include <folly/lang/Bits.h>
#include <folly/portability/Time.h>

#include <thrift/lib/cpp/thrift_config.h>

#ifdef THRIFT_PLATFORM_CONFIG
#include THRIFT_PLATFORM_CONFIG
#endif

#include <assert.h>
#include <sys/types.h>
#if __has_include(<inttypes.h>)
#include <inttypes.h>
#endif
#include <stdio.h>
#include <string.h>

#include <algorithm>
#include <exception>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <thrift/lib/cpp/TLogging.h>

namespace apache {
namespace thrift {

/**
 * Specialization fwd-decl in _types.h.
 * Specialization defn in _data.h.
 */
template <typename T>
struct TEnumDataStorage {
  static_assert(sizeof(T) == ~0ull, "invalid use of base template");
};
template <typename T>
struct TStructDataStorage {
  static_assert(sizeof(T) == ~0ull, "invalid use of base template");
};

/**
 * Specialization defn in _types.h.
 * Specialization member defns in _types.cpp.
 */
template <typename T>
struct TEnumTraits {
  //  When instantiated with an enum type T, includes:
  //
  //      using type = T;
  //
  //      static constexpr std::size_t const size = /*...*/;
  //      static folly::Range<type const*> const values;
  //      static folly::Range<std::string_view const*> const names;
  //
  //      static bool findName(type value, std::string_view* out) noexcept;
  //      static bool findValue(std::string_view name, type* out) noexcept;
  //
  //      static bool findName(type value, folly::StringPiece* out) noexcept;
  //      static char const* findName(type value) noexcept;
  //
  //  When instantiated with an enum type T which is not empty, includes:
  //
  //      static constexpr type min() { /*...*/ }
  //      static constexpr type max() { /*...*/ }
  //
  //  To test at compile time whether a given enum T is generated by thrift, the
  //  presence of TEnumTraits<T>::type may be tested. If it is present, then T
  //  is generated by thrift; if absent, then T is not generated by thrift.

  static const char* findName(T) {
    static_assert(sizeof(T) == ~0ull, "invalid use of base template");
    return nullptr;
  }
  static bool findValue(const char*, T*) {
    static_assert(sizeof(T) == ~0ull, "invalid use of base template");
    return false;
  }
};

class TOutput {
 public:
  TOutput() : f_(&errorTimeWrapper) {}

  inline void setOutputFunction(void (*function)(const char*)) {
    f_ = function;
  }

  inline void operator()(const char* message) { f_(message); }

  // It is important to have a const char* overload here instead of
  // just the string version, otherwise errno could be corrupted
  // if there is some problem allocating memory when constructing
  // the string.
  void perror(const char* message, int errno_copy);
  inline void perror(const std::string& message, int errno_copy) {
    perror(message.c_str(), errno_copy);
  }

  void printf(const char* message, ...);

  inline static void errorTimeWrapper(const char* msg) {
    time_t now;
    char dbgtime[26];
    time(&now);
    ctime_r(&now, dbgtime);
    dbgtime[24] = 0;
    fprintf(stderr, "Thrift: %s %s\n", dbgtime, msg);
  }

  /** Just like strerror_r but returns a C++ string object. */
  static std::string strerror_s(int errno_copy);

 private:
  void (*f_)(const char*);
};

extern TOutput GlobalOutput;

/**
 * Base class for all Thrift exceptions.
 * Should never be instantiated, only caught.
 */
class FOLLY_EXPORT TException : public std::exception {};

/**
 * Base class for exceptions from the Thrift library, and occasionally
 * from the generated code.  This class should not be thrown by user code.
 * Instances of this class are not meant to be serialized.
 */
class FOLLY_EXPORT TLibraryException : public virtual TException {
 public:
  TLibraryException() {}

  explicit TLibraryException(const std::string& message) : message_(message) {}

  TLibraryException(const char* message, int errnoValue);

  ~TLibraryException() noexcept override {}

  const char* what() const noexcept override {
    if (message_.empty()) {
      return "Default TLibraryException.";
    } else {
      return message_.c_str();
    }
  }

 protected:
  std::string message_;
};

class FOLLY_EXPORT AppBaseError : public std::runtime_error {
 public:
  AppBaseError(const std::string& name, const std::string& what)
      : std::runtime_error(what), name_(name) {}

  AppBaseError(std::string&& name, std::string&& what)
      : std::runtime_error(what), name_(std::move(name)) {}

  virtual const char* name() const noexcept { return name_.c_str(); }

  virtual bool isClientError() const noexcept = 0;

 private:
  std::string name_;
};

class FOLLY_EXPORT AppServerError : public AppBaseError {
 public:
  using AppBaseError::AppBaseError;

  bool isClientError() const noexcept override { return false; }
};

class FOLLY_EXPORT AppClientError : public AppBaseError {
 public:
  using AppBaseError::AppBaseError;

  bool isClientError() const noexcept override { return true; }
};

/**
 * Below are class templates that allows the Thrift compiler to
 * generate code for C++ types without polluting the user namespace.
 *
 * Given the following IDL:
 *     namespace cpp2 foo
 *     service Bar {}
 * The Thrift compiler only requires an incomplete type to be declared in the
 * user namespace.
 *     namespace foo {
 *     class Bar;
 *     }
 * To implement server and client stubs for this service, the compiler can
 * provide template specializations for apache::thrift::ServiceHandler<foo::Bar>
 * and apache::thrift::Client<foo::Bar> respectively.
 *
 * This mechanism provides a framework to implement arbitrary "traits" on
 * services with the guarantee that adding new types will not collide with
 * user-defined types in their own namespaces.
 */

template <class ServiceTag>
class ServiceHandler;

template <class ServiceTag>
class Client;

} // namespace thrift
} // namespace apache

#endif // #ifndef THRIFT_THRIFT_H_
