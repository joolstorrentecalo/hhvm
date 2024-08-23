#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/constants/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.utility cimport move as cmove
from thrift.py3.types cimport (
    assign_unique_ptr,
    assign_shared_ptr,
    assign_shared_const_ptr,
    bytes_to_string,
    make_unique,
    make_shared,
    make_const_shared,
)
cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast
from thrift.python.types cimport BadEnum as _fbthrift_BadEnum


@__cython.auto_pickle(False)
cdef class __Internship_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Internship_FieldsSetter _fbthrift_create(_module_types.cInternship* struct_cpp_obj):
        cdef __Internship_FieldsSetter __fbthrift_inst = __Internship_FieldsSetter.__new__(__Internship_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"weeks")] = __Internship_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"title")] = __Internship_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"employer")] = __Internship_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"compensation")] = __Internship_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"school")] = __Internship_FieldsSetter._set_field_4
        return __fbthrift_inst

    cdef void set_field(__Internship_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Internship_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field weeks
        if _fbthrift_value is None:
            __reset_field[_module_types.cInternship](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'weeks is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).weeks_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field title
        if _fbthrift_value is None:
            __reset_field[_module_types.cInternship](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'title is not a { str !r}.')
        deref(self._struct_cpp_obj).title_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field employer
        if _fbthrift_value is None:
            __reset_field[_module_types.cInternship](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _fbthrift_BadEnum) and not isinstance(_fbthrift_value, _module_types.Company):
            raise TypeError(f'field employer value: {repr(_fbthrift_value)} is not of the enum type { _module_types.Company }.')
        deref(self._struct_cpp_obj).employer_ref().assign(<_module_types.cCompany><int>_fbthrift_value)

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field compensation
        if _fbthrift_value is None:
            __reset_field[_module_types.cInternship](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'compensation is not a { float !r}.')
        deref(self._struct_cpp_obj).compensation_ref().assign(_fbthrift_value)

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field school
        if _fbthrift_value is None:
            __reset_field[_module_types.cInternship](deref(self._struct_cpp_obj), 4)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'school is not a { str !r}.')
        deref(self._struct_cpp_obj).school_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __Range_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Range_FieldsSetter _fbthrift_create(_module_types.cRange* struct_cpp_obj):
        cdef __Range_FieldsSetter __fbthrift_inst = __Range_FieldsSetter.__new__(__Range_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"min")] = __Range_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"max")] = __Range_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__Range_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Range_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field min
        if _fbthrift_value is None:
            __reset_field[_module_types.cRange](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'min is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).min_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field max
        if _fbthrift_value is None:
            __reset_field[_module_types.cRange](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'max is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).max_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __struct1_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __struct1_FieldsSetter _fbthrift_create(_module_types.cstruct1* struct_cpp_obj):
        cdef __struct1_FieldsSetter __fbthrift_inst = __struct1_FieldsSetter.__new__(__struct1_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"a")] = __struct1_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"b")] = __struct1_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__struct1_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __struct1_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field a
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct1](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'a is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).a_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field b
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct1](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'b is not a { str !r}.')
        deref(self._struct_cpp_obj).b_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __struct2_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __struct2_FieldsSetter _fbthrift_create(_module_types.cstruct2* struct_cpp_obj):
        cdef __struct2_FieldsSetter __fbthrift_inst = __struct2_FieldsSetter.__new__(__struct2_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"a")] = __struct2_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"b")] = __struct2_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"c")] = __struct2_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"d")] = __struct2_FieldsSetter._set_field_3
        return __fbthrift_inst

    cdef void set_field(__struct2_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __struct2_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field a
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct2](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'a is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).a_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field b
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct2](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'b is not a { str !r}.')
        deref(self._struct_cpp_obj).b_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field c
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct2](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.struct1):
            raise TypeError(f'c is not a { _module_types.struct1 !r}.')
        deref(self._struct_cpp_obj).c_ref().assign(deref((<_module_types.struct1?> _fbthrift_value)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field d
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct2](deref(self._struct_cpp_obj), 3)
            return
        deref(self._struct_cpp_obj).d_ref().assign(_module_types.List__i32__make_instance(_fbthrift_value))


@__cython.auto_pickle(False)
cdef class __struct3_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __struct3_FieldsSetter _fbthrift_create(_module_types.cstruct3* struct_cpp_obj):
        cdef __struct3_FieldsSetter __fbthrift_inst = __struct3_FieldsSetter.__new__(__struct3_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"a")] = __struct3_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"b")] = __struct3_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"c")] = __struct3_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__struct3_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __struct3_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field a
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct3](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'a is not a { str !r}.')
        deref(self._struct_cpp_obj).a_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field b
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct3](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'b is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).b_ref().assign(_fbthrift_value)

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field c
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct3](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, _module_types.struct2):
            raise TypeError(f'c is not a { _module_types.struct2 !r}.')
        deref(self._struct_cpp_obj).c_ref().assign(deref((<_module_types.struct2?> _fbthrift_value)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))


@__cython.auto_pickle(False)
cdef class __struct4_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __struct4_FieldsSetter _fbthrift_create(_module_types.cstruct4* struct_cpp_obj):
        cdef __struct4_FieldsSetter __fbthrift_inst = __struct4_FieldsSetter.__new__(__struct4_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"a")] = __struct4_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"b")] = __struct4_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"c")] = __struct4_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__struct4_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __struct4_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field a
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct4](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'a is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).a_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field b
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct4](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'b is not a { float !r}.')
        deref(self._struct_cpp_obj).b_ref().assign(_fbthrift_value)

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field c
        if _fbthrift_value is None:
            __reset_field[_module_types.cstruct4](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'c is not a { int !r}.')
        _fbthrift_value = <cint8_t> _fbthrift_value
        deref(self._struct_cpp_obj).c_ref().assign(_fbthrift_value)

