#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import includes.thrift_types

import module.thrift_types

import transitive.thrift_types

# This unfortunately has to be down here to prevent circular imports
import service.thrift_metadata


_fbthrift_all_enums = [
]

_fbthrift_all_structs = [
]

IncludesIncluded = includes.thrift_types.Included
IncludesTransitiveFoo = transitive.thrift_types.Foo



class _fbthrift_MyService_query_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            "s",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(module.thrift_types.MyStruct),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(includes.thrift_types.Included),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_MyService_query_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_has_arg_docs_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            "s",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(module.thrift_types.MyStruct),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(includes.thrift_types.Included),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_MyService_has_arg_docs_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )



_fbthrift_python_types.fill_specs(
    _fbthrift_MyService_query_args,
    _fbthrift_MyService_query_result,
    _fbthrift_MyService_has_arg_docs_args,
    _fbthrift_MyService_has_arg_docs_result,
)
