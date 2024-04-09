# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import dataclasses
import importlib
import types
import typing
import unittest

from thrift.python.mutable_types import MutableStruct, MutableStructOrUnion
from thrift.python.types import StructMeta

from thrift.test.thrift_python.struct_test.thrift_mutable_types import (  # @manual=//thrift/test/thrift-python:struct_test_thrift-python-types
    TestStruct as TestStructMutable,
    TestStructWithDefaultValues as TestStructWithDefaultValuesMutable,
)

from thrift.test.thrift_python.struct_test.thrift_types import (
    TestStruct as TestStructImmutable,
    TestStructWithDefaultValues as TestStructWithDefaultValuesImmutable,
)


class ThriftPython_ImmutableStruct_Test(unittest.TestCase):
    def setUp(self) -> None:
        # Disable maximum printed diff length.
        self.maxDiff = None

    def test_creation(self) -> None:
        # Field initialization at instantiation time
        w_new = TestStructImmutable(unqualified_string="hello, world!")
        self.assertEqual(w_new.unqualified_string, "hello, world!")

    def test_default_values(self) -> None:
        # Custom default values:
        # Newly created instance has custom default values for non-optional
        # fields, but custom default values for optional fields are ignored.
        self.assertEqual(
            TestStructWithDefaultValuesImmutable(),
            TestStructWithDefaultValuesImmutable(
                unqualified_integer=42,
                optional_integer=None,
                unqualified_struct=TestStructImmutable(unqualified_string="hello"),
                optional_struct=None,
            ),
        )

        # Intrinsic default values:
        # optional struct field is None
        self.assertIsNone(
            TestStructWithDefaultValuesImmutable().optional_struct_intrinsic_default
        )

        # unqualified struct field is default-initialized
        self.assertEqual(
            TestStructImmutable(),
            TestStructWithDefaultValuesImmutable().unqualified_struct_intrinsic_default,
        )

    def test_type_safety(self) -> None:
        # Field type is validated on instantiation
        with self.assertRaisesRegex(
            TypeError,
            (
                "Cannot create internal string data representation. Expected "
                "type <class 'str'>, got: <class 'int'>."
            ),
        ):
            TestStructImmutable(unqualified_string=42)

    def test_equality_and_hashability(self) -> None:
        # Equality
        w_new = TestStructImmutable(unqualified_string="hello, world!")
        self.assertEqual(w_new, w_new)
        w_new2 = TestStructImmutable(unqualified_string="hello, world!")
        self.assertEqual(w_new, w_new2)
        self.assertIsNot(w_new, w_new2)

        # Immutable types are hashable, with proper semantics.
        self.assertEqual(hash(w_new), hash(w_new2))
        self.assertIn(w_new, {w_new2})

        mapping = {w_new: 123}
        self.assertIn(w_new, mapping)
        self.assertIn(w_new2, mapping)
        self.assertEqual(mapping[w_new], 123)
        self.assertEqual(mapping[w_new2], 123)

        mapping[w_new2] = 456
        self.assertEqual(mapping[w_new], 456)
        self.assertEqual(mapping[w_new2], 456)

    def test_ordering(self) -> None:
        self.assertLess(
            TestStructImmutable(unqualified_string="a"),
            TestStructImmutable(unqualified_string="b"),
        )
        self.assertLess(
            TestStructImmutable(unqualified_string="a", optional_string="z"),
            TestStructImmutable(unqualified_string="b", optional_string="a"),
        )
        self.assertGreater(
            TestStructImmutable(unqualified_string="b", optional_string="z"),
            TestStructImmutable(unqualified_string="b", optional_string="a"),
        )

    def test_type(self) -> None:
        self.assertEqual(type(TestStructImmutable), StructMeta)
        self.assertEqual(type(TestStructImmutable()), TestStructImmutable)

    def test_iteration(self) -> None:
        # Iterating over the class yields tuples of (field_name, None).
        self.assertSetEqual(
            set(TestStructImmutable),
            {("unqualified_string", None), ("optional_string", None)},
        )

        # Iterating over an instance yields (field_name, field_value) tuples.
        self.assertSetEqual(
            set(TestStructImmutable(unqualified_string="hello")),
            {("unqualified_string", "hello"), ("optional_string", None)},
        )

    def test_del_attribute(self) -> None:
        w = TestStructImmutable(unqualified_string="hello, world!")

        # Attributes of immutable types cannot be deleted.
        #
        # Note the interesting (and somewhat inconsistent) current behavior:
        # Calling `del` prior to accessing an attribute raises an AttributeError
        # (at the cinder level), but doing so after accessing it is a silent
        # no-op.
        with self.assertRaisesRegex(AttributeError, "unqualified_string"):
            del w.unqualified_string
        self.assertEqual(w.unqualified_string, "hello, world!")
        del w.unqualified_string  # silent no-op
        self.assertEqual(w.unqualified_string, "hello, world!")

        # However, a new instance of the object can be created with a specific
        # attribute "deleted", by explicitly assigning it the "None" value:
        w_cleared = w(unqualified_string=None)
        self.assertEqual(w_cleared.unqualified_string, "")

        # "Deleting" a field (by creating a new instance) resets it to its
        # *standard default value*, i.e. the custom default value if provided
        # (see thrift/doc/idl/index.md#default-values).
        w_default_values = TestStructWithDefaultValuesImmutable(unqualified_integer=123)
        self.assertEqual(w_default_values.unqualified_integer, 123)
        w_default_values_cleared = w_default_values(unqualified_integer=None)
        self.assertEqual(w_default_values_cleared.unqualified_integer, 42)

    def test_type_hints(self) -> None:
        # thrift-python immutable structs do not include type hints directly
        # (although a separate .pyi interface is generated to allow tooling to
        # do static type checking)
        self.assertEqual(typing.get_type_hints(TestStructImmutable), {})


