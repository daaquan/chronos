
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
#include "kernel/math.h"
#include "kernel/exception.h"
#include "kernel/array.h"


/**
 * Carbon like DateTime class for PHP 8.0+
 */
ZEPHIR_INIT_CLASS(Chronos_Chronos)
{
	ZEPHIR_REGISTER_CLASS_EX(Chronos, Chronos, chronos, chronos, php_date_get_date_ce(), chronos_chronos_method_entry, 0);

	zend_declare_property_null(chronos_chronos_ce, SL("plural"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC);
	zend_class_implements(chronos_chronos_ce, 1, chronos_chronosinterface_ce);
	return SUCCESS;
}

PHP_METHOD(Chronos_Chronos, __construct)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *datetime_param = NULL, *timezone = NULL, timezone_sub, __$null, tempTimezone;
	zval datetime;

	ZVAL_UNDEF(&datetime);
	ZVAL_UNDEF(&timezone_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&tempTimezone);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(datetime)
		Z_PARAM_ZVAL_OR_NULL(timezone)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
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
	ZEPHIR_CALL_PARENT(NULL, chronos_chronos_ce, getThis(), "__construct", NULL, 0, &datetime, &tempTimezone);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Chronos_Chronos, setTimeZone)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *timezone = NULL, timezone_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&timezone_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(timezone)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &timezone);
	ZEPHIR_SEPARATE_PARAM(timezone);
	if (!((zephir_is_instance_of(timezone, SL("DateTimeZone"))))) {
		ZEPHIR_INIT_NVAR(timezone);
		object_init_ex(timezone, php_date_get_timezone_ce());
		ZEPHIR_CALL_METHOD(NULL, timezone, "__construct", NULL, 0, timezone);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_PARENT(NULL, chronos_chronos_ce, getThis(), "settimezone", NULL, 0, timezone);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_Chronos, format)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *format_param = NULL, *locale_param = NULL;
	zval format, locale;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&locale);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR_OR_NULL(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
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
	ZEPHIR_RETURN_CALL_PARENT(chronos_chronos_ce, getThis(), "format", NULL, 0, &format);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, locale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *locale, locale_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&locale_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &locale);
	ZVAL_LONG(&_0, 2);
	ZEPHIR_CALL_FUNCTION(NULL, "setlocale", NULL, 1, &_0, locale);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_Chronos, toDateTime)
{
	zend_class_entry *_0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	_0 = zephir_fetch_class_str_ex(SL("DateTime"), ZEND_FETCH_CLASS_AUTO);
	ZEPHIR_RETURN_CALL_CE_STATIC(_0, "createfrominterface", NULL, 0, this_ptr);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDateTimeImmutable)
{
	zend_class_entry *_0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	_0 = zephir_fetch_class_str_ex(SL("DateTimeImmutable"), ZEND_FETCH_CLASS_AUTO);
	ZEPHIR_RETURN_CALL_CE_STATIC(_0, "createfrommutable", NULL, 0, this_ptr);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDateTimeString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y-m-d H:i:s");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDateString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y-m-d");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDateWeekString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SS(&_0, "Y-m-d", "(D)");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toTimeString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "H:i:s");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDayOfWeekString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "l");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDayOfWeekShortString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "D");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toDayOfYearString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "z");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toWeekOfYearString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "W");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toMonthString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "F");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toMonthShortString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "M");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toYearString)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, toIso8601String)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "c");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, today)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "today");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, tomorrow)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "tomorrow");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, yesterday)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "yesterday");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, thisWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "this week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, nextWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "next week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, lastWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, thisMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "this month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, nextMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "next month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, lastMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, thisYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "this year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, nextYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "next year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, lastYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, startOfDay)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZVAL_LONG(&_0, 0);
	ZVAL_LONG(&_1, 0);
	ZVAL_LONG(&_2, 0);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "settime", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_Chronos, startOfWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "monday this week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, startOfMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "first day of this month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, startOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "first day of january this year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, endOfDay)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZVAL_LONG(&_0, 23);
	ZVAL_LONG(&_1, 59);
	ZVAL_LONG(&_2, 59);
	ZVAL_LONG(&_3, 999999);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "settime", NULL, 0, &_0, &_1, &_2, &_3);
	zephir_check_call_status();
	RETURN_THIS();
}

