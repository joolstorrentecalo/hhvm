
#
# Autogenerated by Thrift for includes.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cAStruct] AStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.AStruct?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE


cdef object AStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cAStruct]& c_struct):
    return _fbthrift_ctypes.AStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cAStructB] AStructB_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.AStructB?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE


cdef object AStructB_from_cpp(const shared_ptr[_fbthrift_ctypes.cAStructB]& c_struct):
    return _fbthrift_ctypes.AStructB._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)
