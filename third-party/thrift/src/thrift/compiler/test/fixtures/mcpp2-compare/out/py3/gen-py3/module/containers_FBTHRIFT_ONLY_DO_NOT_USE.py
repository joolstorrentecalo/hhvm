#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import importlib
from collections.abc import Sequence

"""
    This is a helper module to define py3 container types.
    All types defined here are re-exported in the parent `.types` module.
    Only `import` types defined here via the parent `.types` module.
    If you `import` them directly from here, you will get nasty import errors.
"""

import module.types as _module_types
import includes.types as _includes_types

def get_types_reflection():
    return importlib.import_module(
        "module.types_reflection"
    )

__all__ = []

class List__Map__Empty_MyStruct(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Map__Empty_MyStruct):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Map__Empty_MyStruct._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Map__Empty_MyStruct)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Mapping[_module_types.Empty, _module_types.MyStruct]")
        if not isinstance(item, _module_types.Map__Empty_MyStruct):
            item = _module_types.Map__Empty_MyStruct(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.Map__Empty_MyStruct):
            return item
        try:
            return _module_types.Map__Empty_MyStruct(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Map__Empty_MyStruct()


Sequence.register(List__Map__Empty_MyStruct)
__all__.append('List__Map__Empty_MyStruct')

class List__List__Map__Empty_MyStruct(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__List__Map__Empty_MyStruct):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__List__Map__Empty_MyStruct._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__List__Map__Empty_MyStruct)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Sequence[_typing.Mapping[_module_types.Empty, _module_types.MyStruct]]")
        if not isinstance(item, _module_types.List__Map__Empty_MyStruct):
            item = _module_types.List__Map__Empty_MyStruct(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.List__Map__Empty_MyStruct):
            return item
        try:
            return _module_types.List__Map__Empty_MyStruct(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__List__Map__Empty_MyStruct()


Sequence.register(List__List__Map__Empty_MyStruct)
__all__.append('List__List__Map__Empty_MyStruct')

class List__List__List__Map__Empty_MyStruct(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__List__List__Map__Empty_MyStruct):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__List__List__Map__Empty_MyStruct._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__List__List__Map__Empty_MyStruct)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Sequence[_typing.Sequence[_typing.Mapping[_module_types.Empty, _module_types.MyStruct]]]")
        if not isinstance(item, _module_types.List__List__Map__Empty_MyStruct):
            item = _module_types.List__List__Map__Empty_MyStruct(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.List__List__Map__Empty_MyStruct):
            return item
        try:
            return _module_types.List__List__Map__Empty_MyStruct(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__List__List__Map__Empty_MyStruct()


Sequence.register(List__List__List__Map__Empty_MyStruct)
__all__.append('List__List__List__Map__Empty_MyStruct')

class List__MyEnumA(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__MyEnumA):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__MyEnumA._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__MyEnumA)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, _module_types.MyEnumA) or
            isinstance(item, thrift.py3.types.BadEnum)
        ):
            raise TypeError(f"{item!r} is not of type _module_types.MyEnumA")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.MyEnumA):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__MyEnumA()


Sequence.register(List__MyEnumA)
__all__.append('List__MyEnumA')

class List__ComplexUnion(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__ComplexUnion):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__ComplexUnion._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__ComplexUnion)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, _module_types.ComplexUnion)
        ):
            raise TypeError(f"{item!r} is not of type _module_types.ComplexUnion")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.ComplexUnion):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__ComplexUnion()


Sequence.register(List__ComplexUnion)
__all__.append('List__ComplexUnion')

class List__string(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__string):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
            check_method = List__string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, str)
        ):
            raise TypeError(f"{item!r} is not of type str")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, str):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__string()


Sequence.register(List__string)
__all__.append('List__string')

class List__bool(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__bool):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__bool._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__bool)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, bool)
        ):
            raise TypeError(f"{item!r} is not of type bool")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, bool):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__bool()


Sequence.register(List__bool)
__all__.append('List__bool')

class List__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, int)
        ):
            raise TypeError(f"{item!r} is not of type int")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, int):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__i32()


Sequence.register(List__i32)
__all__.append('List__i32')

