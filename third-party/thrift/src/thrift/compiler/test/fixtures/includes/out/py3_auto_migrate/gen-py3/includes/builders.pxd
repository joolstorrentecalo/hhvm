#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport transitive.py3_types as _transitive_types
cimport transitive.builders as _transitive_builders

cimport includes.py3_types as _includes_types

cdef class Included_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint MyIntField
    cdef public object MyTransitiveField


