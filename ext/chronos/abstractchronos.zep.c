
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "ext/date/php_date.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"
#include "kernel/time.h"


/**
 * Carbon like DateTime class for PHP 8.0+
 */
ZEPHIR_INIT_CLASS(Chronos_AbstractChronos)
{
	ZEPHIR_REGISTER_CLASS_EX(Chronos, AbstractChronos, chronos, abstractchronos, php_date_get_date_ce(), chronos_abstractchronos_method_entry, 0);

	zend_class_implements(chronos_abstractchronos_ce, 1, chronos_chronosinterface_ce);
	return SUCCESS;
}

PHP_METHOD(Chronos_AbstractChronos, __construct)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *datetime_param = NULL, *timezone = NULL, timezone_sub, __$null, tempTimezone;
	zval datetime;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&datetime);
	ZVAL_UNDEF(&timezone_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&tempTimezone);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(datetime)
		Z_PARAM_ZVAL_OR_NULL(timezone)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &datetime_param, &timezone);
	if (!datetime_param) {
		ZEPHIR_INIT_VAR(&datetime);
		ZVAL_STRING(&datetime, "now");
	} else {
		zephir_get_strval(&datetime, datetime_param);
	}
	if (!timezone) {
		timezone = &timezone_sub;
		timezone = &__$null;
	}


	if (Z_TYPE_P(timezone) != IS_NULL) {
		if (zephir_is_instance_of(timezone, SL("DateTimeZone"))) {
			ZEPHIR_CPY_WRT(&tempTimezone, timezone);
		} else {
			ZEPHIR_INIT_NVAR(&tempTimezone);
			object_init_ex(&tempTimezone, php_date_get_timezone_ce());
			ZEPHIR_CALL_METHOD(NULL, &tempTimezone, "__construct", NULL, 0, timezone);
			zephir_check_call_status();
		}
	}
	ZEPHIR_CALL_PARENT(NULL, chronos_abstractchronos_ce, getThis(), "__construct", NULL, 0, &datetime, &tempTimezone);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Chronos_AbstractChronos, setTimeZone)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *timezone = NULL, timezone_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&timezone_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(timezone)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &timezone);
	ZEPHIR_SEPARATE_PARAM(timezone);


	if (!((zephir_is_instance_of(timezone, SL("DateTimeZone"))))) {
		ZEPHIR_INIT_NVAR(timezone);
		object_init_ex(timezone, php_date_get_timezone_ce());
		ZEPHIR_CALL_METHOD(NULL, timezone, "__construct", NULL, 0, timezone);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_PARENT(NULL, chronos_abstractchronos_ce, getThis(), "settimezone", NULL, 0, timezone);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_AbstractChronos, parse)
{
}

PHP_METHOD(Chronos_AbstractChronos, now)
{
}

PHP_METHOD(Chronos_AbstractChronos, copy)
{
}