PHP_METHOD(Chronos_Chronos, endOfWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "sunday this week");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, endOfMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last day of this month");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, endOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "last day of december this year");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "modify", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, modify)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *modifier_param = NULL;
	zval modifier;

	ZVAL_UNDEF(&modifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(modifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &modifier_param);
	zephir_get_strval(&modifier, modifier_param);
	ZEPHIR_RETURN_CALL_PARENT(chronos_chronos_ce, getThis(), "modify", NULL, 0, &modifier);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, isToday)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isTomorrow)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isYesterday)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isThisWeek)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isNextWeek)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isLastWeek)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isThisMonth)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isNextMonth)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isLastMonth)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isThisYear)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isNextYear)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isLastYear)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isFuture)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "U");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	zephir_time(&_1);
	RETURN_MM_BOOL(ZEPHIR_GT(&_0, &_1));
}

PHP_METHOD(Chronos_Chronos, isPast)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "U");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	zephir_time(&_1);
	RETURN_MM_BOOL(ZEPHIR_LT(&_0, &_1));
}

PHP_METHOD(Chronos_Chronos, isLeapYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "L");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "1"));
}

PHP_METHOD(Chronos_Chronos, isWeekday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_LT_LONG(&_0, 6));
}

PHP_METHOD(Chronos_Chronos, isWeekend)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_GT_LONG(&_0, 5));
}

PHP_METHOD(Chronos_Chronos, isMonday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "1"));
}

PHP_METHOD(Chronos_Chronos, isTuesday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "2"));
}

PHP_METHOD(Chronos_Chronos, isWednesday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "3"));
}

PHP_METHOD(Chronos_Chronos, isThursday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "4"));
}

PHP_METHOD(Chronos_Chronos, isFriday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "5"));
}

PHP_METHOD(Chronos_Chronos, isSaturday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "6"));
}

PHP_METHOD(Chronos_Chronos, isSunday)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "N");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "7"));
}

PHP_METHOD(Chronos_Chronos, isMorning)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_LT_LONG(&_0, 12));
}

PHP_METHOD(Chronos_Chronos, isAfternoon)
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
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isEvening)
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
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isNight)
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
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isMidnight)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "0"));
}

PHP_METHOD(Chronos_Chronos, isNoon)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "G");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "12"));
}

PHP_METHOD(Chronos_Chronos, isDaylightSavingTime)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "I");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "1"));
}

PHP_METHOD(Chronos_Chronos, isStandardTime)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "I");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING_IDENTICAL(&_0, "0"));
}

PHP_METHOD(Chronos_Chronos, isLastDayOfMonth)
{
	zval _0, _1, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isLastWeekOfMonth)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, isLastWeekOfYear)
{
	zval _0, _1, _2, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, getYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "Y");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "m");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getDay)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "d");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getHour)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "H");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMinute)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "i");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getSecond)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "s");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecond)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "u");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getDayOfWeek)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "N");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getDayOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "z");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getWeekOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "W");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMonthOfYear)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "n");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getAge)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

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

PHP_METHOD(Chronos_Chronos, getDaysInMonth)
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "t");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getDaysInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "L");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "format", NULL, 0, &_0);
	zephir_check_call_status();
	if (ZEPHIR_IS_STRING_IDENTICAL(&_1, "1")) {
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_LONG(&_0, 366);
	} else {
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_LONG(&_0, 365);
	}
	RETURN_CCTOR(&_0);
}

PHP_METHOD(Chronos_Chronos, getDaysInWeek)
{

	RETURN_LONG(7);
}

PHP_METHOD(Chronos_Chronos, getMonthsInYear)
{

	RETURN_LONG(12);
}

PHP_METHOD(Chronos_Chronos, getSecondsInMinute)
{

	RETURN_LONG(60);
}

