
#
# Autogenerated by Thrift for hsmodule.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cHsFoo] HsFoo_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.HsFoo?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE


cdef object HsFoo_from_cpp(const shared_ptr[_fbthrift_ctypes.cHsFoo]& c_struct):
    return _fbthrift_ctypes.HsFoo._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)