PHP_METHOD(Chronos_AbstractChronos, format)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *format_param = NULL, *locale_param = NULL;
	zval format, locale;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&locale);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR_OR_NULL(locale)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &format_param, &locale_param);
	zephir_get_strval(&format, format_param);
	if (!locale_param) {
		ZEPHIR_INIT_VAR(&locale);
	} else {
		zephir_get_strval(&locale, locale_param);
	}


	if (!ZEPHIR_IS_NULL(&locale)) {
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "locale", NULL, 0, &locale);
		zephir_check_call_status();
	}
	ZEPHIR_RETURN_CALL_PARENT(chronos_abstractchronos_ce, getThis(), "format", NULL, 0, &format);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, locale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *locale, locale_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&locale_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(locale)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &locale);


	ZVAL_LONG(&_0, 5);
	ZEPHIR_CALL_FUNCTION(NULL, "setlocale", NULL, 1, &_0, locale);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_AbstractChronos, toDateTime)
{
	zend_class_entry *_0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();



	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_class_str_ex(SL("DateTime"), ZEND_FETCH_CLASS_AUTO);
	ZEPHIR_RETURN_CALL_CE_STATIC(_0, "createfrominterface", NULL, 0, this_ptr);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDateTimeImmutable)
{
	zend_class_entry *_0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();



	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_class_str_ex(SL("DateTimeImmutable"), ZEND_FETCH_CLASS_AUTO);
	ZEPHIR_RETURN_CALL_CE_STATIC(_0, "createfrommutable", NULL, 0, this_ptr);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDateTimeString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y-m-d H:i:s");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDateString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y-m-d");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDateWeekString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SS(&_0, "Y-m-d", "(D)");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toTimeString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "H:i:s");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDayOfWeekString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "l");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDayOfWeekShortString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "D");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toDayOfYearString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "z");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toWeekOfYearString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "W");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toMonthString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "F");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toMonthShortString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "M");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toYearString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, toIso8601String)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "c");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, today)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "today");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, tomorrow)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "tomorrow");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, yesterday)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "yesterday");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, thisWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "this week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, nextWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "next week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, lastWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, thisMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "this month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, nextMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "next month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, lastMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, thisYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "this year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, nextYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "next year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, lastYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, startOfDay)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_0, 0);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "settime", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_AbstractChronos, startOfMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "first day of this month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, startOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "first day of january this year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, endOfDay)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZVAL_LONG(&_0, 23);
	ZVAL_LONG(&_1, 59);
	ZVAL_LONG(&_2, 59);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "settime", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_AbstractChronos, endOfMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last day of this month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, endOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last day of december this year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, modify)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *modifier_param = NULL;
	zval modifier;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&modifier);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(modifier)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &modifier_param);
	zephir_get_strval(&modifier, modifier_param);


	ZEPHIR_RETURN_CALL_PARENT(chronos_abstractchronos_ce, getThis(), "modify", NULL, 0, &modifier);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, isToday)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_FUNCTION(&_2, "date", NULL, 2, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_AbstractChronos, isTomorrow)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "tomorrow");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isYesterday)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "yesterday");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isThisWeek)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_FUNCTION(&_2, "date", NULL, 2, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_AbstractChronos, isNextWeek)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "next week");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isLastWeek)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "last week");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isThisMonth)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "m");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "m");
	ZEPHIR_CALL_FUNCTION(&_2, "date", NULL, 2, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_AbstractChronos, isNextMonth)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "m");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "next month");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "m");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isLastMonth)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "m");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "last month");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "m");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isThisYear)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_FUNCTION(&_2, "date", NULL, 2, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_AbstractChronos, isNextYear)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "next year");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isLastYear)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "last year");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isFuture)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "U");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	zephir_time(&_1);
	RETURN_MM_BOOL(ZEPHIR_GT(&_0, &_1));
}

PHP_METHOD(Chronos_AbstractChronos, isPast)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "U");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	zephir_time(&_1);
	RETURN_MM_BOOL(ZEPHIR_LT(&_0, &_1));
}

PHP_METHOD(Chronos_AbstractChronos, isLeapYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "L");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "1"));
}

PHP_METHOD(Chronos_AbstractChronos, isWeekday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_LT_LONG(&_0, 6));
}

PHP_METHOD(Chronos_AbstractChronos, isWeekend)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_GT_LONG(&_0, 5));
}

PHP_METHOD(Chronos_AbstractChronos, isMonday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "1"));
}

PHP_METHOD(Chronos_AbstractChronos, isTuesday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "2"));
}

PHP_METHOD(Chronos_AbstractChronos, isWednesday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "3"));
}

PHP_METHOD(Chronos_AbstractChronos, isThursday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "4"));
}

PHP_METHOD(Chronos_AbstractChronos, isFriday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "5"));
}

PHP_METHOD(Chronos_AbstractChronos, isSaturday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "6"));
}

PHP_METHOD(Chronos_AbstractChronos, isSunday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "7"));
}

PHP_METHOD(Chronos_AbstractChronos, isMorning)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_LT_LONG(&_0, 12));
}

PHP_METHOD(Chronos_AbstractChronos, isAfternoon)
{
	zend_bool _3;
	zval _0, _1, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	_3 = ZEPHIR_GT_LONG(&_0, 11);
	if (_3) {
		ZEPHIR_INIT_NVAR(&_1);
		ZVAL_STRING(&_1, "G");
		ZEPHIR_CALL_METHOD(&_4, this_ptr, "format", &_2, 0, &_1);
		zephir_check_call_status();
		_3 = ZEPHIR_LT_LONG(&_4, 18);
	}
	RETURN_MM_BOOL(_3);
}

PHP_METHOD(Chronos_AbstractChronos, isEvening)
{
	zend_bool _3;
	zval _0, _1, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	_3 = ZEPHIR_GT_LONG(&_0, 17);
	if (_3) {
		ZEPHIR_INIT_NVAR(&_1);
		ZVAL_STRING(&_1, "G");
		ZEPHIR_CALL_METHOD(&_4, this_ptr, "format", &_2, 0, &_1);
		zephir_check_call_status();
		_3 = ZEPHIR_LT_LONG(&_4, 22);
	}
	RETURN_MM_BOOL(_3);
}