PHP_METHOD(Chronos_Chronos, getMinutesInHour)
{

	RETURN_LONG(60);
}

PHP_METHOD(Chronos_Chronos, getHoursInDay)
{

	RETURN_LONG(24);
}

PHP_METHOD(Chronos_Chronos, getHoursInWeek)
{

	RETURN_LONG(168);
}

PHP_METHOD(Chronos_Chronos, getHoursInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getdaysinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "gethoursinday", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getHoursInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getdaysinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "gethoursinday", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMinutesInWeek)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMinutesInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMinutesInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getSecondsInWeek)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getSecondsInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getSecondsInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInSecond)
{

	RETURN_LONG(1000000);
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInMinute)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getsecondsinminute", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinsecond", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInHour)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminutesinhour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinminute", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInDay)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinday", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInWeek)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinweek", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInMonth)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, getMicrosecondsInYear)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethoursinyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmicrosecondsinhour", NULL, 0);
	zephir_check_call_status();
	mul_function(return_value, &_0, &_1);
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setDateTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *dateTime, dateTime_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(dateTime, php_date_get_date_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &dateTime);
	ZEPHIR_CALL_METHOD(&_0, dateTime, "gettimestamp", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settimestamp", NULL, 0, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *year_param = NULL, _0, _1, _2;
	zend_long year, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(year)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &year_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmonth", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getday", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, year);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_2, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setMonth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *month_param = NULL, _0, _1, _2;
	zend_long month, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(month)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &month_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getday", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, month);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setDay)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *day_param = NULL, _0, _1, _2;
	zend_long day, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(day)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &day_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getmonth", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, day);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setHour)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hour_param = NULL, _0, _1, _2;
	zend_long hour, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hour)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &hour_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getminute", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecond", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, hour);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_2, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setMinute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *minute_param = NULL, _0, _1, _2;
	zend_long minute, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(minute)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &minute_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getsecond", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, minute);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setSecond)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *second_param = NULL, _0, _1, _2;
	zend_long second, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(second)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &second_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "gethour", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getminute", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, second);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "settime", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setDayOfWeek)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *dayOfWeek_param = NULL, _0, _1, _2;
	zend_long dayOfWeek, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dayOfWeek)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &dayOfWeek_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getweekofyear", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, dayOfWeek);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setisodate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setDayOfYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *dayOfYear_param = NULL, _0, _1, _2;
	zend_long dayOfYear, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dayOfYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &dayOfYear_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_1, 1);
	ZVAL_LONG(&_2, dayOfYear);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_1, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setWeekOfYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weekOfYear_param = NULL, _0, _1, _2;
	zend_long weekOfYear, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weekOfYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &weekOfYear_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getdayofweek", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, weekOfYear);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setisodate", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, setWeekOfMonth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weekOfMonth_param = NULL, _0, _1, _2;
	zend_long weekOfMonth, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weekOfMonth)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &weekOfMonth_param);
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

PHP_METHOD(Chronos_Chronos, setMonthOfYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *monthOfYear_param = NULL, _0, _1, _2;
	zend_long monthOfYear, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(monthOfYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &monthOfYear_param);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getyear", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getday", NULL, 0);
	zephir_check_call_status();
	ZVAL_LONG(&_2, monthOfYear);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setdate", NULL, 0, &_0, &_2, &_1);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, addYears)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *years_param = NULL, _0, _1;
	zend_long years, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(years)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &years_param);
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

PHP_METHOD(Chronos_Chronos, addMonths)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *months_param = NULL, _0, _1;
	zend_long months, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(months)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &months_param);
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

PHP_METHOD(Chronos_Chronos, addDays)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *days_param = NULL, _0, _1;
	zend_long days, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(days)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &days_param);
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

PHP_METHOD(Chronos_Chronos, addHours)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hours_param = NULL, _0, _1;
	zend_long hours, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hours)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &hours_param);
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

PHP_METHOD(Chronos_Chronos, addMinutes)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *minutes_param = NULL, _0, _1;
	zend_long minutes, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(minutes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &minutes_param);
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