class ThriftPython_MutableStruct_Test(unittest.TestCase):
    def setUp(self) -> None:
        # Disable maximum printed diff length.
        self.maxDiff = None

    def test_creation_and_assignment(self) -> None:
        w_mutable = TestStructMutable()
        self.assertIsInstance(w_mutable, MutableStruct)
        self.assertIsInstance(w_mutable, MutableStructOrUnion)

        self.assertEqual(w_mutable.unqualified_string, None)
        w_mutable.unqualified_string = "hello, world!"
        self.assertEqual(w_mutable.unqualified_string, "hello, world!")

    def test_default_values(self) -> None:
        # Custom default values:
        # DO_BEFORE(aristidis,20240505): Add support for custom default values
        # to mutable thrift-python types (similar to immutable types).
        self.assertEqual(
            TestStructWithDefaultValuesMutable(),
            TestStructWithDefaultValuesMutable(
                unqualified_integer=None,
                optional_integer=None,
                unqualified_struct=None,
                optional_struct=None,
            ),
        )

        # Intrinsic default values:
        # optional struct field is None
        self.assertIsNone(
            TestStructWithDefaultValuesMutable().optional_struct_intrinsic_default
        )

        # DO_BEFORE(aristidis,20240506): unqualified struct field should be
        # default-initialized.
        self.assertIsNone(
            TestStructWithDefaultValuesMutable().unqualified_struct_intrinsic_default,
        )

    def test_equality_and_hashability(self) -> None:
        # Equality
        w_mutable = TestStructMutable(unqualified_string="hello, world!")
        self.assertEqual(w_mutable, w_mutable)

        w_mutable2 = TestStructMutable(unqualified_string="hello, world!")
        self.assertEqual(w_mutable.unqualified_string, w_mutable2.unqualified_string)
        self.assertEqual(w_mutable, w_mutable2)

        # Instances are not hashable
        with self.assertRaisesRegex(TypeError, "unhashable type: 'TestStruct'"):
            hash(w_mutable)

        with self.assertRaisesRegex(TypeError, "unhashable type: 'TestStruct'"):
            {w_mutable}

        # List and Tuple membership tests use equality (not hashing).
        self.assertIn(w_mutable, [w_mutable2])
        self.assertIn(w_mutable, (w_mutable2,))

        w_mutable2.unqualified_string = "changed value"
        self.assertNotIn(w_mutable, [w_mutable2])
        self.assertNotIn(w_mutable, (w_mutable2,))

    def test_ordering(self) -> None:
        # DO_BEFORE(aristidis, 20240515): ordering for mutable thrift-python
        with self.assertRaisesRegex(
            TypeError,
            "'<' not supported between instances of 'TestStruct' and 'TestStruct'",
        ):
            self.assertLess(
                TestStructMutable(unqualified_string="a"),
                TestStructMutable(unqualified_string="b"),
            )

    def test_subclass(self) -> None:
        with self.assertRaisesRegex(
            TypeError, "Inheriting from thrift-python data types is forbidden:"
        ):
            types.new_class("TestSubclass2", bases=(TestStructMutable,))

    def test_to_immutable(self) -> None:
        w_mutable = TestStructMutable(unqualified_string="hello")
        w_immutable = w_mutable._to_immutable()
        self.assertIsNot(w_mutable, w_immutable)

        # Even though their contents are the same, the mutable and immutable
        # instance are not "equal":
        self.assertEqual(w_mutable.unqualified_string, w_immutable.unqualified_string)
        self.assertNotEqual(w_mutable, w_immutable)

        # The newly obtained immutable object however is equal to a new
        # TestStructImmutable instance (with the same contents)
        self.assertEqual(w_immutable, TestStructImmutable(unqualified_string="hello"))

        w_mutable.unqualified_string = "hello, world!"
        self.assertNotEqual(
            w_mutable.unqualified_string, w_immutable.unqualified_string
        )

        # Check that converting to immutable validates field types
        w_mutable.unqualified_string = 42
        with self.assertRaisesRegex(
            TypeError,
            (
                "TypeError: Cannot create internal string data representation. "
                "Expected type <class 'str'>, got: <class 'int'>."
            ),
        ):
            w_mutable._to_immutable()

    def test_type(self) -> None:
        # Contrary to immutable struct, the type of the generated clas
        # is not MutableStructMeta, but 'type' (because it is a dataclass type)
        self.assertEqual(type(TestStructMutable), type)
        self.assertEqual(type(TestStructMutable()), TestStructMutable)

    def test_iteration(self) -> None:
        # Contrary to immutable types, the dataclass-based mutable type is not
        # iterable (mostly because we do not control the metaclass of
        # dataclasses).
        with self.assertRaisesRegex(TypeError, "'type' object is not iterable"):
            iter(TestStructMutable)

        self.assertSetEqual(
            {field.name for field in dataclasses.fields(TestStructMutable)},
            {"unqualified_string", "optional_string"},
        )

        # Iterating over an instance yields (field_name, field_value) tuples.
        self.assertSetEqual(
            set(TestStructMutable(unqualified_string="hello")),
            {("unqualified_string", "hello"), ("optional_string", None)},
        )

    def test_del_attribute(self) -> None:
        w = TestStructMutable(unqualified_string="hello, world!")
        self.assertEqual(w.unqualified_string, "hello, world!")

        # Deleting an attribute on a (mutable) thrift-python instance should
        # reset it to its standard default value (see
        # thrift/doc/idl/index.md#default-values).

        # NOTE: this is not currently implemented: deleting the attribute
        # removes it from the instance altogether:
        del w.unqualified_string
        # DO_BEFORE(aristidis, 20240508): Support deleting attribute of mutable
        # thrift-python struct instance.
        with self.assertRaisesRegex(
            AttributeError, "'TestStruct' object has no attribute 'unqualified_string'"
        ):
            self.assertEqual(w.unqualified_string, "")

        w_default_values = TestStructWithDefaultValuesMutable(unqualified_integer=123)
        self.assertEqual(w_default_values.unqualified_integer, 123)
        del w_default_values.unqualified_integer
        # DO_BEFORE(aristidis, 20240508): Support deleting attribute of mutable
        # thrift-python struct instance.
        with self.assertRaisesRegex(
            AttributeError,
            "'TestStructWithDefaultValues' object has no attribute 'unqualified_integer'",
        ):
            self.assertEqual(w_default_values.unqualified_integer, 42)

    def test_type_hints(self) -> None:
        # DO_BEFORE(aristidis, 20240601): Fix type hints for mutable
        # thrift-python types (should not be `typing.Any`).
        self.assertEqual(
            typing.get_type_hints(TestStructMutable),
            {"unqualified_string": typing.Any, "optional_string": typing.Any},
        )
