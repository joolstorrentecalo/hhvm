
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport int64_t
from libcpp.memory cimport unique_ptr as __unique_ptr
from folly.iobuf cimport cIOBuf as __cIOBuf


cdef api int can_extract__test__fixtures__basic_python_capi__module__MyStruct(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__MyStruct(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__MyStruct(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__MyDataItem(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__MyDataItem(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__MyDataItem(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__TransitiveDoubler(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__TransitiveDoubler(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__TransitiveDoubler(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__DoubledPair(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__DoubledPair(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__DoubledPair(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__StringPair(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__StringPair(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__StringPair(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__EmptyStruct(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__EmptyStruct(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__EmptyStruct(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__PrimitiveStruct(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__PrimitiveStruct(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__PrimitiveStruct(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__ListStruct(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__ListStruct(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__ListStruct(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__MyUnion(object) except -1

cdef api __cIOBuf* extract__test__fixtures__basic_python_capi__module__MyUnion(object) except NULL

cdef api object construct__test__fixtures__basic_python_capi__module__MyUnion(__unique_ptr[__cIOBuf])

cdef api int can_extract__test__fixtures__basic_python_capi__module__MyEnum(object) except -1

cdef api int64_t extract__test__fixtures__basic_python_capi__module__MyEnum(object) except -1

cdef api object construct__test__fixtures__basic_python_capi__module__MyEnum(int64_t)