PHP_METHOD(Chronos_Chronos, addSeconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *seconds_param = NULL, _0, _1;
	zend_long seconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(seconds)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &seconds_param);
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

PHP_METHOD(Chronos_Chronos, addMicroseconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *microseconds_param = NULL, _0, _1;
	zend_long microseconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(microseconds)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &microseconds_param);
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

PHP_METHOD(Chronos_Chronos, addWeeks)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weeks_param = NULL, _0, _1;
	zend_long weeks, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weeks)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &weeks_param);
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

PHP_METHOD(Chronos_Chronos, subYears)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *years_param = NULL, _0, _1;
	zend_long years, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(years)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &years_param);
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

PHP_METHOD(Chronos_Chronos, subMonths)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *months_param = NULL, _0, _1;
	zend_long months, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(months)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &months_param);
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

PHP_METHOD(Chronos_Chronos, subDays)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *days_param = NULL, _0, _1;
	zend_long days, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(days)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &days_param);
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

PHP_METHOD(Chronos_Chronos, subHours)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hours_param = NULL, _0, _1;
	zend_long hours, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hours)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &hours_param);
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

PHP_METHOD(Chronos_Chronos, subMinutes)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *minutes_param = NULL, _0, _1;
	zend_long minutes, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(minutes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &minutes_param);
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

PHP_METHOD(Chronos_Chronos, subSeconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *seconds_param = NULL, _0, _1;
	zend_long seconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(seconds)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &seconds_param);
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

PHP_METHOD(Chronos_Chronos, subMicroseconds)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *microseconds_param = NULL, _0, _1;
	zend_long microseconds, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(microseconds)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &microseconds_param);
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

PHP_METHOD(Chronos_Chronos, subWeeks)
{
	zval _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *weeks_param = NULL, _0, _1;
	zend_long weeks, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(weeks)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &weeks_param);
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

PHP_METHOD(Chronos_Chronos, diff)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool absolute;
	zval *targetObject, targetObject_sub, *absolute_param = NULL, _0;

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(absolute)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &targetObject, &absolute_param);
	if (!absolute_param) {
		absolute = 0;
	} else {
		}
	if (absolute) {
		ZVAL_BOOL(&_0, 1);
	} else {
		ZVAL_BOOL(&_0, 0);
	}
	ZEPHIR_RETURN_CALL_PARENT(chronos_chronos_ce, getThis(), "diff", NULL, 0, targetObject, &_0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, diffInSeconds)
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
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
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

PHP_METHOD(Chronos_Chronos, diffInMinutes)
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
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
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

PHP_METHOD(Chronos_Chronos, diffInHours)
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
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
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

PHP_METHOD(Chronos_Chronos, diffInMonths)
{
        zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
        zend_long ZEPHIR_LAST_CALL_STATUS;
        zval *other, other_sub, *abs = NULL, abs_sub, __$true, diff, months, _0, _1, _2, _3;
        zval *this_ptr = getThis();

        ZVAL_UNDEF(&other_sub);
        ZVAL_UNDEF(&abs_sub);
        ZVAL_BOOL(&__$true, 1);
        ZVAL_UNDEF(&diff);
        ZVAL_UNDEF(&months);
        ZVAL_UNDEF(&_0);
        ZVAL_UNDEF(&_1);
        ZVAL_UNDEF(&_2);
        ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
       ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
       zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
       zephir_fetch_params(1, 1, 1, &other, &abs);
       if (!abs) {
               abs = &abs_sub;
               abs = &__$true;
       }

       ZVAL_FALSE(&_0);
       ZEPHIR_CALL_METHOD(&diff, this_ptr, "diff", NULL, 0, other, &_0);
       zephir_check_call_status();
       zephir_read_property(&_1, &diff, ZEND_STRL("y"), PH_NOISY_CC);
       zephir_read_property(&_2, &diff, ZEND_STRL("m"), PH_NOISY_CC);
       ZEPHIR_INIT_VAR(&months);
       ZVAL_LONG(&months, (zephir_get_intval(&_1) * 12) + zephir_get_intval(&_2));
       zephir_read_property(&_3, &diff, ZEND_STRL("invert"), PH_NOISY_CC);
       if (zephir_is_true(&_3)) {
               ZVAL_LONG(&months, -zephir_get_intval(&months));
       }

       if (zephir_is_true(abs)) {
               ZEPHIR_RETURN_CALL_FUNCTION("abs", NULL, 4, &months);
               zephir_check_call_status();
               RETURN_MM_LONG(zval_get_long(return_value));
       } else {
               RETURN_MM_LONG(zephir_get_intval(&months));
       }
}

