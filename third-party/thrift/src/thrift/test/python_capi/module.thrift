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

include "thrift/annotation/cpp.thrift"
include "thrift/annotation/python.thrift"
include "thrift/lib/thrift/patch.thrift"

cpp_include "<deque>"
cpp_include "<folly/small_vector.h>"
cpp_include "thrift/test/python_capi/adapter.h"

package "thrift.org/test/python_capi"

enum MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
}

enum AnnoyingEnum {
  FOO = 1 (cpp.name = "l0O1"),
  BAR = 2 (cpp.name = "FuBaR"),
} (cpp.name = "NormalDecentEnum")

@patch.GeneratePatch
struct MyStruct {
  1: i64 inty;
  2: string stringy;
  3: MyDataItem myItemy;
  4: MyEnum myEnumy;
  5: bool booly (cpp.name = "boulet");
  6: list<float> floatListy;
  7: map<binary, string> strMappy;
  8: set<i32> intSetty;
}

@patch.GeneratePatch
struct MyDataItem {
  1: string s;
}

@cpp.Adapter{name = "::thrift::test::lib::StructDoubler"}
@scope.Transitive
struct TransitiveDoubler {}

@TransitiveDoubler
struct DoubledPair {
  1: string s;
  2: i32 x;
}

struct StringPair {
  1: string normal;
  @cpp.Adapter{name = "::thrift::test::lib::StringDoubler"}
  2: string doubled;
}

struct EmptyStruct {} (cpp.name = "VapidStruct")

typedef byte signed_byte

@python.MarshalCapi
struct PrimitiveStruct {
  1: bool booly;
  2: signed_byte charry;
  @cpp.Type{name = "uint16_t"}
  3: i16 shorty (cpp.name = "shortay");
  5: i32 inty;
  @cpp.Type{name = "uint64_t"}
  7: i64 longy;
  8: optional float floaty;
  @thrift.Box
  9: optional double dubby;
  @cpp.Ref{type = cpp.RefType.Unique}
  12: optional string stringy;
  @cpp.Ref{type = cpp.RefType.Shared}
  13: optional binary bytey;
}

@python.MarshalCapi
struct ListStruct {
  1: list<bool> boolz;
  2: optional list<i64> intz;
  @thrift.Box
  3: optional list<string> stringz;
  4: list<binary> (cpp.template = "std::deque") encoded;
  5: list<i64> (cpp.type = "std::deque<uint64_t>") uidz;
  6: list<list<double>> matrix;
  7: list<list<byte>> (
    cpp.type = "folly::small_vector<folly::small_vector<uint8_t>>",
  ) ucharz;
  @cpp.Type{name = "folly::fbvector<folly::fbvector<folly::fbvector<uint8_t>>>"}
  8: list<list<list<signed_byte>>> voxels;
}

union MyUnion {
  1: MyEnum myEnum;
  2: MyStruct myStruct;
  3: MyDataItem myDataItem;
  4: set<i64> intSet;
  5: list<double> doubleList;
  6: map<binary, string> strMap;
} (cpp.name = "OurUnion")