PHP_METHOD(Chronos_AbstractChronos, isNight)
{
	zend_bool _3;
	zval _0, _1, _4;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	_3 = ZEPHIR_GT_LONG(&_0, 21);
	if (!(_3)) {
		ZEPHIR_INIT_NVAR(&_1);
		ZVAL_STRING(&_1, "G");
		ZEPHIR_CALL_METHOD(&_4, this_ptr, "format", &_2, 0, &_1);
		zephir_check_call_status();
		_3 = ZEPHIR_LT_LONG(&_4, 6);
	}
	RETURN_MM_BOOL(_3);
}

PHP_METHOD(Chronos_AbstractChronos, isMidnight)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "0"));
}

PHP_METHOD(Chronos_AbstractChronos, isNoon)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "12"));
}

PHP_METHOD(Chronos_AbstractChronos, isDaylightSavingTime)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "I");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "1"));
}

PHP_METHOD(Chronos_AbstractChronos, isStandardTime)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "I");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "0"));
}

PHP_METHOD(Chronos_AbstractChronos, isLastDayOfMonth)
{
	zval _0, _1, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "t");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "d");
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isLastWeekOfMonth)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "last day of this month");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, isLastWeekOfYear)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "last day of december this year");
	ZEPHIR_CALL_FUNCTION(&_2, "strtotime", NULL, 3, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "W");
	ZEPHIR_CALL_FUNCTION(&_3, "date", NULL, 2, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_3));
}

PHP_METHOD(Chronos_AbstractChronos, getYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "m");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getDay)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "d");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getHour)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "H");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMinute)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "i");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getSecond)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "s");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecond)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "u");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getDayOfWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getDayOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "z");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getWeekOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "W");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMonthOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getAge)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_1);
	object_init_ex(&_1, php_date_get_date_ce());
	ZEPHIR_CALL_METHOD(NULL, &_1, "__construct", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "diff", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "%y");
	ZEPHIR_RETURN_CALL_METHOD(&_0, "format", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getDaysInMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "t");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getDaysInYear)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "L");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "format", NULL, 0, &_2);
	zephir_check_call_status();
	if (ZEPHIR_IS_STRING_IDENTICAL(&_1, "1")) {
		ZVAL_LONG(&_0, 366);
	} else {
		ZVAL_LONG(&_0, 365);
	}
	RETURN_CCTOR(&_0);
}

PHP_METHOD(Chronos_AbstractChronos, getDaysInWeek)
{
	zval *this_ptr = getThis();



	RETURN_LONG(7);
}

PHP_METHOD(Chronos_AbstractChronos, getMonthsInYear)
{
	zval *this_ptr = getThis();



	RETURN_LONG(12);
}

PHP_METHOD(Chronos_AbstractChronos, getSecondsInMinute)
{
	zval *this_ptr = getThis();



	RETURN_LONG(60);
}

PHP_METHOD(Chronos_AbstractChronos, getMinutesInHour)
{
	zval *this_ptr = getThis();



	RETURN_LONG(60);
}

PHP_METHOD(Chronos_AbstractChronos, getHoursInDay)
{
	zval *this_ptr = getThis();



	RETURN_LONG(24);
}

PHP_METHOD(Chronos_AbstractChronos, getHoursInWeek)
{
	zval *this_ptr = getThis();



	RETURN_LONG(168);
}