PHP_METHOD(Chronos_Chronos, diffInYears)
{
        zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
        zend_long ZEPHIR_LAST_CALL_STATUS;
        zval *other, other_sub, *abs = NULL, abs_sub, __$true, diff, years, _0, _1, _2;
        zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
        ZVAL_UNDEF(&diff);
        ZVAL_UNDEF(&years);
        ZVAL_UNDEF(&_0);
        ZVAL_UNDEF(&_1);
        ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
       ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
       zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
       zephir_fetch_params(1, 1, 1, &other, &abs);
       if (!abs) {
               abs = &abs_sub;
               abs = &__$true;
       }

       ZVAL_FALSE(&_0);
       ZEPHIR_CALL_METHOD(&diff, this_ptr, "diff", NULL, 0, other, &_0);
       zephir_check_call_status();
       zephir_read_property(&_1, &diff, ZEND_STRL("y"), PH_NOISY_CC);
       ZEPHIR_INIT_VAR(&years);
       ZVAL_LONG(&years, zephir_get_intval(&_1));
       zephir_read_property(&_2, &diff, ZEND_STRL("invert"), PH_NOISY_CC);
       if (zephir_is_true(&_2)) {
               ZVAL_LONG(&years, -zephir_get_intval(&years));
       }

       if (zephir_is_true(abs)) {
               ZEPHIR_RETURN_CALL_FUNCTION("abs", NULL, 4, &years);
               zephir_check_call_status();
               RETURN_MM_LONG(zval_get_long(return_value));
       } else {
               RETURN_MM_LONG(zephir_get_intval(&years));
       }
}

PHP_METHOD(Chronos_Chronos, diffInWeeks)
{
        zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
        zend_long ZEPHIR_LAST_CALL_STATUS;
        zval *other, other_sub, *abs = NULL, abs_sub, __$true, diff, weeks, _0, _1, _2;
        zval *this_ptr = getThis();

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&abs_sub);
	ZVAL_BOOL(&__$true, 1);
        ZVAL_UNDEF(&diff);
        ZVAL_UNDEF(&weeks);
        ZVAL_UNDEF(&_0);
        ZVAL_UNDEF(&_1);
        ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &other, &abs);
       if (!abs) {
               abs = &abs_sub;
               abs = &__$true;
       }

       ZVAL_FALSE(&_0);
       ZEPHIR_CALL_METHOD(&diff, this_ptr, "diff", NULL, 0, other, &_0);
       zephir_check_call_status();
       zephir_read_property(&_1, &diff, ZEND_STRL("days"), PH_NOISY_CC);
       ZEPHIR_INIT_VAR(&weeks);
       ZVAL_LONG(&weeks, zephir_get_intval(&_1) / 7);
       zephir_read_property(&_2, &diff, ZEND_STRL("invert"), PH_NOISY_CC);
       if (zephir_is_true(&_2)) {
               ZVAL_LONG(&weeks, -zephir_get_intval(&weeks));
       }

       if (zephir_is_true(abs)) {
               ZEPHIR_RETURN_CALL_FUNCTION("abs", NULL, 4, &weeks);
               zephir_check_call_status();
               RETURN_MM_LONG(zval_get_long(return_value));
       } else {
               RETURN_MM_LONG(zephir_get_intval(&weeks));
       }
}

