#
# Autogenerated by Thrift for c.thrift
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
        "c.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class C(thrift.py3.types.Struct):
    def __init__(C self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cC]()
        self._fields_setter = _fbthrift_types_fields.__C_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(C self, **kwargs):
        if not kwargs:
            return self
        cdef C __fbthrift_inst = C.__new__(C)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cC](deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__C_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("C", {
          "i": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).i_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cC] cpp_obj):
        __fbthrift_inst = <C>C.__new__(C)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline i_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).i_ref().value()

    @property
    def i(self):
        return self.i_impl()


    def __hash__(C self):
        return super().__hash__()

    def __repr__(C self):
        return super().__repr__()

    def __str__(C self):
        return super().__str__()


    def __copy__(C self):
        cdef shared_ptr[cC] cpp_obj = make_shared[cC](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return C._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cC](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<C>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__C()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cC].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "c.C"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cC](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 1

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(C self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cC](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(C self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cC]()
        with nogil:
            needed = serializer.cdeserialize[cC](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "c.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.C, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("c.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.C, self)

@__cython.auto_pickle(False)
cdef class E(thrift.py3.exceptions.GeneratedError):
    def __init__(E self, *args, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cE]()
        self._fields_setter = _fbthrift_types_fields.__E_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__( *args, **kwargs)

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("E", {
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cE] cpp_obj):
        __fbthrift_inst = <E>E.__new__(E, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        _builtins.Exception.__init__(__fbthrift_inst, *(v for _, v in __fbthrift_inst))
        return __fbthrift_inst


    def __hash__(E self):
        return super().__hash__()

    def __repr__(E self):
        return super().__repr__()

    def __str__(E self):
        return super().__str__()


    def __copy__(E self):
        cdef shared_ptr[cE] cpp_obj = make_shared[cE](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return E._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cE](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<E>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__E()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        ExceptionMetadata[cE].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "c.E"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cE](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(E self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cE](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(E self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cE]()
        with nogil:
            needed = serializer.cdeserialize[cE](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "c.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.E, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("c.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.E, self)


