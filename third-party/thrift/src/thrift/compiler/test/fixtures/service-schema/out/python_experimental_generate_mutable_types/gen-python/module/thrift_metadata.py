#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import apache.thrift.metadata.thrift_types as _fbthrift_metadata


import include.thrift_metadata

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_exception_CustomException(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.CustomException"

    if qualified_name in metadata_struct.exceptions:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="name", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="module.Result")), name="result", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.exceptions)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftException(name=qualified_name, fields=fields,
        structured_annotations=[
        ])
    new_struct = metadata_struct(exceptions=struct_dict)

    # name
        # result
    new_struct = _fbthrift_gen_metadata_enum_Result(new_struct)
    return new_struct
def gen_metadata_exception_CustomException() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_exception_CustomException(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))


def gen_metadata_service_PrimitivesService() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_service_PrimitivesService(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def _fbthrift_gen_metadata_service_PrimitivesService(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.PrimitivesService"
    
    if qualified_name in metadata_struct.services:
        return metadata_struct
    
    functions = [
        _fbthrift_metadata.ThriftFunction(name="init", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="param0", is_optional=False, structured_annotations=[
            ]),
            _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="param1", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="method_that_throws", return_type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="module.Result")), arguments=[
        ], exceptions = [
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.CustomException")), name="e", is_optional=False, structured_annotations=[
            ]),
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="return_void_method", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="id", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
    ]
    
    service_dict = dict(metadata_struct.services)
    service_dict[qualified_name] = _fbthrift_metadata.ThriftService(name=qualified_name, functions=functions,  structured_annotations=[
    ])
    new_struct = metadata_struct(services=service_dict)
    
     # param0
     # param1
    
    
     # return value
    
    
    
    new_struct = _fbthrift_gen_metadata_exception_CustomException(new_struct) # e
    
    new_struct = _fbthrift_gen_metadata_enum_Result(new_struct) # return value
    
    
     # id
    
    
     # return value
    
    
    return new_struct

def _fbthrift_metadata_service_response_PrimitivesService() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
    metadata = gen_metadata_service_PrimitivesService()
    context = _fbthrift_metadata.ThriftServiceContext(service_info=metadata.services["module.PrimitivesService"], module=_fbthrift_metadata.ThriftModuleContext(name="module"))
    services = [_fbthrift_metadata.ThriftServiceContextRef(module=_fbthrift_metadata.ThriftModuleContext(name=name.split('.')[0]), service_name=name) for name in metadata.services]
    return _fbthrift_metadata.ThriftServiceMetadataResponse(metadata=metadata,context=context,services=services)



def _fbthrift_gen_metadata_enum_Result(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.Result"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        0: "OK",
        1: "SO_SO",
        2: "GOOD",
    }
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=[])
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_Result() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_Result(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_enum_Result(meta)
    meta = _fbthrift_gen_metadata_exception_CustomException(meta)
    meta = _fbthrift_gen_metadata_service_PrimitivesService(meta)
    return meta