PHP_METHOD(Chronos_Chronos, diffInDays)
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
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(abs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
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

PHP_METHOD(Chronos_Chronos, diffInMicroseconds)
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
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(abs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &other, &abs_param);
	if (!abs_param) {
		abs = 1;
	} else {
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

PHP_METHOD(Chronos_Chronos, between)
{
	zend_bool equal, _0$$3, _1;
	zval *start, start_sub, *end, end_sub, *equal_param = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&start_sub);
	ZVAL_UNDEF(&end_sub);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(start)
		Z_PARAM_ZVAL(end)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(equal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &start, &end, &equal_param);
	if (!equal_param) {
		equal = 1;
	} else {
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

PHP_METHOD(Chronos_Chronos, eq)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);
	RETURN_BOOL(ZEPHIR_IS_EQUAL(this_ptr, dateTime));
}

PHP_METHOD(Chronos_Chronos, ne)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);
	RETURN_BOOL(!ZEPHIR_IS_EQUAL(this_ptr, dateTime));
}

PHP_METHOD(Chronos_Chronos, gt)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);
	RETURN_BOOL(ZEPHIR_GT(this_ptr, dateTime));
}

PHP_METHOD(Chronos_Chronos, gte)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);
	RETURN_BOOL(ZEPHIR_GE(this_ptr, dateTime));
}

PHP_METHOD(Chronos_Chronos, lt)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);
	RETURN_BOOL(ZEPHIR_LT(this_ptr, dateTime));
}

PHP_METHOD(Chronos_Chronos, lte)
{
	zval *dateTime, dateTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dateTime_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dateTime);
	RETURN_BOOL(ZEPHIR_LE(this_ptr, dateTime));
}

PHP_METHOD(Chronos_Chronos, isSameDay)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, isSameMonth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, isSameQuarter)
{
	zend_bool _8;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, thisQuarter, targetQuarter, _0, _1, _3, _4, _5, _6, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&thisQuarter);
	ZVAL_UNDEF(&targetQuarter);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "n");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	ZVAL_DOUBLE(&_3, zephir_safe_div_long_long(zephir_get_intval(&_0), 3));
	ZEPHIR_INIT_VAR(&thisQuarter);
	ZVAL_LONG(&thisQuarter, (int) zephir_ceil(&_3));
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "n");
	ZEPHIR_CALL_METHOD(&_4, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZVAL_DOUBLE(&_5, zephir_safe_div_long_long(zephir_get_intval(&_4), 3));
	ZEPHIR_INIT_VAR(&targetQuarter);
	ZVAL_LONG(&targetQuarter, (int) zephir_ceil(&_5));
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "format", &_2, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_7, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	_8 = ZEPHIR_IS_IDENTICAL(&_6, &_7);
	if (_8) {
		_8 = (ZEPHIR_IS_IDENTICAL(&thisQuarter, &targetQuarter));
	}
	RETURN_MM_BOOL(_8);
}

PHP_METHOD(Chronos_Chronos, isSameYear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, isSameWeek)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "o-W");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "o-W");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, isSameHour)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, isSameMinute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H:i");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H:i");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, isSameSecond)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *targetObject, targetObject_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&targetObject_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(targetObject, php_date_get_interface_ce())
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &targetObject);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H:i:s");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H:i:s");
	ZEPHIR_CALL_METHOD(&_2, targetObject, "format", NULL, 0, &_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_IDENTICAL(&_0, &_2));
}