class List__List__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__List__i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__List__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__List__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Sequence[int]")
        if not isinstance(item, _module_types.List__i32):
            item = _module_types.List__i32(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.List__i32):
            return item
        try:
            return _module_types.List__i32(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__List__i32()


Sequence.register(List__List__i32)
__all__.append('List__List__i32')

class List__List__List__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__List__List__i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__List__List__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__List__List__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Sequence[_typing.Sequence[int]]")
        if not isinstance(item, _module_types.List__List__i32):
            item = _module_types.List__List__i32(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.List__List__i32):
            return item
        try:
            return _module_types.List__List__i32(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__List__List__i32()


Sequence.register(List__List__List__i32)
__all__.append('List__List__List__i32')

class List__List__List__List__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__List__List__List__i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__List__List__List__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__List__List__List__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]")
        if not isinstance(item, _module_types.List__List__List__i32):
            item = _module_types.List__List__List__i32(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.List__List__List__i32):
            return item
        try:
            return _module_types.List__List__List__i32(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__List__List__List__i32()


Sequence.register(List__List__List__List__i32)
__all__.append('List__List__List__List__i32')

class List__Set__string(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Set__string):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Set__string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Set__string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.AbstractSet[str]")
        if not isinstance(item, _module_types.Set__string):
            item = _module_types.Set__string(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.Set__string):
            return item
        try:
            return _module_types.Set__string(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Set__string()


Sequence.register(List__Set__string)
__all__.append('List__Set__string')

class List__binary(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__binary):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[bytes] field, explicitly convert it first.")
            check_method = List__binary._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__binary)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, bytes)
        ):
            raise TypeError(f"{item!r} is not of type bytes")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, bytes):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__binary()


Sequence.register(List__binary)
__all__.append('List__binary')

class List__SimpleUnion(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__SimpleUnion):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__SimpleUnion._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__SimpleUnion)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, _module_types.SimpleUnion)
        ):
            raise TypeError(f"{item!r} is not of type _module_types.SimpleUnion")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.SimpleUnion):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__SimpleUnion()


Sequence.register(List__SimpleUnion)
__all__.append('List__SimpleUnion')

class List__Set__SimpleUnion(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Set__SimpleUnion):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Set__SimpleUnion._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Set__SimpleUnion)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.AbstractSet[_module_types.SimpleUnion]")
        if not isinstance(item, _module_types.Set__SimpleUnion):
            item = _module_types.Set__SimpleUnion(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.Set__SimpleUnion):
            return item
        try:
            return _module_types.Set__SimpleUnion(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Set__SimpleUnion()


Sequence.register(List__Set__SimpleUnion)
__all__.append('List__Set__SimpleUnion')

class List__Set__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Set__i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Set__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Set__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.AbstractSet[int]")
        if not isinstance(item, _module_types.Set__i32):
            item = _module_types.Set__i32(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.Set__i32):
            return item
        try:
            return _module_types.Set__i32(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Set__i32()


Sequence.register(List__Set__i32)
__all__.append('List__Set__i32')

class folly_small_vector_int64_t_8__List__i64(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, folly_small_vector_int64_t_8__List__i64):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = folly_small_vector_int64_t_8__List__i64._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, folly_small_vector_int64_t_8__List__i64)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, int)
        ):
            raise TypeError(f"{item!r} is not of type int")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, int):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__folly_small_vector_int64_t_8__List__i64()


Sequence.register(folly_small_vector_int64_t_8__List__i64)
__all__.append('folly_small_vector_int64_t_8__List__i64')

class std_list__List__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, std_list__List__i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = std_list__List__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, std_list__List__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, int)
        ):
            raise TypeError(f"{item!r} is not of type int")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, int):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__std_list__List__i32()


Sequence.register(std_list__List__i32)
__all__.append('std_list__List__i32')

class std_deque__List__string(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, std_deque__List__string):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
            check_method = std_deque__List__string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, std_deque__List__string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, str)
        ):
            raise TypeError(f"{item!r} is not of type str")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, str):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__std_deque__List__string()


Sequence.register(std_deque__List__string)
__all__.append('std_deque__List__string')

class List__Bar__double(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Bar__double):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Bar__double._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Bar__double)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, (float, int))
        ):
            raise TypeError(f"{item!r} is not of type float")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, float):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Bar__double()


Sequence.register(List__Bar__double)
__all__.append('List__Bar__double')

class List__Map__string_i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Map__string_i32):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Map__string_i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Map__string_i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Mapping[str, int]")
        if not isinstance(item, _module_types.Map__string_i32):
            item = _module_types.Map__string_i32(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.Map__string_i32):
            return item
        try:
            return _module_types.Map__string_i32(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Map__string_i32()


Sequence.register(List__Map__string_i32)
__all__.append('List__Map__string_i32')

class List__Map__i16_string(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Map__i16_string):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__Map__i16_string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__Map__i16_string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Mapping[int, str]")
        if not isinstance(item, _module_types.Map__i16_string):
            item = _module_types.Map__i16_string(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.Map__i16_string):
            return item
        try:
            return _module_types.Map__i16_string(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Map__i16_string()


Sequence.register(List__Map__i16_string)
__all__.append('List__Map__i16_string')

class List__MyStruct(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__MyStruct):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__MyStruct._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__MyStruct)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, _module_types.MyStruct)
        ):
            raise TypeError(f"{item!r} is not of type _module_types.MyStruct")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _module_types.MyStruct):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__MyStruct()


Sequence.register(List__MyStruct)
__all__.append('List__MyStruct')

