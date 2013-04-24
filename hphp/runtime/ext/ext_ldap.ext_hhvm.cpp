/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
#include <runtime/ext_hhvm/ext_hhvm.h>
#include <runtime/base/builtin_functions.h>
#include <runtime/base/array/array_init.h>
#include <runtime/ext/ext.h>
#include <runtime/vm/class.h>
#include <runtime/vm/runtime.h>
#include <exception>

namespace HPHP {

/*
HPHP::Variant HPHP::f_ldap_connect(HPHP::String const&, int)
_ZN4HPHP14f_ldap_connectERKNS_6StringEi

(return value) => rax
_rv => rdi
hostname => rsi
port => rdx
*/

TypedValue* fh_ldap_connect(TypedValue* _rv, Value* hostname, int port) asm("_ZN4HPHP14f_ldap_connectERKNS_6StringEi");

TypedValue * fg1_ldap_connect(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_connect(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 2
    if ((args-1)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-1);
    }
  case 1:
    if (!IS_STRING_TYPE((args-0)->m_type)) {
      tvCastToStringInPlace(args-0);
    }
  case 0:
    break;
  }
  fh_ldap_connect((rv), (count > 0) ? &args[-0].m_data : (Value*)(&null_string), (count > 1) ? (int)(args[-1].m_data.num) : (int)(389));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_connect(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count <= 2LL) {
      if ((count <= 1 || (args-1)->m_type == KindOfInt64) && (count <= 0 || IS_STRING_TYPE((args-0)->m_type))) {
        fh_ldap_connect((&(rv)), (count > 0) ? &args[-0].m_data : (Value*)(&null_string), (count > 1) ? (int)(args[-1].m_data.num) : (int)(389));
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_connect(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_toomany_arguments_nr("ldap_connect", 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_explode_dn(HPHP::String const&, int)
_ZN4HPHP17f_ldap_explode_dnERKNS_6StringEi

(return value) => rax
_rv => rdi
dn => rsi
with_attrib => rdx
*/

TypedValue* fh_ldap_explode_dn(TypedValue* _rv, Value* dn, int with_attrib) asm("_ZN4HPHP17f_ldap_explode_dnERKNS_6StringEi");

TypedValue * fg1_ldap_explode_dn(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_explode_dn(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-1);
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  fh_ldap_explode_dn((rv), &args[-0].m_data, (int)(args[-1].m_data.num));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_explode_dn(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfInt64 && IS_STRING_TYPE((args-0)->m_type)) {
        fh_ldap_explode_dn((&(rv)), &args[-0].m_data, (int)(args[-1].m_data.num));
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_explode_dn(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_explode_dn", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_dn2ufn(HPHP::String const&)
_ZN4HPHP13f_ldap_dn2ufnERKNS_6StringE

(return value) => rax
_rv => rdi
db => rsi
*/

TypedValue* fh_ldap_dn2ufn(TypedValue* _rv, Value* db) asm("_ZN4HPHP13f_ldap_dn2ufnERKNS_6StringE");

TypedValue * fg1_ldap_dn2ufn(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_dn2ufn(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToStringInPlace(args-0);
  fh_ldap_dn2ufn((rv), &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_dn2ufn(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if (IS_STRING_TYPE((args-0)->m_type)) {
        fh_ldap_dn2ufn((&(rv)), &args[-0].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_dn2ufn(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_dn2ufn", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::String HPHP::f_ldap_err2str(int)
_ZN4HPHP14f_ldap_err2strEi

(return value) => rax
_rv => rdi
errnum => rsi
*/

Value* fh_ldap_err2str(Value* _rv, int errnum) asm("_ZN4HPHP14f_ldap_err2strEi");

TypedValue * fg1_ldap_err2str(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_err2str(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfString;
  tvCastToInt64InPlace(args-0);
  fh_ldap_err2str((&rv->m_data), (int)(args[-0].m_data.num));
  if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_err2str(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfInt64) {
        rv.m_type = KindOfString;
        fh_ldap_err2str((&rv.m_data), (int)(args[-0].m_data.num));
        if (rv.m_data.num == 0LL) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_err2str(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_err2str", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_add(HPHP::Object const&, HPHP::String const&, HPHP::Array const&)
_ZN4HPHP10f_ldap_addERKNS_6ObjectERKNS_6StringERKNS_5ArrayE

(return value) => rax
link => rdi
dn => rsi
entry => rdx
*/

bool fh_ldap_add(Value* link, Value* dn, Value* entry) asm("_ZN4HPHP10f_ldap_addERKNS_6ObjectERKNS_6StringERKNS_5ArrayE");

TypedValue * fg1_ldap_add(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_add(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-2)->m_type != KindOfArray) {
    tvCastToArrayInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_add(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_add(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-2)->m_type == KindOfArray && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_add(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_add(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_add", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_mod_add(HPHP::Object const&, HPHP::String const&, HPHP::Array const&)
_ZN4HPHP14f_ldap_mod_addERKNS_6ObjectERKNS_6StringERKNS_5ArrayE

(return value) => rax
link => rdi
dn => rsi
entry => rdx
*/

bool fh_ldap_mod_add(Value* link, Value* dn, Value* entry) asm("_ZN4HPHP14f_ldap_mod_addERKNS_6ObjectERKNS_6StringERKNS_5ArrayE");

TypedValue * fg1_ldap_mod_add(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_mod_add(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-2)->m_type != KindOfArray) {
    tvCastToArrayInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_mod_add(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_mod_add(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-2)->m_type == KindOfArray && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_mod_add(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_mod_add(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_mod_add", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_mod_del(HPHP::Object const&, HPHP::String const&, HPHP::Array const&)
_ZN4HPHP14f_ldap_mod_delERKNS_6ObjectERKNS_6StringERKNS_5ArrayE

(return value) => rax
link => rdi
dn => rsi
entry => rdx
*/

bool fh_ldap_mod_del(Value* link, Value* dn, Value* entry) asm("_ZN4HPHP14f_ldap_mod_delERKNS_6ObjectERKNS_6StringERKNS_5ArrayE");

TypedValue * fg1_ldap_mod_del(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_mod_del(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-2)->m_type != KindOfArray) {
    tvCastToArrayInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_mod_del(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_mod_del(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-2)->m_type == KindOfArray && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_mod_del(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_mod_del(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_mod_del", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_mod_replace(HPHP::Object const&, HPHP::String const&, HPHP::Array const&)
_ZN4HPHP18f_ldap_mod_replaceERKNS_6ObjectERKNS_6StringERKNS_5ArrayE

(return value) => rax
link => rdi
dn => rsi
entry => rdx
*/

bool fh_ldap_mod_replace(Value* link, Value* dn, Value* entry) asm("_ZN4HPHP18f_ldap_mod_replaceERKNS_6ObjectERKNS_6StringERKNS_5ArrayE");

TypedValue * fg1_ldap_mod_replace(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_mod_replace(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-2)->m_type != KindOfArray) {
    tvCastToArrayInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_mod_replace(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_mod_replace(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-2)->m_type == KindOfArray && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_mod_replace(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_mod_replace(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_mod_replace", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_modify(HPHP::Object const&, HPHP::String const&, HPHP::Array const&)
_ZN4HPHP13f_ldap_modifyERKNS_6ObjectERKNS_6StringERKNS_5ArrayE

(return value) => rax
link => rdi
dn => rsi
entry => rdx
*/

bool fh_ldap_modify(Value* link, Value* dn, Value* entry) asm("_ZN4HPHP13f_ldap_modifyERKNS_6ObjectERKNS_6StringERKNS_5ArrayE");

TypedValue * fg1_ldap_modify(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_modify(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-2)->m_type != KindOfArray) {
    tvCastToArrayInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_modify(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_modify(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-2)->m_type == KindOfArray && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_modify(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_modify(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_modify", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_bind(HPHP::Object const&, HPHP::String const&, HPHP::String const&)
_ZN4HPHP11f_ldap_bindERKNS_6ObjectERKNS_6StringES5_

(return value) => rax
link => rdi
bind_rdn => rsi
bind_password => rdx
*/

bool fh_ldap_bind(Value* link, Value* bind_rdn, Value* bind_password) asm("_ZN4HPHP11f_ldap_bindERKNS_6ObjectERKNS_6StringES5_");

TypedValue * fg1_ldap_bind(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_bind(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  switch (count) {
  default: // count >= 3
    if (!IS_STRING_TYPE((args-2)->m_type)) {
      tvCastToStringInPlace(args-2);
    }
  case 2:
    if (!IS_STRING_TYPE((args-1)->m_type)) {
      tvCastToStringInPlace(args-1);
    }
  case 1:
    break;
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_bind(&args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&null_string), (count > 2) ? &args[-2].m_data : (Value*)(&null_string))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_bind(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count >= 1LL && count <= 3LL) {
      if ((count <= 2 || IS_STRING_TYPE((args-2)->m_type)) && (count <= 1 || IS_STRING_TYPE((args-1)->m_type)) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_bind(&args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&null_string), (count > 2) ? &args[-2].m_data : (Value*)(&null_string))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_bind(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_bind", count, 1, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_set_rebind_proc(HPHP::Object const&, HPHP::Variant const&)
_ZN4HPHP22f_ldap_set_rebind_procERKNS_6ObjectERKNS_7VariantE

(return value) => rax
link => rdi
callback => rsi
*/

bool fh_ldap_set_rebind_proc(Value* link, TypedValue* callback) asm("_ZN4HPHP22f_ldap_set_rebind_procERKNS_6ObjectERKNS_7VariantE");

TypedValue * fg1_ldap_set_rebind_proc(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_set_rebind_proc(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  tvCastToObjectInPlace(args-0);
  rv->m_data.num = (fh_ldap_set_rebind_proc(&args[-0].m_data, (args-1))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_set_rebind_proc(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_set_rebind_proc(&args[-0].m_data, (args-1))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_set_rebind_proc(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_set_rebind_proc", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_sort(HPHP::Object const&, HPHP::Object const&, HPHP::String const&)
_ZN4HPHP11f_ldap_sortERKNS_6ObjectES2_RKNS_6StringE

(return value) => rax
link => rdi
result => rsi
sortfilter => rdx
*/

bool fh_ldap_sort(Value* link, Value* result, Value* sortfilter) asm("_ZN4HPHP11f_ldap_sortERKNS_6ObjectES2_RKNS_6StringE");

TypedValue * fg1_ldap_sort(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_sort(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if (!IS_STRING_TYPE((args-2)->m_type)) {
    tvCastToStringInPlace(args-2);
  }
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_sort(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_sort(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if (IS_STRING_TYPE((args-2)->m_type) && (args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_sort(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_sort(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_sort", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_start_tls(HPHP::Object const&)
_ZN4HPHP16f_ldap_start_tlsERKNS_6ObjectE

(return value) => rax
link => rdi
*/

bool fh_ldap_start_tls(Value* link) asm("_ZN4HPHP16f_ldap_start_tlsERKNS_6ObjectE");

TypedValue * fg1_ldap_start_tls(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_start_tls(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  tvCastToObjectInPlace(args-0);
  rv->m_data.num = (fh_ldap_start_tls(&args[-0].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_start_tls(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_start_tls(&args[-0].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_start_tls(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_start_tls", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_unbind(HPHP::Object const&)
_ZN4HPHP13f_ldap_unbindERKNS_6ObjectE

(return value) => rax
link => rdi
*/

bool fh_ldap_unbind(Value* link) asm("_ZN4HPHP13f_ldap_unbindERKNS_6ObjectE");

TypedValue * fg1_ldap_unbind(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_unbind(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  tvCastToObjectInPlace(args-0);
  rv->m_data.num = (fh_ldap_unbind(&args[-0].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_unbind(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_unbind(&args[-0].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_unbind(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_unbind", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_get_option(HPHP::Object const&, int, HPHP::VRefParamValue const&)
_ZN4HPHP17f_ldap_get_optionERKNS_6ObjectEiRKNS_14VRefParamValueE

(return value) => rax
link => rdi
option => rsi
retval => rdx
*/

bool fh_ldap_get_option(Value* link, int option, TypedValue* retval) asm("_ZN4HPHP17f_ldap_get_optionERKNS_6ObjectEiRKNS_14VRefParamValueE");

TypedValue * fg1_ldap_get_option(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_get_option(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-1)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_get_option(&args[-0].m_data, (int)(args[-1].m_data.num), (args-2))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_get_option(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-1)->m_type == KindOfInt64 && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_get_option(&args[-0].m_data, (int)(args[-1].m_data.num), (args-2))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_get_option(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_get_option", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_set_option(HPHP::Variant const&, int, HPHP::Variant const&)
_ZN4HPHP17f_ldap_set_optionERKNS_7VariantEiS2_

(return value) => rax
link => rdi
option => rsi
newval => rdx
*/

bool fh_ldap_set_option(TypedValue* link, int option, TypedValue* newval) asm("_ZN4HPHP17f_ldap_set_optionERKNS_7VariantEiS2_");

TypedValue * fg1_ldap_set_option(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_set_option(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  tvCastToInt64InPlace(args-1);
  rv->m_data.num = (fh_ldap_set_option((args-0), (int)(args[-1].m_data.num), (args-2))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_set_option(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-1)->m_type == KindOfInt64) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_set_option((args-0), (int)(args[-1].m_data.num), (args-2))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_set_option(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_set_option", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_close(HPHP::Object const&)
_ZN4HPHP12f_ldap_closeERKNS_6ObjectE

(return value) => rax
link => rdi
*/

bool fh_ldap_close(Value* link) asm("_ZN4HPHP12f_ldap_closeERKNS_6ObjectE");

TypedValue * fg1_ldap_close(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_close(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  tvCastToObjectInPlace(args-0);
  rv->m_data.num = (fh_ldap_close(&args[-0].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_close(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_close(&args[-0].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_close(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_close", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_list(HPHP::Variant const&, HPHP::Variant const&, HPHP::Variant const&, HPHP::Array const&, int, int, int, int)
_ZN4HPHP11f_ldap_listERKNS_7VariantES2_S2_RKNS_5ArrayEiiii

(return value) => rax
_rv => rdi
link => rsi
base_dn => rdx
filter => rcx
attributes => r8
attrsonly => r9
sizelimit => st0
timelimit => st8
deref => st16
*/

TypedValue* fh_ldap_list(TypedValue* _rv, TypedValue* link, TypedValue* base_dn, TypedValue* filter, Value* attributes, int attrsonly, int sizelimit, int timelimit, int deref) asm("_ZN4HPHP11f_ldap_listERKNS_7VariantES2_S2_RKNS_5ArrayEiiii");

TypedValue * fg1_ldap_list(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_list(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 8
    if ((args-7)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-7);
    }
  case 7:
    if ((args-6)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-6);
    }
  case 6:
    if ((args-5)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-5);
    }
  case 5:
    if ((args-4)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-4);
    }
  case 4:
    if ((args-3)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-3);
    }
  case 3:
    break;
  }
  fh_ldap_list((rv), (args-0), (args-1), (args-2), (count > 3) ? &args[-3].m_data : (Value*)(&null_array), (count > 4) ? (int)(args[-4].m_data.num) : (int)(0), (count > 5) ? (int)(args[-5].m_data.num) : (int)(-1), (count > 6) ? (int)(args[-6].m_data.num) : (int)(-1), (count > 7) ? (int)(args[-7].m_data.num) : (int)(-1));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_list(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count >= 3LL && count <= 8LL) {
      if ((count <= 7 || (args-7)->m_type == KindOfInt64) && (count <= 6 || (args-6)->m_type == KindOfInt64) && (count <= 5 || (args-5)->m_type == KindOfInt64) && (count <= 4 || (args-4)->m_type == KindOfInt64) && (count <= 3 || (args-3)->m_type == KindOfArray)) {
        fh_ldap_list((&(rv)), (args-0), (args-1), (args-2), (count > 3) ? &args[-3].m_data : (Value*)(&null_array), (count > 4) ? (int)(args[-4].m_data.num) : (int)(0), (count > 5) ? (int)(args[-5].m_data.num) : (int)(-1), (count > 6) ? (int)(args[-6].m_data.num) : (int)(-1), (count > 7) ? (int)(args[-7].m_data.num) : (int)(-1));
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 8);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_list(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 8);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_list", count, 3, 8, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 8);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_read(HPHP::Variant const&, HPHP::Variant const&, HPHP::Variant const&, HPHP::Array const&, int, int, int, int)
_ZN4HPHP11f_ldap_readERKNS_7VariantES2_S2_RKNS_5ArrayEiiii

(return value) => rax
_rv => rdi
link => rsi
base_dn => rdx
filter => rcx
attributes => r8
attrsonly => r9
sizelimit => st0
timelimit => st8
deref => st16
*/

TypedValue* fh_ldap_read(TypedValue* _rv, TypedValue* link, TypedValue* base_dn, TypedValue* filter, Value* attributes, int attrsonly, int sizelimit, int timelimit, int deref) asm("_ZN4HPHP11f_ldap_readERKNS_7VariantES2_S2_RKNS_5ArrayEiiii");

TypedValue * fg1_ldap_read(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_read(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 8
    if ((args-7)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-7);
    }
  case 7:
    if ((args-6)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-6);
    }
  case 6:
    if ((args-5)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-5);
    }
  case 5:
    if ((args-4)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-4);
    }
  case 4:
    if ((args-3)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-3);
    }
  case 3:
    break;
  }
  fh_ldap_read((rv), (args-0), (args-1), (args-2), (count > 3) ? &args[-3].m_data : (Value*)(&null_array), (count > 4) ? (int)(args[-4].m_data.num) : (int)(0), (count > 5) ? (int)(args[-5].m_data.num) : (int)(-1), (count > 6) ? (int)(args[-6].m_data.num) : (int)(-1), (count > 7) ? (int)(args[-7].m_data.num) : (int)(-1));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_read(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count >= 3LL && count <= 8LL) {
      if ((count <= 7 || (args-7)->m_type == KindOfInt64) && (count <= 6 || (args-6)->m_type == KindOfInt64) && (count <= 5 || (args-5)->m_type == KindOfInt64) && (count <= 4 || (args-4)->m_type == KindOfInt64) && (count <= 3 || (args-3)->m_type == KindOfArray)) {
        fh_ldap_read((&(rv)), (args-0), (args-1), (args-2), (count > 3) ? &args[-3].m_data : (Value*)(&null_array), (count > 4) ? (int)(args[-4].m_data.num) : (int)(0), (count > 5) ? (int)(args[-5].m_data.num) : (int)(-1), (count > 6) ? (int)(args[-6].m_data.num) : (int)(-1), (count > 7) ? (int)(args[-7].m_data.num) : (int)(-1));
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 8);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_read(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 8);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_read", count, 3, 8, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 8);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_search(HPHP::Variant const&, HPHP::Variant const&, HPHP::Variant const&, HPHP::Array const&, int, int, int, int)
_ZN4HPHP13f_ldap_searchERKNS_7VariantES2_S2_RKNS_5ArrayEiiii

(return value) => rax
_rv => rdi
link => rsi
base_dn => rdx
filter => rcx
attributes => r8
attrsonly => r9
sizelimit => st0
timelimit => st8
deref => st16
*/

TypedValue* fh_ldap_search(TypedValue* _rv, TypedValue* link, TypedValue* base_dn, TypedValue* filter, Value* attributes, int attrsonly, int sizelimit, int timelimit, int deref) asm("_ZN4HPHP13f_ldap_searchERKNS_7VariantES2_S2_RKNS_5ArrayEiiii");

TypedValue * fg1_ldap_search(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_search(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 8
    if ((args-7)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-7);
    }
  case 7:
    if ((args-6)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-6);
    }
  case 6:
    if ((args-5)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-5);
    }
  case 5:
    if ((args-4)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-4);
    }
  case 4:
    if ((args-3)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-3);
    }
  case 3:
    break;
  }
  fh_ldap_search((rv), (args-0), (args-1), (args-2), (count > 3) ? &args[-3].m_data : (Value*)(&null_array), (count > 4) ? (int)(args[-4].m_data.num) : (int)(0), (count > 5) ? (int)(args[-5].m_data.num) : (int)(-1), (count > 6) ? (int)(args[-6].m_data.num) : (int)(-1), (count > 7) ? (int)(args[-7].m_data.num) : (int)(-1));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_search(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count >= 3LL && count <= 8LL) {
      if ((count <= 7 || (args-7)->m_type == KindOfInt64) && (count <= 6 || (args-6)->m_type == KindOfInt64) && (count <= 5 || (args-5)->m_type == KindOfInt64) && (count <= 4 || (args-4)->m_type == KindOfInt64) && (count <= 3 || (args-3)->m_type == KindOfArray)) {
        fh_ldap_search((&(rv)), (args-0), (args-1), (args-2), (count > 3) ? &args[-3].m_data : (Value*)(&null_array), (count > 4) ? (int)(args[-4].m_data.num) : (int)(0), (count > 5) ? (int)(args[-5].m_data.num) : (int)(-1), (count > 6) ? (int)(args[-6].m_data.num) : (int)(-1), (count > 7) ? (int)(args[-7].m_data.num) : (int)(-1));
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 8);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_search(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 8);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_search", count, 3, 8, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 8);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_rename(HPHP::Object const&, HPHP::String const&, HPHP::String const&, HPHP::String const&, bool)
_ZN4HPHP13f_ldap_renameERKNS_6ObjectERKNS_6StringES5_S5_b

(return value) => rax
link => rdi
dn => rsi
newrdn => rdx
newparent => rcx
deleteoldrdn => r8
*/

bool fh_ldap_rename(Value* link, Value* dn, Value* newrdn, Value* newparent, bool deleteoldrdn) asm("_ZN4HPHP13f_ldap_renameERKNS_6ObjectERKNS_6StringES5_S5_b");

TypedValue * fg1_ldap_rename(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_rename(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-4)->m_type != KindOfBoolean) {
    tvCastToBooleanInPlace(args-4);
  }
  if (!IS_STRING_TYPE((args-3)->m_type)) {
    tvCastToStringInPlace(args-3);
  }
  if (!IS_STRING_TYPE((args-2)->m_type)) {
    tvCastToStringInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_rename(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data, &args[-3].m_data, (bool)(args[-4].m_data.num))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_rename(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 5LL) {
      if ((args-4)->m_type == KindOfBoolean && IS_STRING_TYPE((args-3)->m_type) && IS_STRING_TYPE((args-2)->m_type) && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_rename(&args[-0].m_data, &args[-1].m_data, &args[-2].m_data, &args[-3].m_data, (bool)(args[-4].m_data.num))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 5);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_rename(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 5);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_rename", count, 5, 5, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 5);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_delete(HPHP::Object const&, HPHP::String const&)
_ZN4HPHP13f_ldap_deleteERKNS_6ObjectERKNS_6StringE

(return value) => rax
link => rdi
dn => rsi
*/

bool fh_ldap_delete(Value* link, Value* dn) asm("_ZN4HPHP13f_ldap_deleteERKNS_6ObjectERKNS_6StringE");

TypedValue * fg1_ldap_delete(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_delete(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_delete(&args[-0].m_data, &args[-1].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_delete(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if (IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_delete(&args[-0].m_data, &args[-1].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_delete(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_delete", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_compare(HPHP::Object const&, HPHP::String const&, HPHP::String const&, HPHP::String const&)
_ZN4HPHP14f_ldap_compareERKNS_6ObjectERKNS_6StringES5_S5_

(return value) => rax
_rv => rdi
link => rsi
dn => rdx
attribute => rcx
value => r8
*/

TypedValue* fh_ldap_compare(TypedValue* _rv, Value* link, Value* dn, Value* attribute, Value* value) asm("_ZN4HPHP14f_ldap_compareERKNS_6ObjectERKNS_6StringES5_S5_");

TypedValue * fg1_ldap_compare(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_compare(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (!IS_STRING_TYPE((args-3)->m_type)) {
    tvCastToStringInPlace(args-3);
  }
  if (!IS_STRING_TYPE((args-2)->m_type)) {
    tvCastToStringInPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_compare((rv), &args[-0].m_data, &args[-1].m_data, &args[-2].m_data, &args[-3].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_compare(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 4LL) {
      if (IS_STRING_TYPE((args-3)->m_type) && IS_STRING_TYPE((args-2)->m_type) && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        fh_ldap_compare((&(rv)), &args[-0].m_data, &args[-1].m_data, &args[-2].m_data, &args[-3].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 4);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_compare(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 4);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_compare", count, 4, 4, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 4);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
long HPHP::f_ldap_errno(HPHP::Object const&)
_ZN4HPHP12f_ldap_errnoERKNS_6ObjectE

(return value) => rax
link => rdi
*/

long fh_ldap_errno(Value* link) asm("_ZN4HPHP12f_ldap_errnoERKNS_6ObjectE");

TypedValue * fg1_ldap_errno(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_errno(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfInt64;
  tvCastToObjectInPlace(args-0);
  rv->m_data.num = (int64_t)fh_ldap_errno(&args[-0].m_data);
  return rv;
}

TypedValue* fg_ldap_errno(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfInt64;
        rv.m_data.num = (int64_t)fh_ldap_errno(&args[-0].m_data);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_errno(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_errno", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::String HPHP::f_ldap_error(HPHP::Object const&)
_ZN4HPHP12f_ldap_errorERKNS_6ObjectE

(return value) => rax
_rv => rdi
link => rsi
*/

Value* fh_ldap_error(Value* _rv, Value* link) asm("_ZN4HPHP12f_ldap_errorERKNS_6ObjectE");

TypedValue * fg1_ldap_error(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_error(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfString;
  tvCastToObjectInPlace(args-0);
  fh_ldap_error((&rv->m_data), &args[-0].m_data);
  if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_error(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfString;
        fh_ldap_error((&rv.m_data), &args[-0].m_data);
        if (rv.m_data.num == 0LL) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_error(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_error", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_get_dn(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP13f_ldap_get_dnERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
*/

TypedValue* fh_ldap_get_dn(TypedValue* _rv, Value* link, Value* result_entry) asm("_ZN4HPHP13f_ldap_get_dnERKNS_6ObjectES2_");

TypedValue * fg1_ldap_get_dn(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_get_dn(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_get_dn((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_get_dn(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_get_dn((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_get_dn(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_get_dn", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
long HPHP::f_ldap_count_entries(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP20f_ldap_count_entriesERKNS_6ObjectES2_

(return value) => rax
link => rdi
result => rsi
*/

long fh_ldap_count_entries(Value* link, Value* result) asm("_ZN4HPHP20f_ldap_count_entriesERKNS_6ObjectES2_");

TypedValue * fg1_ldap_count_entries(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_count_entries(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfInt64;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (int64_t)fh_ldap_count_entries(&args[-0].m_data, &args[-1].m_data);
  return rv;
}

TypedValue* fg_ldap_count_entries(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfInt64;
        rv.m_data.num = (int64_t)fh_ldap_count_entries(&args[-0].m_data, &args[-1].m_data);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_count_entries(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_count_entries", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_get_entries(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP18f_ldap_get_entriesERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result => rdx
*/

TypedValue* fh_ldap_get_entries(TypedValue* _rv, Value* link, Value* result) asm("_ZN4HPHP18f_ldap_get_entriesERKNS_6ObjectES2_");

TypedValue * fg1_ldap_get_entries(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_get_entries(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_get_entries((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_get_entries(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_get_entries((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_get_entries(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_get_entries", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_first_entry(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP18f_ldap_first_entryERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result => rdx
*/

TypedValue* fh_ldap_first_entry(TypedValue* _rv, Value* link, Value* result) asm("_ZN4HPHP18f_ldap_first_entryERKNS_6ObjectES2_");

TypedValue * fg1_ldap_first_entry(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_first_entry(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_first_entry((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_first_entry(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_first_entry((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_first_entry(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_first_entry", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_next_entry(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP17f_ldap_next_entryERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
*/

TypedValue* fh_ldap_next_entry(TypedValue* _rv, Value* link, Value* result_entry) asm("_ZN4HPHP17f_ldap_next_entryERKNS_6ObjectES2_");

TypedValue * fg1_ldap_next_entry(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_next_entry(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_next_entry((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_next_entry(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_next_entry((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_next_entry(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_next_entry", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Array HPHP::f_ldap_get_attributes(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP21f_ldap_get_attributesERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
*/

Value* fh_ldap_get_attributes(Value* _rv, Value* link, Value* result_entry) asm("_ZN4HPHP21f_ldap_get_attributesERKNS_6ObjectES2_");

TypedValue * fg1_ldap_get_attributes(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_get_attributes(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfArray;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_get_attributes((&rv->m_data), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_get_attributes(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfArray;
        fh_ldap_get_attributes((&rv.m_data), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_data.num == 0LL) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_get_attributes(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_get_attributes", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_first_attribute(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP22f_ldap_first_attributeERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
*/

TypedValue* fh_ldap_first_attribute(TypedValue* _rv, Value* link, Value* result_entry) asm("_ZN4HPHP22f_ldap_first_attributeERKNS_6ObjectES2_");

TypedValue * fg1_ldap_first_attribute(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_first_attribute(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_first_attribute((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_first_attribute(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_first_attribute((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_first_attribute(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_first_attribute", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_next_attribute(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP21f_ldap_next_attributeERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
*/

TypedValue* fh_ldap_next_attribute(TypedValue* _rv, Value* link, Value* result_entry) asm("_ZN4HPHP21f_ldap_next_attributeERKNS_6ObjectES2_");

TypedValue * fg1_ldap_next_attribute(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_next_attribute(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_next_attribute((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_next_attribute(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_next_attribute((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_next_attribute(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_next_attribute", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_first_reference(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP22f_ldap_first_referenceERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result => rdx
*/

TypedValue* fh_ldap_first_reference(TypedValue* _rv, Value* link, Value* result) asm("_ZN4HPHP22f_ldap_first_referenceERKNS_6ObjectES2_");

TypedValue * fg1_ldap_first_reference(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_first_reference(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_first_reference((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_first_reference(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_first_reference((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_first_reference(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_first_reference", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_next_reference(HPHP::Object const&, HPHP::Object const&)
_ZN4HPHP21f_ldap_next_referenceERKNS_6ObjectES2_

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
*/

TypedValue* fh_ldap_next_reference(TypedValue* _rv, Value* link, Value* result_entry) asm("_ZN4HPHP21f_ldap_next_referenceERKNS_6ObjectES2_");

TypedValue * fg1_ldap_next_reference(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_next_reference(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_next_reference((rv), &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_next_reference(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_next_reference((&(rv)), &args[-0].m_data, &args[-1].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_next_reference(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_next_reference", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_parse_reference(HPHP::Object const&, HPHP::Object const&, HPHP::VRefParamValue const&)
_ZN4HPHP22f_ldap_parse_referenceERKNS_6ObjectES2_RKNS_14VRefParamValueE

(return value) => rax
link => rdi
result_entry => rsi
referrals => rdx
*/

bool fh_ldap_parse_reference(Value* link, Value* result_entry, TypedValue* referrals) asm("_ZN4HPHP22f_ldap_parse_referenceERKNS_6ObjectES2_RKNS_14VRefParamValueE");

TypedValue * fg1_ldap_parse_reference(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_parse_reference(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_data.num = (fh_ldap_parse_reference(&args[-0].m_data, &args[-1].m_data, (args-2))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_parse_reference(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_parse_reference(&args[-0].m_data, &args[-1].m_data, (args-2))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_parse_reference(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_parse_reference", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_parse_result(HPHP::Object const&, HPHP::Object const&, HPHP::VRefParamValue const&, HPHP::VRefParamValue const&, HPHP::VRefParamValue const&, HPHP::VRefParamValue const&)
_ZN4HPHP19f_ldap_parse_resultERKNS_6ObjectES2_RKNS_14VRefParamValueES5_S5_S5_

(return value) => rax
link => rdi
result => rsi
errcode => rdx
matcheddn => rcx
errmsg => r8
referrals => r9
*/

bool fh_ldap_parse_result(Value* link, Value* result, TypedValue* errcode, TypedValue* matcheddn, TypedValue* errmsg, TypedValue* referrals) asm("_ZN4HPHP19f_ldap_parse_resultERKNS_6ObjectES2_RKNS_14VRefParamValueES5_S5_S5_");

TypedValue * fg1_ldap_parse_result(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_parse_result(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  switch (count) {
  default: // count >= 6
  case 5:
  case 4:
  case 3:
    break;
  }
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  VRefParamValue defVal3 = uninit_null();
  VRefParamValue defVal4 = uninit_null();
  VRefParamValue defVal5 = uninit_null();
  rv->m_data.num = (fh_ldap_parse_result(&args[-0].m_data, &args[-1].m_data, (args-2), (count > 3) ? (args-3) : (TypedValue*)(&defVal3), (count > 4) ? (args-4) : (TypedValue*)(&defVal4), (count > 5) ? (args-5) : (TypedValue*)(&defVal5))) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_parse_result(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count >= 3LL && count <= 6LL) {
      if ((args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        VRefParamValue defVal3 = uninit_null();
        VRefParamValue defVal4 = uninit_null();
        VRefParamValue defVal5 = uninit_null();
        rv.m_data.num = (fh_ldap_parse_result(&args[-0].m_data, &args[-1].m_data, (args-2), (count > 3) ? (args-3) : (TypedValue*)(&defVal3), (count > 4) ? (args-4) : (TypedValue*)(&defVal4), (count > 5) ? (args-5) : (TypedValue*)(&defVal5))) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 6);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_parse_result(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 6);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_parse_result", count, 3, 6, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 6);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
bool HPHP::f_ldap_free_result(HPHP::Object const&)
_ZN4HPHP18f_ldap_free_resultERKNS_6ObjectE

(return value) => rax
result => rdi
*/

bool fh_ldap_free_result(Value* result) asm("_ZN4HPHP18f_ldap_free_resultERKNS_6ObjectE");

TypedValue * fg1_ldap_free_result(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_free_result(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_type = KindOfBoolean;
  tvCastToObjectInPlace(args-0);
  rv->m_data.num = (fh_ldap_free_result(&args[-0].m_data)) ? 1LL : 0LL;
  return rv;
}

TypedValue* fg_ldap_free_result(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 1LL) {
      if ((args-0)->m_type == KindOfObject) {
        rv.m_type = KindOfBoolean;
        rv.m_data.num = (fh_ldap_free_result(&args[-0].m_data)) ? 1LL : 0LL;
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_free_result(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 1);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_free_result", count, 1, 1, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 1);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_get_values_len(HPHP::Object const&, HPHP::Object const&, HPHP::String const&)
_ZN4HPHP21f_ldap_get_values_lenERKNS_6ObjectES2_RKNS_6StringE

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
attribute => rcx
*/

TypedValue* fh_ldap_get_values_len(TypedValue* _rv, Value* link, Value* result_entry, Value* attribute) asm("_ZN4HPHP21f_ldap_get_values_lenERKNS_6ObjectES2_RKNS_6StringE");

TypedValue * fg1_ldap_get_values_len(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_get_values_len(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (!IS_STRING_TYPE((args-2)->m_type)) {
    tvCastToStringInPlace(args-2);
  }
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_get_values_len((rv), &args[-0].m_data, &args[-1].m_data, &args[-2].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_get_values_len(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if (IS_STRING_TYPE((args-2)->m_type) && (args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_get_values_len((&(rv)), &args[-0].m_data, &args[-1].m_data, &args[-2].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_get_values_len(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_get_values_len", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}



/*
HPHP::Variant HPHP::f_ldap_get_values(HPHP::Object const&, HPHP::Object const&, HPHP::String const&)
_ZN4HPHP17f_ldap_get_valuesERKNS_6ObjectES2_RKNS_6StringE

(return value) => rax
_rv => rdi
link => rsi
result_entry => rdx
attribute => rcx
*/

TypedValue* fh_ldap_get_values(TypedValue* _rv, Value* link, Value* result_entry, Value* attribute) asm("_ZN4HPHP17f_ldap_get_valuesERKNS_6ObjectES2_RKNS_6StringE");

TypedValue * fg1_ldap_get_values(TypedValue* rv, ActRec* ar, int64_t count) __attribute__((noinline,cold));
TypedValue * fg1_ldap_get_values(TypedValue* rv, ActRec* ar, int64_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (!IS_STRING_TYPE((args-2)->m_type)) {
    tvCastToStringInPlace(args-2);
  }
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_ldap_get_values((rv), &args[-0].m_data, &args[-1].m_data, &args[-2].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_ldap_get_values(ActRec *ar) {
    TypedValue rv;
    int64_t count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 3LL) {
      if (IS_STRING_TYPE((args-2)->m_type) && (args-1)->m_type == KindOfObject && (args-0)->m_type == KindOfObject) {
        fh_ldap_get_values((&(rv)), &args[-0].m_data, &args[-1].m_data, &args[-2].m_data);
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_ldap_get_values(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 3);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("ldap_get_values", count, 3, 3, 1);
    }
    rv.m_data.num = 0LL;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 3);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  return &ar->m_r;
}




} // !HPHP