PHP_METHOD(Chronos_Chronos, __toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "todatetimestring", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, parse)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *time = NULL, time_sub, *timezone = NULL, timezone_sub, __$null, e, _0, _1$$4, _2$$4;

	ZVAL_UNDEF(&time_sub);
	ZVAL_UNDEF(&timezone_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&e);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(time)
		Z_PARAM_ZVAL_OR_NULL(timezone)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 2, &time, &timezone);
	if (!time) {
		time = &time_sub;
		ZEPHIR_INIT_VAR(time);
		ZVAL_STRING(time, "now");
	}
	if (!timezone) {
		timezone = &timezone_sub;
		timezone = &__$null;
	}
	/* try_start_1: */

		object_init_ex(return_value, chronos_chronos_ce);
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 5, time, timezone);
		zephir_check_call_status_or_jump(try_end_1);
		RETURN_MM();

	try_end_1:

	if (EG(exception)) {
		ZEPHIR_INIT_VAR(&_0);
		ZVAL_OBJ(&_0, EG(exception));
		Z_ADDREF_P(&_0);
		if (zephir_is_instance_of(&_0, SL("Exception"))) {
			zend_clear_exception();
			ZEPHIR_CPY_WRT(&e, &_0);
			ZEPHIR_INIT_VAR(&_1$$4);
			object_init_ex(&_1$$4, chronos_exceptions_invalidformatexception_ce);
			ZEPHIR_CALL_METHOD(&_2$$4, &e, "getmessage", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &_1$$4, "__construct", NULL, 6, &_2$$4);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_1$$4, "chronos/Chronos.zep", 921);
			ZEPHIR_MM_RESTORE();
			return;
		}
	}
}

PHP_METHOD(Chronos_Chronos, now)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *timezone = NULL, timezone_sub, __$null, _0;

	ZVAL_UNDEF(&timezone_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(timezone)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &timezone);
	if (!timezone) {
		timezone = &timezone_sub;
		timezone = &__$null;
	}
	object_init_ex(return_value, chronos_chronos_ce);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "now");
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 5, &_0, timezone);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(Chronos_Chronos, copy)
{
	zval _0, _1, _2;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	object_init_ex(return_value, chronos_chronos_ce);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Y-m-d H:i:s.u");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "format", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "gettimezone", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 5, &_0, &_2);
	zephir_check_call_status();
	RETURN_MM();
}

void zephir_init_static_properties_Chronos_Chronos()
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 19, 0);
	add_assoc_stringl_ex(&_0, SL("~(quiz)$~i"), SL("$1zes"));
	add_assoc_stringl_ex(&_0, SL("~^(ox)$~i"), SL("$1en"));
	add_assoc_stringl_ex(&_0, SL("~([m|l])ouse$~i"), SL("$1ice"));
	add_assoc_stringl_ex(&_0, SL("~(matr|vert|ind)ix|ex$~i"), SL("$1ices"));
	add_assoc_stringl_ex(&_0, SL("~(x|ch|ss|sh)$~i"), SL("$1es"));
	add_assoc_stringl_ex(&_0, SL("~([^aeiouy]|qu)y$~i"), SL("$1ies"));
	add_assoc_stringl_ex(&_0, SL("~(hive)$~i"), SL("$1s"));
	add_assoc_stringl_ex(&_0, SL("~(?:([^f])fe|([lr])f)$~i"), SL("$1$2ves"));
	add_assoc_stringl_ex(&_0, SL("~(shea|lea|loa|thie)f$~i"), SL("$1ves"));
	add_assoc_stringl_ex(&_0, SL("~sis$~i"), SL("ses"));
	add_assoc_stringl_ex(&_0, SL("~([ti])um$~i"), SL("$1a"));
	add_assoc_stringl_ex(&_0, SL("~(tomat|potat|ech|her|vet)o$~i"), SL("$1oes"));
	add_assoc_stringl_ex(&_0, SL("~(bu)s$~i"), SL("$1ses"));
	add_assoc_stringl_ex(&_0, SL("~(alias)$~i"), SL("$1es"));
	add_assoc_stringl_ex(&_0, SL("~(octop)us$~i"), SL("$1i"));
	add_assoc_stringl_ex(&_0, SL("~(ax|test)is$~i"), SL("$1es"));
	add_assoc_stringl_ex(&_0, SL("~(us)$~i"), SL("$1es"));
	add_assoc_stringl_ex(&_0, SL("~s$~i"), SL("s"));
	add_assoc_stringl_ex(&_0, SL("~$~"), SL("s"));
	zephir_update_static_property_ce(chronos_chronos_ce, ZEND_STRL("plural"), &_0);
	ZEPHIR_MM_RESTORE();
}

