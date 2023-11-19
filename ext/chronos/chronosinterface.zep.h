
extern zend_class_entry *chronos_chronosinterface_ce;

ZEPHIR_INIT_CLASS(Chronos_ChronosInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_settimezone, 0, 0, 1)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_parse, 0, 0, 0)
	ZEND_ARG_INFO(0, time)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_now, 0, 0, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_copy, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_locale, 0, 0, 1)
	ZEND_ARG_INFO(0, locale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todatetime, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todatetimeimmutable, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todatetimestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todatestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todateweekstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_totimestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todayofweekstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todayofweekshortstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_todayofyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_toweekofyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_tomonthstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_tomonthshortstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_toyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_toiso8601string, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_today, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_tomorrow, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_yesterday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_thisweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_nextweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_lastweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_thismonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_nextmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_lastmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_thisyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_nextyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_lastyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_startofday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_startofmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_startofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_endofday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_endofmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_endofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronosinterface_modify, 0, 1, DateTime, 0)
	ZEND_ARG_TYPE_INFO(0, modifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_istoday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_istomorrow, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isyesterday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isthisweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isnextweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islastweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isthismonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isnextmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islastmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isthisyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isnextyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islastyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isfuture, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_ispast, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isleapyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islongyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isweekday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isweekend, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_ismonday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_istuesday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_iswednesday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isthursday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isfriday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_issaturday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_issunday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_ismorning, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isafternoon, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isevening, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isnight, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_ismidnight, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isnoon, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isdaylightsavingtime, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_isstandardtime, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islastdayofmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islastweekofmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_islastweekofyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gethour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getsecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getdayofweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getdayofyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getweekofyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getweekofmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmonthofyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gettimestamp, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getage, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getdaysinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getdaysinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getdaysinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmonthsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getsecondsinminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getminutesinhour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gethoursinday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gethoursinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gethoursinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gethoursinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getminutesinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getminutesinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getminutesinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getsecondsinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getsecondsinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getsecondsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinsecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinhour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_getmicrosecondsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setdatetime, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, dateTime, DateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setmonth, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setday, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_sethour, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hour, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setminute, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minute, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setsecond, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, second, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setmicrosecond, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microsecond, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setdayofweek, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, dayOfWeek, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setdayofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, dayOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setweekofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weekOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setweekofmonth, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weekOfMonth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_setmonthofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, monthOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addyears, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addmonths, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_adddays, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addhours, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hours, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addminutes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minutes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addmicroseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_addweeks, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weeks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_subyears, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_submonths, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_subdays, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_subhours, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hours, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_subminutes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minutes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_subseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_submicroseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_subweeks, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weeks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronosinterface_diff, 0, 1, DateInterval, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
	ZEND_ARG_TYPE_INFO(0, absolute, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinseconds, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinminutes, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinhours, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinmonths, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinyears, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinweeks, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffindays, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronosinterface_diffinmicroseconds, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_between, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, start)
	ZEND_ARG_INFO(0, end)
	ZEND_ARG_TYPE_INFO(0, equal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_eq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_ne, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_gte, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_lt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface_lte, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronosinterface___tostring, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(chronos_chronosinterface_method_entry) {
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setTimeZone, arginfo_chronos_chronosinterface_settimezone)
	ZEND_FENTRY(parse, NULL, arginfo_chronos_chronosinterface_parse, ZEND_ACC_STATIC|ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	ZEND_FENTRY(now, NULL, arginfo_chronos_chronosinterface_now, ZEND_ACC_STATIC|ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, copy, arginfo_chronos_chronosinterface_copy)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, format, arginfo_chronos_chronosinterface_format)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, locale, arginfo_chronos_chronosinterface_locale)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDateTime, arginfo_chronos_chronosinterface_todatetime)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDateTimeImmutable, arginfo_chronos_chronosinterface_todatetimeimmutable)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDateTimeString, arginfo_chronos_chronosinterface_todatetimestring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDateString, arginfo_chronos_chronosinterface_todatestring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDateWeekString, arginfo_chronos_chronosinterface_todateweekstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toTimeString, arginfo_chronos_chronosinterface_totimestring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDayOfWeekString, arginfo_chronos_chronosinterface_todayofweekstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDayOfWeekShortString, arginfo_chronos_chronosinterface_todayofweekshortstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toDayOfYearString, arginfo_chronos_chronosinterface_todayofyearstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toWeekOfYearString, arginfo_chronos_chronosinterface_toweekofyearstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toMonthString, arginfo_chronos_chronosinterface_tomonthstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toMonthShortString, arginfo_chronos_chronosinterface_tomonthshortstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toYearString, arginfo_chronos_chronosinterface_toyearstring)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, toIso8601String, arginfo_chronos_chronosinterface_toiso8601string)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, today, arginfo_chronos_chronosinterface_today)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, tomorrow, arginfo_chronos_chronosinterface_tomorrow)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, yesterday, arginfo_chronos_chronosinterface_yesterday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, thisWeek, arginfo_chronos_chronosinterface_thisweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, nextWeek, arginfo_chronos_chronosinterface_nextweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, lastWeek, arginfo_chronos_chronosinterface_lastweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, thisMonth, arginfo_chronos_chronosinterface_thismonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, nextMonth, arginfo_chronos_chronosinterface_nextmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, lastMonth, arginfo_chronos_chronosinterface_lastmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, thisYear, arginfo_chronos_chronosinterface_thisyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, nextYear, arginfo_chronos_chronosinterface_nextyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, lastYear, arginfo_chronos_chronosinterface_lastyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, startOfDay, arginfo_chronos_chronosinterface_startofday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, startOfMonth, arginfo_chronos_chronosinterface_startofmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, startOfYear, arginfo_chronos_chronosinterface_startofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, endOfDay, arginfo_chronos_chronosinterface_endofday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, endOfMonth, arginfo_chronos_chronosinterface_endofmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, endOfYear, arginfo_chronos_chronosinterface_endofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, modify, arginfo_chronos_chronosinterface_modify)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isToday, arginfo_chronos_chronosinterface_istoday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isTomorrow, arginfo_chronos_chronosinterface_istomorrow)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isYesterday, arginfo_chronos_chronosinterface_isyesterday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isThisWeek, arginfo_chronos_chronosinterface_isthisweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isNextWeek, arginfo_chronos_chronosinterface_isnextweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLastWeek, arginfo_chronos_chronosinterface_islastweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isThisMonth, arginfo_chronos_chronosinterface_isthismonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isNextMonth, arginfo_chronos_chronosinterface_isnextmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLastMonth, arginfo_chronos_chronosinterface_islastmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isThisYear, arginfo_chronos_chronosinterface_isthisyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isNextYear, arginfo_chronos_chronosinterface_isnextyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLastYear, arginfo_chronos_chronosinterface_islastyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isFuture, arginfo_chronos_chronosinterface_isfuture)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isPast, arginfo_chronos_chronosinterface_ispast)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLeapYear, arginfo_chronos_chronosinterface_isleapyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLongYear, arginfo_chronos_chronosinterface_islongyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isWeekday, arginfo_chronos_chronosinterface_isweekday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isWeekend, arginfo_chronos_chronosinterface_isweekend)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isMonday, arginfo_chronos_chronosinterface_ismonday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isTuesday, arginfo_chronos_chronosinterface_istuesday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isWednesday, arginfo_chronos_chronosinterface_iswednesday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isThursday, arginfo_chronos_chronosinterface_isthursday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isFriday, arginfo_chronos_chronosinterface_isfriday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isSaturday, arginfo_chronos_chronosinterface_issaturday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isSunday, arginfo_chronos_chronosinterface_issunday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isMorning, arginfo_chronos_chronosinterface_ismorning)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isAfternoon, arginfo_chronos_chronosinterface_isafternoon)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isEvening, arginfo_chronos_chronosinterface_isevening)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isNight, arginfo_chronos_chronosinterface_isnight)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isMidnight, arginfo_chronos_chronosinterface_ismidnight)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isNoon, arginfo_chronos_chronosinterface_isnoon)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isDaylightSavingTime, arginfo_chronos_chronosinterface_isdaylightsavingtime)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isStandardTime, arginfo_chronos_chronosinterface_isstandardtime)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLastDayOfMonth, arginfo_chronos_chronosinterface_islastdayofmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLastWeekOfMonth, arginfo_chronos_chronosinterface_islastweekofmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, isLastWeekOfYear, arginfo_chronos_chronosinterface_islastweekofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getYear, arginfo_chronos_chronosinterface_getyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMonth, arginfo_chronos_chronosinterface_getmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getDay, arginfo_chronos_chronosinterface_getday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getHour, arginfo_chronos_chronosinterface_gethour)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMinute, arginfo_chronos_chronosinterface_getminute)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getSecond, arginfo_chronos_chronosinterface_getsecond)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecond, arginfo_chronos_chronosinterface_getmicrosecond)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getDayOfWeek, arginfo_chronos_chronosinterface_getdayofweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getDayOfYear, arginfo_chronos_chronosinterface_getdayofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getWeekOfYear, arginfo_chronos_chronosinterface_getweekofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getWeekOfMonth, arginfo_chronos_chronosinterface_getweekofmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMonthOfYear, arginfo_chronos_chronosinterface_getmonthofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getTimestamp, arginfo_chronos_chronosinterface_gettimestamp)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getAge, arginfo_chronos_chronosinterface_getage)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getDaysInMonth, arginfo_chronos_chronosinterface_getdaysinmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getDaysInYear, arginfo_chronos_chronosinterface_getdaysinyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getDaysInWeek, arginfo_chronos_chronosinterface_getdaysinweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMonthsInYear, arginfo_chronos_chronosinterface_getmonthsinyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getSecondsInMinute, arginfo_chronos_chronosinterface_getsecondsinminute)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMinutesInHour, arginfo_chronos_chronosinterface_getminutesinhour)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getHoursInDay, arginfo_chronos_chronosinterface_gethoursinday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getHoursInWeek, arginfo_chronos_chronosinterface_gethoursinweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getHoursInMonth, arginfo_chronos_chronosinterface_gethoursinmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getHoursInYear, arginfo_chronos_chronosinterface_gethoursinyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMinutesInWeek, arginfo_chronos_chronosinterface_getminutesinweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMinutesInMonth, arginfo_chronos_chronosinterface_getminutesinmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMinutesInYear, arginfo_chronos_chronosinterface_getminutesinyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getSecondsInWeek, arginfo_chronos_chronosinterface_getsecondsinweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getSecondsInMonth, arginfo_chronos_chronosinterface_getsecondsinmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getSecondsInYear, arginfo_chronos_chronosinterface_getsecondsinyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInSecond, arginfo_chronos_chronosinterface_getmicrosecondsinsecond)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInMinute, arginfo_chronos_chronosinterface_getmicrosecondsinminute)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInHour, arginfo_chronos_chronosinterface_getmicrosecondsinhour)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInDay, arginfo_chronos_chronosinterface_getmicrosecondsinday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInWeek, arginfo_chronos_chronosinterface_getmicrosecondsinweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInMonth, arginfo_chronos_chronosinterface_getmicrosecondsinmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, getMicrosecondsInYear, arginfo_chronos_chronosinterface_getmicrosecondsinyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setDateTime, arginfo_chronos_chronosinterface_setdatetime)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setYear, arginfo_chronos_chronosinterface_setyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setMonth, arginfo_chronos_chronosinterface_setmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setDay, arginfo_chronos_chronosinterface_setday)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setHour, arginfo_chronos_chronosinterface_sethour)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setMinute, arginfo_chronos_chronosinterface_setminute)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setSecond, arginfo_chronos_chronosinterface_setsecond)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setMicrosecond, arginfo_chronos_chronosinterface_setmicrosecond)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setDayOfWeek, arginfo_chronos_chronosinterface_setdayofweek)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setDayOfYear, arginfo_chronos_chronosinterface_setdayofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setWeekOfYear, arginfo_chronos_chronosinterface_setweekofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setWeekOfMonth, arginfo_chronos_chronosinterface_setweekofmonth)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, setMonthOfYear, arginfo_chronos_chronosinterface_setmonthofyear)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addYears, arginfo_chronos_chronosinterface_addyears)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addMonths, arginfo_chronos_chronosinterface_addmonths)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addDays, arginfo_chronos_chronosinterface_adddays)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addHours, arginfo_chronos_chronosinterface_addhours)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addMinutes, arginfo_chronos_chronosinterface_addminutes)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addSeconds, arginfo_chronos_chronosinterface_addseconds)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addMicroseconds, arginfo_chronos_chronosinterface_addmicroseconds)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, addWeeks, arginfo_chronos_chronosinterface_addweeks)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subYears, arginfo_chronos_chronosinterface_subyears)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subMonths, arginfo_chronos_chronosinterface_submonths)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subDays, arginfo_chronos_chronosinterface_subdays)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subHours, arginfo_chronos_chronosinterface_subhours)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subMinutes, arginfo_chronos_chronosinterface_subminutes)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subSeconds, arginfo_chronos_chronosinterface_subseconds)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subMicroseconds, arginfo_chronos_chronosinterface_submicroseconds)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, subWeeks, arginfo_chronos_chronosinterface_subweeks)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diff, arginfo_chronos_chronosinterface_diff)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInSeconds, arginfo_chronos_chronosinterface_diffinseconds)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInMinutes, arginfo_chronos_chronosinterface_diffinminutes)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInHours, arginfo_chronos_chronosinterface_diffinhours)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInMonths, arginfo_chronos_chronosinterface_diffinmonths)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInYears, arginfo_chronos_chronosinterface_diffinyears)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInWeeks, arginfo_chronos_chronosinterface_diffinweeks)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInDays, arginfo_chronos_chronosinterface_diffindays)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, diffInMicroseconds, arginfo_chronos_chronosinterface_diffinmicroseconds)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, between, arginfo_chronos_chronosinterface_between)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, eq, arginfo_chronos_chronosinterface_eq)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, ne, arginfo_chronos_chronosinterface_ne)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, gt, arginfo_chronos_chronosinterface_gt)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, gte, arginfo_chronos_chronosinterface_gte)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, lt, arginfo_chronos_chronosinterface_lt)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, lte, arginfo_chronos_chronosinterface_lte)
	PHP_ABSTRACT_ME(Chronos_ChronosInterface, __toString, arginfo_chronos_chronosinterface___tostring)
	PHP_FE_END
};
