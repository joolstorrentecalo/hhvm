/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
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

#pragma once

#include "hphp/runtime/ext/extension.h"
#include "hphp/runtime/base/timestamp.h"
#include "hphp/runtime/base/datetime.h"
#include "hphp/runtime/base/timezone.h"
#include "hphp/runtime/base/dateinterval.h"
#include "hphp/runtime/ext/std/ext_std_misc.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
// class DateTime

struct DateTimeData {
  DateTimeData() {}
  DateTimeData(const DateTimeData&) = delete;
  DateTimeData& operator=(const DateTimeData& other) {
    m_dt = other.m_dt ? other.m_dt->cloneDateTime() : req::ptr<DateTime>{};
    return *this;
  }
  Variant sleep() const {
    return init_null();
  }
  void wakeup(const Variant& /*content*/, ObjectData* /*obj*/) {}
  int64_t getTimestamp() const {
    assertx(m_dt);
    bool err = false;
    return m_dt->toTimeStamp(err);
  }
  String format(const String& format) const {
    assertx(m_dt);
    return m_dt->toString(format, false);
  }
  Array getDebugInfo() const;

  static int64_t getTimestamp(const Object& obj);
  static int64_t getTimestamp(const ObjectData* od);
  static int compare(const Object& left, const Object& right);
  static int compare(const ObjectData* left, const ObjectData* right);
  static Object wrap(req::ptr<DateTime> dt);
  static req::ptr<DateTime> unwrap(const Object& datetime);
  static Class* getClass();

  req::ptr<DateTime> m_dt;
  static Class* s_class;
  static const StaticString s_className;
};

void HHVM_METHOD(DateTime, __construct,
                 const String& time = "now",
                 const Variant& timezone = uninit_variant);
Variant HHVM_STATIC_METHOD(DateTime, createFromFormat,
                           const String& format,
                           const String& time,
                           const Variant& timezone /*= uninit_variant */);
Variant HHVM_METHOD(DateTime, diff,
                    const Variant& datetime2,
                    const Variant& absolute);
String HHVM_METHOD(DateTime, format,
                   const Variant& format);
Array HHVM_STATIC_METHOD(DateTime, getLastErrors);
int64_t HHVM_METHOD(DateTime, getOffset);
int64_t HHVM_METHOD(DateTime, gettimestamp);
Variant HHVM_METHOD(DateTime, getTimezone);
Variant HHVM_METHOD(DateTime, modify,
                   const String& modify);
Object HHVM_METHOD(DateTime, setDate,
                   int64_t year,
                   int64_t month,
                   int64_t day);
Object HHVM_METHOD(DateTime, setISODate,
                   int64_t year,
                   int64_t week,
                   int64_t day /*= 1*/);
Object HHVM_METHOD(DateTime, setTime,
                   int64_t hour,
                   int64_t minute,
                   int64_t second /*= 0*/);
Object HHVM_METHOD(DateTime, setTimestamp,
                   int64_t unixtimestamp);
Variant HHVM_METHOD(DateTime, setTimezone,
                    const Object& timezone);
Variant HHVM_METHOD(DateTime, add,
                    const Object& interval);
Variant HHVM_METHOD(DateTime, sub,
                    const Object& interval);
Array HHVM_METHOD(DateTime, __sleep);
void HHVM_METHOD(DateTime, __wakeup);
Array HHVM_METHOD(DateTime, __debugInfo);

///////////////////////////////////////////////////////////////////////////////
// class DateTimeZone

struct DateTimeZoneData {
  DateTimeZoneData() {}
  DateTimeZoneData(const DateTimeZoneData&) = delete;
  DateTimeZoneData& operator=(const DateTimeZoneData& other) {
    m_tz = other.m_tz ? other.m_tz->cloneTimeZone() : req::ptr<TimeZone>{};
    return *this;
  }

  String getName() const {
    assertx(m_tz);
    return m_tz->name();
  }

  Array getDebugInfo() const;

  static Object wrap(req::ptr<TimeZone> tz);
  static req::ptr<TimeZone> unwrap(const Object& timezone);
  static Class* getClass();

  req::ptr<TimeZone> m_tz;
  static Class* s_class;
  static const StaticString s_className;

  static const int64_t AFRICA = 1;
  static const int64_t AMERICA = 2;
  static const int64_t ANTARCTICA = 4;
  static const int64_t ARCTIC = 8;
  static const int64_t ASIA = 16;
  static const int64_t ATLANTIC = 32;
  static const int64_t AUSTRALIA = 64;
  static const int64_t EUROPE = 128;
  static const int64_t INDIAN = 256;
  static const int64_t PACIFIC = 512;
  static const int64_t UTC = 1024;
  static const int64_t ALL = 2047;
  static const int64_t ALL_WITH_BC = 4095;
  static const int64_t PER_COUNTRY = 4096;
};

void HHVM_METHOD(DateTimeZone, __construct,
                 const String& timezone);
Array HHVM_METHOD(DateTimeZone, getLocation);
String HHVM_METHOD(DateTimeZone, getName);
Array HHVM_METHOD(DateTimeZone, __debugInfo);
Variant HHVM_METHOD(DateTimeZone, getOffset,
                    const Object& datetime);
TypedValue HHVM_METHOD(DateTimeZone, getTransitions,
                       int64_t timestamp_begin = k_PHP_INT_MIN,
                       int64_t timestamp_end = k_PHP_INT_MAX);
Array HHVM_STATIC_METHOD(DateTimeZone, listAbbreviations);
Variant HHVM_STATIC_METHOD(DateTimeZone, listIdentifiers,
                           int64_t what,
                           const String& country);

///////////////////////////////////////////////////////////////////////////////
// class DateInterval

struct DateIntervalData {
  DateIntervalData() {}
  DateIntervalData(const DateIntervalData&) = delete;
  DateIntervalData& operator=(const DateIntervalData& other) {
    m_di =
      other.m_di ? other.m_di->cloneDateInterval() : req::ptr<DateInterval>{};
    return *this;
  }

  static Object wrap(req::ptr<DateInterval> di);
  static req::ptr<DateInterval> unwrap(const Object& di);
  static Class* getClass();

  req::ptr<DateInterval> m_di;
  static Class* s_class;
  static const StaticString s_className;
};

void HHVM_METHOD(DateInterval, __construct,
                 const String& interval_spec);
Object HHVM_STATIC_METHOD(DateInterval, createFromDateString,
                          const String& time);
String HHVM_METHOD(DateInterval, format,
                   const String& format);

///////////////////////////////////////////////////////////////////////////////
// timestamp

int64_t HHVM_FUNCTION(time);

///////////////////////////////////////////////////////////////////////////////
// timezone

String HHVM_FUNCTION(date_default_timezone_get);

///////////////////////////////////////////////////////////////////////////////
}