PHP_METHOD(Chronos_AbstractChronos, getHoursInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getdaysinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "gethoursinday", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getHoursInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getdaysinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "gethoursinday", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMinutesInWeek)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMinutesInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMinutesInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getSecondsInWeek)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getSecondsInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getSecondsInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInSecond)
{
	zval *this_ptr = getThis();



	RETURN_LONG(1000000);
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInMinute)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinsecond", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInHour)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInDay)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinday", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInWeek)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setDateTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *dateTime, dateTime_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(dateTime, php_date_get_date_ce())
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &dateTime);


	ZEPHIR_CALL_METHOD(&_0, dateTime, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settimestamp", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *year_param = NULL, _0, _1, _2;
	zend_long year, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(year)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &year_param);
	year = zephir_get_intval(year_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getday", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, year);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_2, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setMonth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *month_param = NULL, _0, _1, _2;
	zend_long month, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(month)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &month_param);
	month = zephir_get_intval(month_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getday", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, month);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setDay)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *day_param = NULL, _0, _1, _2;
	zend_long day, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(day)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &day_param);
	day = zephir_get_intval(day_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmonth", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, day);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setHour)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hour_param = NULL, _0, _1, _2;
	zend_long hour, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hour)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &hour_param);
	hour = zephir_get_intval(hour_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminute", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecond", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, hour);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_2, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setMinute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *minute_param = NULL, _0, _1, _2;
	zend_long minute, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(minute)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &minute_param);
	minute = zephir_get_intval(minute_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecond", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, minute);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setSecond)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *second_param = NULL, _0, _1, _2;
	zend_long second, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(second)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &second_param);
	second = zephir_get_intval(second_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminute", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, second);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setMicrosecond)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *microsecond_param = NULL, _0, _1, _2, _3;
	zend_long microsecond, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(microsecond)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &microsecond_param);
	microsecond = zephir_get_intval(microsecond_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminute", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getsecond", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_3, microsecond);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_0, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setDayOfWeek)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *dayOfWeek_param = NULL, _0, _1, _2;
	zend_long dayOfWeek, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dayOfWeek)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &dayOfWeek_param);
	dayOfWeek = zephir_get_intval(dayOfWeek_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getweekofyear", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, dayOfWeek);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setisodate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setDayOfYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *dayOfYear_param = NULL, _0, _1, _2;
	zend_long dayOfYear, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dayOfYear)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &dayOfYear_param);
	dayOfYear = zephir_get_intval(dayOfYear_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 1);
	ZVAL_LONG(&_2, dayOfYear);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setWeekOfYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weekOfYear_param = NULL, _0, _1, _2;
	zend_long weekOfYear, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weekOfYear)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &weekOfYear_param);
	weekOfYear = zephir_get_intval(weekOfYear_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getdayofweek", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, weekOfYear);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setisodate", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setWeekOfMonth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weekOfMonth_param = NULL, _0, _1, _2;
	zend_long weekOfMonth, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weekOfMonth)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &weekOfMonth_param);
	weekOfMonth = zephir_get_intval(weekOfMonth_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getweekofyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getdayofweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setisodate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, setMonthOfYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *monthOfYear_param = NULL, _0, _1, _2;
	zend_long monthOfYear, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(monthOfYear)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &monthOfYear_param);
	monthOfYear = zephir_get_intval(monthOfYear_param);


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getday", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, monthOfYear);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addYears)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *years_param = NULL, _0, _1;
	zend_long years, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(years)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &years_param);
	years = zephir_get_intval(years_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, years);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "Y");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addMonths)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *months_param = NULL, _0, _1;
	zend_long months, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(months)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &months_param);
	months = zephir_get_intval(months_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, months);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "M");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addDays)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *days_param = NULL, _0, _1;
	zend_long days, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(days)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &days_param);
	days = zephir_get_intval(days_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, days);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "D");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addHours)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hours_param = NULL, _0, _1;
	zend_long hours, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hours)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &hours_param);
	hours = zephir_get_intval(hours_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, hours);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "H");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addMinutes)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *minutes_param = NULL, _0, _1;
	zend_long minutes, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(minutes)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &minutes_param);
	minutes = zephir_get_intval(minutes_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, minutes);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "M");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addSeconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *seconds_param = NULL, _0, _1;
	zend_long seconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(seconds)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &seconds_param);
	seconds = zephir_get_intval(seconds_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, seconds);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "S");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addMicroseconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *microseconds_param = NULL, _0, _1;
	zend_long microseconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(microseconds)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &microseconds_param);
	microseconds = zephir_get_intval(microseconds_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, microseconds);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "S");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, addWeeks)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weeks_param = NULL, _0, _1;
	zend_long weeks, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weeks)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &weeks_param);
	weeks = zephir_get_intval(weeks_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, weeks);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "W");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "add", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subYears)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *years_param = NULL, _0, _1;
	zend_long years, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(years)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &years_param);
	years = zephir_get_intval(years_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, years);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "Y");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subMonths)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *months_param = NULL, _0, _1;
	zend_long months, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(months)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &months_param);
	months = zephir_get_intval(months_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, months);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "M");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subDays)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *days_param = NULL, _0, _1;
	zend_long days, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(days)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &days_param);
	days = zephir_get_intval(days_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, days);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "D");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subHours)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hours_param = NULL, _0, _1;
	zend_long hours, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hours)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &hours_param);
	hours = zephir_get_intval(hours_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, hours);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "H");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subMinutes)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *minutes_param = NULL, _0, _1;
	zend_long minutes, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(minutes)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &minutes_param);
	minutes = zephir_get_intval(minutes_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, minutes);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "M");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subSeconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *seconds_param = NULL, _0, _1;
	zend_long seconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(seconds)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &seconds_param);
	seconds = zephir_get_intval(seconds_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, seconds);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "S");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subMicroseconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *microseconds_param = NULL, _0, _1;
	zend_long microseconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(microseconds)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &microseconds_param);
	microseconds = zephir_get_intval(microseconds_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, microseconds);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "PT", &_1, "S");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, subWeeks)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weeks_param = NULL, _0, _1;
	zend_long weeks, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weeks)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &weeks_param);
	weeks = zephir_get_intval(weeks_param);


	ZEPHIR_INIT_VAR(&_0);
	object_init_ex(&_0, php_date_get_interval_ce());
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, weeks);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SVS(&_2, "P", &_1, "W");
	ZEPHIR_CALL_METHOD(NULL, &_0, "__construct", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "sub", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, diff)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool absolute;
	zval *targetObject, targetObject_sub, *absolute_param = NULL, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(absolute)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &targetObject, &absolute_param);
	if (!absolute_param) {
		absolute = 0;
	} else {
		absolute = zephir_get_boolval(absolute_param);
	}


	if (absolute) {
		ZVAL_BOOL(&_0, 1);
	} else {
		ZVAL_BOOL(&_0, 0);
	}
	ZEPHIR_RETURN_CALL_PARENT(chronos_abstractchronos_ce, getThis(), "diff", NULL, 0, targetObject, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_AbstractChronos, diffInSeconds)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInSeconds, timestamp2, timestamp1, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInSeconds);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&diffInSeconds);
	zephir_sub_function(&diffInSeconds, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&_0);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_0, "abs", NULL, 4, &diffInSeconds);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_0, &diffInSeconds);
	}
	RETURN_MM_LONG(zephir_get_intval(&_0));
}

