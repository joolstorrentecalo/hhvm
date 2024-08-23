#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/int_limits/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
cimport thrift.python.exceptions
from thrift.python.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.python.types cimport(
    BadEnum as __BadEnum,
)
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    init_unicode_from_cpp as __init_unicode_from_cpp,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    make_const_shared,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
import importlib





cdef object get_types_reflection():
    import importlib
    return importlib.import_module(
        "module.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class Limits(thrift.py3.types.Struct):
    def __init__(Limits self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cLimits]()
        self._fields_setter = _fbthrift_types_fields.__Limits_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(Limits self, **kwargs):
        if not kwargs:
            return self
        cdef Limits __fbthrift_inst = Limits.__new__(Limits)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cLimits](deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__Limits_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("Limits", {
          "max_i64_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_i64_field_ref().has_value(),
          "min_i64_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_i64_field_ref().has_value(),
          "max_i32_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_i32_field_ref().has_value(),
          "min_i32_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_i32_field_ref().has_value(),
          "max_i16_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_i16_field_ref().has_value(),
          "min_i16_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_i16_field_ref().has_value(),
          "max_byte_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_byte_field_ref().has_value(),
          "min_byte_field": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_byte_field_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cLimits] cpp_obj):
        __fbthrift_inst = <Limits>Limits.__new__(Limits)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline max_i64_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_i64_field_ref().value()

    @property
    def max_i64_field(self):
        return self.max_i64_field_impl()

    cdef inline min_i64_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_i64_field_ref().value()

    @property
    def min_i64_field(self):
        return self.min_i64_field_impl()

    cdef inline max_i32_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_i32_field_ref().value()

    @property
    def max_i32_field(self):
        return self.max_i32_field_impl()

    cdef inline min_i32_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_i32_field_ref().value()

    @property
    def min_i32_field(self):
        return self.min_i32_field_impl()

    cdef inline max_i16_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_i16_field_ref().value()

    @property
    def max_i16_field(self):
        return self.max_i16_field_impl()

    cdef inline min_i16_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_i16_field_ref().value()

    @property
    def min_i16_field(self):
        return self.min_i16_field_impl()

    cdef inline max_byte_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).max_byte_field_ref().value()

    @property
    def max_byte_field(self):
        return self.max_byte_field_impl()

    cdef inline min_byte_field_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).min_byte_field_ref().value()

    @property
    def min_byte_field(self):
        return self.min_byte_field_impl()


    def __hash__(Limits self):
        return super().__hash__()

    def __repr__(Limits self):
        return super().__repr__()

    def __str__(Limits self):
        return super().__str__()


    def __copy__(Limits self):
        cdef shared_ptr[cLimits] cpp_obj = make_shared[cLimits](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return Limits._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cLimits](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<Limits>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Limits()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cLimits].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Limits"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cLimits](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 8

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Limits self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cLimits](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Limits self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cLimits]()
        with nogil:
            needed = serializer.cdeserialize[cLimits](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.Limits, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.Limits, self)


max_i64_const = 9223372036854775807
min_i64_const = -9223372036854775808
max_i32_const = 2147483647
min_i32_const = -2147483648
max_i16_const = 32767
min_i16_const = -32768
max_byte_const = 127
min_byte_const = -128
