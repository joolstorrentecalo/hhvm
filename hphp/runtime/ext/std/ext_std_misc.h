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
#include "hphp/runtime/ext/std/ext_std.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

constexpr int64_t k_PHP_INT_MIN = std::numeric_limits<int64_t>::lowest();
constexpr int64_t k_PHP_INT_MAX = std::numeric_limits<int64_t>::max();

StaticString get_PHP_VERSION();

int64_t HHVM_FUNCTION(connection_status);
Variant HHVM_FUNCTION(constant, const String& name);
bool HHVM_FUNCTION(defined, const String& name, bool autoload = true);

extern const double k_INF;
extern const double k_NAN;

///////////////////////////////////////////////////////////////////////////////
}
