#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/optionals/src/module.thrift
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


import module.types as _module_types


@__cython.auto_pickle(False)
cdef class __Color_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Color_FieldsSetter _fbthrift_create(_module_types.cColor* struct_cpp_obj):
        cdef __Color_FieldsSetter __fbthrift_inst = __Color_FieldsSetter.__new__(__Color_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"red")] = __Color_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"green")] = __Color_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"blue")] = __Color_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"alpha")] = __Color_FieldsSetter._set_field_3
        return __fbthrift_inst

    cdef void set_field(__Color_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Color_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field red
        if _fbthrift_value is None:
            __reset_field[_module_types.cColor](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'red is not a { float !r}.')
        deref(self._struct_cpp_obj).red_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field green
        if _fbthrift_value is None:
            __reset_field[_module_types.cColor](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'green is not a { float !r}.')
        deref(self._struct_cpp_obj).green_ref().assign(_fbthrift_value)

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field blue
        if _fbthrift_value is None:
            __reset_field[_module_types.cColor](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'blue is not a { float !r}.')
        deref(self._struct_cpp_obj).blue_ref().assign(_fbthrift_value)

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field alpha
        if _fbthrift_value is None:
            __reset_field[_module_types.cColor](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'alpha is not a { float !r}.')
        deref(self._struct_cpp_obj).alpha_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __Vehicle_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Vehicle_FieldsSetter _fbthrift_create(_module_types.cVehicle* struct_cpp_obj):
        cdef __Vehicle_FieldsSetter __fbthrift_inst = __Vehicle_FieldsSetter.__new__(__Vehicle_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"color")] = __Vehicle_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"licensePlate")] = __Vehicle_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"description")] = __Vehicle_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"name")] = __Vehicle_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"hasAC")] = __Vehicle_FieldsSetter._set_field_4
        return __fbthrift_inst

    cdef void set_field(__Vehicle_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Vehicle_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field color
        if _fbthrift_value is None:
            __reset_field[_module_types.cVehicle](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Color):
            raise TypeError(f'color is not a { _module_types.Color !r}.')
        deref(self._struct_cpp_obj).color_ref().assign(deref((<_module_types.Color?> _fbthrift_value)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field licensePlate
        if _fbthrift_value is None:
            __reset_field[_module_types.cVehicle](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'licensePlate is not a { str !r}.')
        deref(self._struct_cpp_obj).licensePlate_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field description
        if _fbthrift_value is None:
            __reset_field[_module_types.cVehicle](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'description is not a { str !r}.')
        deref(self._struct_cpp_obj).description_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field name
        if _fbthrift_value is None:
            __reset_field[_module_types.cVehicle](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'name is not a { str !r}.')
        deref(self._struct_cpp_obj).name_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field hasAC
        if _fbthrift_value is None:
            __reset_field[_module_types.cVehicle](deref(self._struct_cpp_obj), 4)
            return
        if not isinstance(_fbthrift_value, bool):
            raise TypeError(f'hasAC is not a { bool !r}.')
        deref(self._struct_cpp_obj).hasAC_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __Person_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Person_FieldsSetter _fbthrift_create(_module_types.cPerson* struct_cpp_obj):
        cdef __Person_FieldsSetter __fbthrift_inst = __Person_FieldsSetter.__new__(__Person_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"id")] = __Person_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"name")] = __Person_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"age")] = __Person_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"address")] = __Person_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"favoriteColor")] = __Person_FieldsSetter._set_field_4
        __fbthrift_inst._setters[__cstring_view(<const char*>"friends")] = __Person_FieldsSetter._set_field_5
        __fbthrift_inst._setters[__cstring_view(<const char*>"bestFriend")] = __Person_FieldsSetter._set_field_6
        __fbthrift_inst._setters[__cstring_view(<const char*>"petNames")] = __Person_FieldsSetter._set_field_7
        __fbthrift_inst._setters[__cstring_view(<const char*>"afraidOfAnimal")] = __Person_FieldsSetter._set_field_8
        __fbthrift_inst._setters[__cstring_view(<const char*>"vehicles")] = __Person_FieldsSetter._set_field_9
        return __fbthrift_inst

    cdef void set_field(__Person_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Person_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field id
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'id is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).id_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field name
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'name is not a { str !r}.')
        deref(self._struct_cpp_obj).name_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field age
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'age is not a { int !r}.')
        _fbthrift_value = <cint16_t> _fbthrift_value
        deref(self._struct_cpp_obj).age_ref().assign(_fbthrift_value)

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field address
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'address is not a { str !r}.')
        deref(self._struct_cpp_obj).address_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field favoriteColor
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 4)
            return
        if not isinstance(_fbthrift_value, _module_types.Color):
            raise TypeError(f'favoriteColor is not a { _module_types.Color !r}.')
        deref(self._struct_cpp_obj).favoriteColor_ref().assign(deref((<_module_types.Color?> _fbthrift_value)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))

    cdef void _set_field_5(self, _fbthrift_value) except *:
        # for field friends
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 5)
            return
        deref(self._struct_cpp_obj).friends_ref().assign(deref(_module_types.Set__i64(_fbthrift_value)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))

    cdef void _set_field_6(self, _fbthrift_value) except *:
        # for field bestFriend
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 6)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'bestFriend is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).bestFriend_ref().assign(_fbthrift_value)

    cdef void _set_field_7(self, _fbthrift_value) except *:
        # for field petNames
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 7)
            return
        deref(self._struct_cpp_obj).petNames_ref().assign(deref(_module_types.Map__Animal_string(_fbthrift_value)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))

    cdef void _set_field_8(self, _fbthrift_value) except *:
        # for field afraidOfAnimal
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 8)
            return
        if not isinstance(_fbthrift_value, _fbthrift_BadEnum) and not isinstance(_fbthrift_value, _module_types.Animal):
            raise TypeError(f'field afraidOfAnimal value: {repr(_fbthrift_value)} is not of the enum type { _module_types.Animal }.')
        deref(self._struct_cpp_obj).afraidOfAnimal_ref().assign(<_module_types.cAnimal><int>_fbthrift_value)

    cdef void _set_field_9(self, _fbthrift_value) except *:
        # for field vehicles
        if _fbthrift_value is None:
            __reset_field[_module_types.cPerson](deref(self._struct_cpp_obj), 9)
            return
        deref(self._struct_cpp_obj).vehicles_ref().assign(_module_types.List__Vehicle__make_instance(_fbthrift_value))

