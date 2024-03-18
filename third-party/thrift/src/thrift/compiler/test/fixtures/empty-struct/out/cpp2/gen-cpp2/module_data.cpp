/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/empty-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/empty-struct/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Empty>::name = "Empty";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::Empty>::fields_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::Empty>::fields_ids = {{
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::Empty>::fields_types = {{
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::Empty>::storage_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::Empty>::isset_indexes = {{
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Nada>::name = "Nada";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::Nada>::fields_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::Nada>::fields_ids = {{
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::Nada>::fields_types = {{
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::Nada>::storage_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::Nada>::isset_indexes = {{
}};

} // namespace thrift
} // namespace apache