PHP_METHOD(Chronos_AbstractChronos, diffInMinutes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInMinutes, timestamp2, timestamp1, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInMinutes);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	zephir_sub_function(&_0, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&diffInMinutes);
	ZVAL_DOUBLE(&diffInMinutes, zephir_safe_div_zval_long(&_0, 60));
	ZEPHIR_INIT_VAR(&_1);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 4, &diffInMinutes);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_1, &diffInMinutes);
	}
	RETURN_MM_LONG(zephir_get_intval(&_1));
}

PHP_METHOD(Chronos_AbstractChronos, diffInHours)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInHours, timestamp2, timestamp1, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInHours);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	zephir_sub_function(&_0, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&diffInHours);
	ZVAL_DOUBLE(&diffInHours, zephir_safe_div_zval_long(&_0, 3600));
	ZEPHIR_INIT_VAR(&_1);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 4, &diffInHours);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_1, &diffInHours);
	}
	RETURN_MM_LONG(zephir_get_intval(&_1));
}

PHP_METHOD(Chronos_AbstractChronos, diffInMonths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInMonths, timestamp2, timestamp1, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInMonths);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	zephir_sub_function(&_0, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&diffInMonths);
	ZVAL_DOUBLE(&diffInMonths, zephir_safe_div_zval_long(&_0, 2678400));
	ZEPHIR_INIT_VAR(&_1);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 4, &diffInMonths);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_1, &diffInMonths);
	}
	RETURN_MM_LONG(zephir_get_intval(&_1));
}

PHP_METHOD(Chronos_AbstractChronos, diffInYears)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInYears, timestamp2, timestamp1, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInYears);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	zephir_sub_function(&_0, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&diffInYears);
	ZVAL_DOUBLE(&diffInYears, zephir_safe_div_zval_long(&_0, 31536000));
	ZEPHIR_INIT_VAR(&_1);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 4, &diffInYears);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_1, &diffInYears);
	}
	RETURN_MM_LONG(zephir_get_intval(&_1));
}

PHP_METHOD(Chronos_AbstractChronos, diffInWeeks)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInWeeks, timestamp2, timestamp1, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInWeeks);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	zephir_sub_function(&_0, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&diffInWeeks);
	ZVAL_DOUBLE(&diffInWeeks, zephir_safe_div_zval_long(&_0, 604800));
	ZEPHIR_INIT_VAR(&_1);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 4, &diffInWeeks);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_1, &diffInWeeks);
	}
	RETURN_MM_LONG(zephir_get_intval(&_1));
}

PHP_METHOD(Chronos_AbstractChronos, diffInDays)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *other, other_sub, *abs = NULL, abs_sub, __$true, diffInDays, timestamp2, timestamp1, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&diffInDays);
	ZVAL_UNDEF(&timestamp2);
	ZVAL_UNDEF(&timestamp1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs);
	if (!abs) {
		abs = &abs_sub;
		abs = &__$true;
	}


	ZEPHIR_CALL_METHOD(&timestamp1, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&timestamp2, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	zephir_sub_function(&_0, &timestamp1, &timestamp2);
	ZEPHIR_INIT_VAR(&diffInDays);
	ZVAL_DOUBLE(&diffInDays, zephir_safe_div_zval_long(&_0, 86400));
	ZEPHIR_INIT_VAR(&_1);
	if (zephir_is_true(abs)) {
		ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, 4, &diffInDays);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_1, &diffInDays);
	}
	RETURN_MM_LONG(zephir_get_intval(&_1));
}

PHP_METHOD(Chronos_AbstractChronos, diffInMicroseconds)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool abs;
	zval *other, other_sub, *abs_param = NULL, microsecondDiff, timestampMicro2, timestampMicro1, _0, _1, _2, _3, _4, _5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&microsecondDiff);
	ZVAL_UNDEF(&timestampMicro2);
	ZVAL_UNDEF(&timestampMicro1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(abs)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &other, &abs_param);
	if (!abs_param) {
		abs = 1;
	} else {
		abs = zephir_get_boolval(abs_param);
	}


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "u");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "format", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&timestampMicro1);
	ZVAL_LONG(&timestampMicro1, ((zephir_get_numberval(&_0) * 1000000) + zephir_get_numberval(&_1)));
	ZEPHIR_CALL_METHOD(&_3, other, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "u");
	ZEPHIR_CALL_METHOD(&_4, other, "format", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&timestampMicro2);
	ZVAL_LONG(&timestampMicro2, ((zephir_get_numberval(&_3) * 1000000) + zephir_get_numberval(&_4)));
	ZEPHIR_INIT_VAR(&microsecondDiff);
	zephir_sub_function(&microsecondDiff, &timestampMicro1, &timestampMicro2);
	ZEPHIR_INIT_VAR(&_5);
	if (abs) {
		ZEPHIR_CALL_FUNCTION(&_5, "abs", NULL, 4, &microsecondDiff);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(&_5, &microsecondDiff);
	}
	RETURN_MM_LONG(zephir_get_intval(&_5));
}

PHP_METHOD(Chronos_AbstractChronos, between)
{
	zend_bool equal, _0$$3, _1;
	zval *start, start_sub, *end, end_sub, *equal_param = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&start_sub);
	ZVAL_UNDEF(&end_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(start)
		Z_PARAM_ZVAL(end)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(equal)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(2, 1, &start, &end, &equal_param);
	if (!equal_param) {
		equal = 1;
	} else {
		equal = zephir_get_boolval(equal_param);
	}


	if (equal) {
		_0$$3 = ZEPHIR_GE(this_ptr, start);
		if (_0$$3) {
			_0$$3 = ZEPHIR_LE(this_ptr, end);
		}
		RETURN_BOOL(_0$$3);
	}
	_1 = ZEPHIR_GT(this_ptr, start);
	if (_1) {
		_1 = ZEPHIR_LT(this_ptr, end);
	}
	RETURN_BOOL(_1);
}

PHP_METHOD(Chronos_AbstractChronos, eq)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);


	RETURN_BOOL(ZEPHIR_IS_EQUAL(this_ptr, dateTime));
}

PHP_METHOD(Chronos_AbstractChronos, ne)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);


	RETURN_BOOL(!ZEPHIR_IS_EQUAL(this_ptr, dateTime));
}

PHP_METHOD(Chronos_AbstractChronos, gt)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);


	RETURN_BOOL(ZEPHIR_GT(this_ptr, dateTime));
}

PHP_METHOD(Chronos_AbstractChronos, gte)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);


	RETURN_BOOL(ZEPHIR_GE(this_ptr, dateTime));
}

PHP_METHOD(Chronos_AbstractChronos, lt)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);


	RETURN_BOOL(ZEPHIR_LT(this_ptr, dateTime));
}

PHP_METHOD(Chronos_AbstractChronos, lte)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
#endif


	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);


	RETURN_BOOL(ZEPHIR_LE(this_ptr, dateTime));
}

PHP_METHOD(Chronos_AbstractChronos, __toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();



	ZEPHIR_MM_GROW();

	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "todatetimestring", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();
}

