
extern zend_class_entry *chronos_chronos_ce;

ZEPHIR_INIT_CLASS(Chronos_Chronos);

PHP_METHOD(Chronos_Chronos, __construct);
PHP_METHOD(Chronos_Chronos, setTimeZone);
PHP_METHOD(Chronos_Chronos, format);
PHP_METHOD(Chronos_Chronos, locale);
PHP_METHOD(Chronos_Chronos, toDateTime);
PHP_METHOD(Chronos_Chronos, toDateTimeImmutable);
PHP_METHOD(Chronos_Chronos, toDateTimeString);
PHP_METHOD(Chronos_Chronos, toDateString);
PHP_METHOD(Chronos_Chronos, toDateWeekString);
PHP_METHOD(Chronos_Chronos, toTimeString);
PHP_METHOD(Chronos_Chronos, toDayOfWeekString);
PHP_METHOD(Chronos_Chronos, toDayOfWeekShortString);
PHP_METHOD(Chronos_Chronos, toDayOfYearString);
PHP_METHOD(Chronos_Chronos, toWeekOfYearString);
PHP_METHOD(Chronos_Chronos, toMonthString);
PHP_METHOD(Chronos_Chronos, toMonthShortString);
PHP_METHOD(Chronos_Chronos, toYearString);
PHP_METHOD(Chronos_Chronos, toIso8601String);
PHP_METHOD(Chronos_Chronos, today);
PHP_METHOD(Chronos_Chronos, tomorrow);
PHP_METHOD(Chronos_Chronos, yesterday);
PHP_METHOD(Chronos_Chronos, thisWeek);
PHP_METHOD(Chronos_Chronos, nextWeek);
PHP_METHOD(Chronos_Chronos, lastWeek);
PHP_METHOD(Chronos_Chronos, thisMonth);
PHP_METHOD(Chronos_Chronos, nextMonth);
PHP_METHOD(Chronos_Chronos, lastMonth);
PHP_METHOD(Chronos_Chronos, thisYear);
PHP_METHOD(Chronos_Chronos, nextYear);
PHP_METHOD(Chronos_Chronos, lastYear);
PHP_METHOD(Chronos_Chronos, startOfDay);
PHP_METHOD(Chronos_Chronos, startOfWeek);
PHP_METHOD(Chronos_Chronos, startOfMonth);
PHP_METHOD(Chronos_Chronos, startOfYear);
PHP_METHOD(Chronos_Chronos, endOfDay);
PHP_METHOD(Chronos_Chronos, endOfWeek);
PHP_METHOD(Chronos_Chronos, endOfMonth);
PHP_METHOD(Chronos_Chronos, endOfYear);
PHP_METHOD(Chronos_Chronos, modify);
PHP_METHOD(Chronos_Chronos, isToday);
PHP_METHOD(Chronos_Chronos, isTomorrow);
PHP_METHOD(Chronos_Chronos, isYesterday);
PHP_METHOD(Chronos_Chronos, isThisWeek);
PHP_METHOD(Chronos_Chronos, isNextWeek);
PHP_METHOD(Chronos_Chronos, isLastWeek);
PHP_METHOD(Chronos_Chronos, isThisMonth);
PHP_METHOD(Chronos_Chronos, isNextMonth);
PHP_METHOD(Chronos_Chronos, isLastMonth);
PHP_METHOD(Chronos_Chronos, isThisYear);
PHP_METHOD(Chronos_Chronos, isNextYear);
PHP_METHOD(Chronos_Chronos, isLastYear);
PHP_METHOD(Chronos_Chronos, isFuture);
PHP_METHOD(Chronos_Chronos, isPast);
PHP_METHOD(Chronos_Chronos, isLeapYear);
PHP_METHOD(Chronos_Chronos, isWeekday);
PHP_METHOD(Chronos_Chronos, isWeekend);
PHP_METHOD(Chronos_Chronos, isMonday);
PHP_METHOD(Chronos_Chronos, isTuesday);
PHP_METHOD(Chronos_Chronos, isWednesday);
PHP_METHOD(Chronos_Chronos, isThursday);
PHP_METHOD(Chronos_Chronos, isFriday);
PHP_METHOD(Chronos_Chronos, isSaturday);
PHP_METHOD(Chronos_Chronos, isSunday);
PHP_METHOD(Chronos_Chronos, isMorning);
PHP_METHOD(Chronos_Chronos, isAfternoon);
PHP_METHOD(Chronos_Chronos, isEvening);
PHP_METHOD(Chronos_Chronos, isNight);
PHP_METHOD(Chronos_Chronos, isMidnight);
PHP_METHOD(Chronos_Chronos, isNoon);
PHP_METHOD(Chronos_Chronos, isDaylightSavingTime);
PHP_METHOD(Chronos_Chronos, isStandardTime);
PHP_METHOD(Chronos_Chronos, isLastDayOfMonth);
PHP_METHOD(Chronos_Chronos, isLastWeekOfMonth);
PHP_METHOD(Chronos_Chronos, isLastWeekOfYear);
PHP_METHOD(Chronos_Chronos, getYear);
PHP_METHOD(Chronos_Chronos, getMonth);
PHP_METHOD(Chronos_Chronos, getDay);
PHP_METHOD(Chronos_Chronos, getHour);
PHP_METHOD(Chronos_Chronos, getMinute);
PHP_METHOD(Chronos_Chronos, getSecond);
PHP_METHOD(Chronos_Chronos, getMicrosecond);
PHP_METHOD(Chronos_Chronos, getDayOfWeek);
PHP_METHOD(Chronos_Chronos, getDayOfYear);
PHP_METHOD(Chronos_Chronos, getWeekOfYear);
PHP_METHOD(Chronos_Chronos, getMonthOfYear);
PHP_METHOD(Chronos_Chronos, getAge);
PHP_METHOD(Chronos_Chronos, getDaysInMonth);
PHP_METHOD(Chronos_Chronos, getDaysInYear);
PHP_METHOD(Chronos_Chronos, getDaysInWeek);
PHP_METHOD(Chronos_Chronos, getMonthsInYear);
PHP_METHOD(Chronos_Chronos, getSecondsInMinute);
PHP_METHOD(Chronos_Chronos, getMinutesInHour);
PHP_METHOD(Chronos_Chronos, getHoursInDay);
PHP_METHOD(Chronos_Chronos, getHoursInWeek);
PHP_METHOD(Chronos_Chronos, getHoursInMonth);
PHP_METHOD(Chronos_Chronos, getHoursInYear);
PHP_METHOD(Chronos_Chronos, getMinutesInWeek);
PHP_METHOD(Chronos_Chronos, getMinutesInMonth);
PHP_METHOD(Chronos_Chronos, getMinutesInYear);
PHP_METHOD(Chronos_Chronos, getSecondsInWeek);
PHP_METHOD(Chronos_Chronos, getSecondsInMonth);
PHP_METHOD(Chronos_Chronos, getSecondsInYear);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInSecond);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInMinute);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInHour);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInDay);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInWeek);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInMonth);
PHP_METHOD(Chronos_Chronos, getMicrosecondsInYear);
PHP_METHOD(Chronos_Chronos, setDateTime);
PHP_METHOD(Chronos_Chronos, setYear);
PHP_METHOD(Chronos_Chronos, setMonth);
PHP_METHOD(Chronos_Chronos, setDay);
PHP_METHOD(Chronos_Chronos, setHour);
PHP_METHOD(Chronos_Chronos, setMinute);
PHP_METHOD(Chronos_Chronos, setSecond);
PHP_METHOD(Chronos_Chronos, setDayOfWeek);
PHP_METHOD(Chronos_Chronos, setDayOfYear);
PHP_METHOD(Chronos_Chronos, setWeekOfYear);
PHP_METHOD(Chronos_Chronos, setWeekOfMonth);
PHP_METHOD(Chronos_Chronos, setMonthOfYear);
PHP_METHOD(Chronos_Chronos, addYears);
PHP_METHOD(Chronos_Chronos, addMonths);
PHP_METHOD(Chronos_Chronos, addDays);
PHP_METHOD(Chronos_Chronos, addHours);
PHP_METHOD(Chronos_Chronos, addMinutes);
PHP_METHOD(Chronos_Chronos, addSeconds);
PHP_METHOD(Chronos_Chronos, addMicroseconds);
PHP_METHOD(Chronos_Chronos, addWeeks);
PHP_METHOD(Chronos_Chronos, subYears);
PHP_METHOD(Chronos_Chronos, subMonths);
PHP_METHOD(Chronos_Chronos, subDays);
PHP_METHOD(Chronos_Chronos, subHours);
PHP_METHOD(Chronos_Chronos, subMinutes);
PHP_METHOD(Chronos_Chronos, subSeconds);
PHP_METHOD(Chronos_Chronos, subMicroseconds);
PHP_METHOD(Chronos_Chronos, subWeeks);
PHP_METHOD(Chronos_Chronos, diff);
PHP_METHOD(Chronos_Chronos, diffInSeconds);
PHP_METHOD(Chronos_Chronos, diffInMinutes);
PHP_METHOD(Chronos_Chronos, diffInHours);
PHP_METHOD(Chronos_Chronos, diffInMonths);
PHP_METHOD(Chronos_Chronos, diffInYears);
PHP_METHOD(Chronos_Chronos, diffInWeeks);
PHP_METHOD(Chronos_Chronos, diffInDays);
PHP_METHOD(Chronos_Chronos, diffInMicroseconds);
PHP_METHOD(Chronos_Chronos, between);
PHP_METHOD(Chronos_Chronos, eq);
PHP_METHOD(Chronos_Chronos, ne);
PHP_METHOD(Chronos_Chronos, gt);
PHP_METHOD(Chronos_Chronos, gte);
PHP_METHOD(Chronos_Chronos, lt);
PHP_METHOD(Chronos_Chronos, lte);
PHP_METHOD(Chronos_Chronos, isSameDay);
PHP_METHOD(Chronos_Chronos, isSameMonth);
PHP_METHOD(Chronos_Chronos, isSameQuarter);
PHP_METHOD(Chronos_Chronos, isSameYear);
PHP_METHOD(Chronos_Chronos, isSameWeek);
PHP_METHOD(Chronos_Chronos, isSameHour);
PHP_METHOD(Chronos_Chronos, isSameMinute);
PHP_METHOD(Chronos_Chronos, isSameSecond);
PHP_METHOD(Chronos_Chronos, __toString);
PHP_METHOD(Chronos_Chronos, parse);
PHP_METHOD(Chronos_Chronos, now);
PHP_METHOD(Chronos_Chronos, copy);
void zephir_init_static_properties_Chronos_Chronos();

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, datetime, IS_STRING, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronos_settimezone, 0, 1, DateTime, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_locale, 0, 0, 1)
	ZEND_ARG_INFO(0, locale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronos_todatetime, 0, 0, DateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronos_todatetimeimmutable, 0, 0, DateTimeImmutable, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_todatetimestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_todatestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_todateweekstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_totimestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_todayofweekstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_todayofweekshortstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_todayofyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_toweekofyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_tomonthstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_tomonthshortstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_toyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_toiso8601string, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_today, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_tomorrow, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_yesterday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_thisweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_nextweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_lastweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_thismonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_nextmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_lastmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_thisyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_nextyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_lastyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_startofday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_startofweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_startofmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_startofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_endofday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_endofweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_endofmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_endofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronos_modify, 0, 1, DateTime, 0)
	ZEND_ARG_TYPE_INFO(0, modifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_istoday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_istomorrow, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isyesterday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isthisweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isnextweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_islastweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isthismonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isnextmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_islastmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isthisyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isnextyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_islastyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isfuture, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_ispast, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isleapyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isweekday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isweekend, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_ismonday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_istuesday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_iswednesday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isthursday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isfriday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issaturday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issunday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_ismorning, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isafternoon, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isevening, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isnight, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_ismidnight, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isnoon, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isdaylightsavingtime, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_isstandardtime, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_islastdayofmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_islastweekofmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_islastweekofyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_gethour, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getminute, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getsecond, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getdayofweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getdayofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getweekofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_getmonthofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getage, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getdaysinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getdaysinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getdaysinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmonthsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getsecondsinminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getminutesinhour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_gethoursinday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_gethoursinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_gethoursinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_gethoursinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getminutesinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getminutesinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getminutesinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getsecondsinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getsecondsinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getsecondsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinsecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinhour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_getmicrosecondsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setdatetime, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, dateTime, DateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setmonth, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setday, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_sethour, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hour, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setminute, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minute, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setsecond, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, second, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setdayofweek, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, dayOfWeek, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setdayofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, dayOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setweekofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weekOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setweekofmonth, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weekOfMonth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_setmonthofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, monthOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addyears, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addmonths, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_adddays, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addhours, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hours, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addminutes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minutes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addmicroseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_addweeks, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weeks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_subyears, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_submonths, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_subdays, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_subhours, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hours, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_subminutes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minutes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_subseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_submicroseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_subweeks, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weeks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_chronos_diff, 0, 1, DateInterval, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
	ZEND_ARG_TYPE_INFO(0, absolute, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinseconds, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinminutes, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinhours, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinmonths, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinyears, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinweeks, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffindays, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_diffinmicroseconds, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_between, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, start)
	ZEND_ARG_INFO(0, end)
	ZEND_ARG_TYPE_INFO(0, equal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_eq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_ne, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_gt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_gte, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_lt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_lte, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issameday, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issamemonth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issamequarter, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issameyear, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issameweek, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issamehour, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issameminute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos_issamesecond, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_chronos___tostring, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_parse, 0, 0, 0)
	ZEND_ARG_INFO(0, time)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_now, 0, 0, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_copy, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_chronos_zephir_init_static_properties_chronos_chronos, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(chronos_chronos_method_entry) {
	PHP_ME(Chronos_Chronos, __construct, arginfo_chronos_chronos___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Chronos_Chronos, setTimeZone, arginfo_chronos_chronos_settimezone, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, format, arginfo_chronos_chronos_format, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, locale, arginfo_chronos_chronos_locale, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, toDateTime, arginfo_chronos_chronos_todatetime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, toDateTimeImmutable, arginfo_chronos_chronos_todatetimeimmutable, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toDateTimeString, arginfo_chronos_chronos_todatetimestring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toDateString, arginfo_chronos_chronos_todatestring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toDateWeekString, arginfo_chronos_chronos_todateweekstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toTimeString, arginfo_chronos_chronos_totimestring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toDayOfWeekString, arginfo_chronos_chronos_todayofweekstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toDayOfWeekShortString, arginfo_chronos_chronos_todayofweekshortstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toDayOfYearString, arginfo_chronos_chronos_todayofyearstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toWeekOfYearString, arginfo_chronos_chronos_toweekofyearstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toMonthString, arginfo_chronos_chronos_tomonthstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toMonthShortString, arginfo_chronos_chronos_tomonthshortstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toYearString, arginfo_chronos_chronos_toyearstring, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, toIso8601String, arginfo_chronos_chronos_toiso8601string, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, today, arginfo_chronos_chronos_today, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, tomorrow, arginfo_chronos_chronos_tomorrow, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, yesterday, arginfo_chronos_chronos_yesterday, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, thisWeek, arginfo_chronos_chronos_thisweek, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, nextWeek, arginfo_chronos_chronos_nextweek, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, lastWeek, arginfo_chronos_chronos_lastweek, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, thisMonth, arginfo_chronos_chronos_thismonth, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, nextMonth, arginfo_chronos_chronos_nextmonth, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, lastMonth, arginfo_chronos_chronos_lastmonth, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, thisYear, arginfo_chronos_chronos_thisyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, nextYear, arginfo_chronos_chronos_nextyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, lastYear, arginfo_chronos_chronos_lastyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, startOfDay, arginfo_chronos_chronos_startofday, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, startOfWeek, arginfo_chronos_chronos_startofweek, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, startOfMonth, arginfo_chronos_chronos_startofmonth, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, startOfYear, arginfo_chronos_chronos_startofyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, endOfDay, arginfo_chronos_chronos_endofday, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, endOfWeek, arginfo_chronos_chronos_endofweek, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, endOfMonth, arginfo_chronos_chronos_endofmonth, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, endOfYear, arginfo_chronos_chronos_endofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, modify, arginfo_chronos_chronos_modify, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isToday, arginfo_chronos_chronos_istoday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isTomorrow, arginfo_chronos_chronos_istomorrow, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isYesterday, arginfo_chronos_chronos_isyesterday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isThisWeek, arginfo_chronos_chronos_isthisweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isNextWeek, arginfo_chronos_chronos_isnextweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLastWeek, arginfo_chronos_chronos_islastweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isThisMonth, arginfo_chronos_chronos_isthismonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isNextMonth, arginfo_chronos_chronos_isnextmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLastMonth, arginfo_chronos_chronos_islastmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isThisYear, arginfo_chronos_chronos_isthisyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isNextYear, arginfo_chronos_chronos_isnextyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLastYear, arginfo_chronos_chronos_islastyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isFuture, arginfo_chronos_chronos_isfuture, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isPast, arginfo_chronos_chronos_ispast, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLeapYear, arginfo_chronos_chronos_isleapyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isWeekday, arginfo_chronos_chronos_isweekday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isWeekend, arginfo_chronos_chronos_isweekend, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isMonday, arginfo_chronos_chronos_ismonday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isTuesday, arginfo_chronos_chronos_istuesday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isWednesday, arginfo_chronos_chronos_iswednesday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isThursday, arginfo_chronos_chronos_isthursday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isFriday, arginfo_chronos_chronos_isfriday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSaturday, arginfo_chronos_chronos_issaturday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSunday, arginfo_chronos_chronos_issunday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isMorning, arginfo_chronos_chronos_ismorning, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isAfternoon, arginfo_chronos_chronos_isafternoon, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isEvening, arginfo_chronos_chronos_isevening, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isNight, arginfo_chronos_chronos_isnight, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isMidnight, arginfo_chronos_chronos_ismidnight, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isNoon, arginfo_chronos_chronos_isnoon, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isDaylightSavingTime, arginfo_chronos_chronos_isdaylightsavingtime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isStandardTime, arginfo_chronos_chronos_isstandardtime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLastDayOfMonth, arginfo_chronos_chronos_islastdayofmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLastWeekOfMonth, arginfo_chronos_chronos_islastweekofmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isLastWeekOfYear, arginfo_chronos_chronos_islastweekofyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getYear, arginfo_chronos_chronos_getyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getMonth, arginfo_chronos_chronos_getmonth, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getDay, arginfo_chronos_chronos_getday, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getHour, arginfo_chronos_chronos_gethour, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getMinute, arginfo_chronos_chronos_getminute, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getSecond, arginfo_chronos_chronos_getsecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecond, arginfo_chronos_chronos_getmicrosecond, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getDayOfWeek, arginfo_chronos_chronos_getdayofweek, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getDayOfYear, arginfo_chronos_chronos_getdayofyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getWeekOfYear, arginfo_chronos_chronos_getweekofyear, ZEND_ACC_PUBLIC)
PHP_ME(Chronos_Chronos, getMonthOfYear, arginfo_chronos_chronos_getmonthofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getAge, arginfo_chronos_chronos_getage, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getDaysInMonth, arginfo_chronos_chronos_getdaysinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getDaysInYear, arginfo_chronos_chronos_getdaysinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getDaysInWeek, arginfo_chronos_chronos_getdaysinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMonthsInYear, arginfo_chronos_chronos_getmonthsinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getSecondsInMinute, arginfo_chronos_chronos_getsecondsinminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMinutesInHour, arginfo_chronos_chronos_getminutesinhour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getHoursInDay, arginfo_chronos_chronos_gethoursinday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getHoursInWeek, arginfo_chronos_chronos_gethoursinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getHoursInMonth, arginfo_chronos_chronos_gethoursinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getHoursInYear, arginfo_chronos_chronos_gethoursinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMinutesInWeek, arginfo_chronos_chronos_getminutesinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMinutesInMonth, arginfo_chronos_chronos_getminutesinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMinutesInYear, arginfo_chronos_chronos_getminutesinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getSecondsInWeek, arginfo_chronos_chronos_getsecondsinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getSecondsInMonth, arginfo_chronos_chronos_getsecondsinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getSecondsInYear, arginfo_chronos_chronos_getsecondsinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInSecond, arginfo_chronos_chronos_getmicrosecondsinsecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInMinute, arginfo_chronos_chronos_getmicrosecondsinminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInHour, arginfo_chronos_chronos_getmicrosecondsinhour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInDay, arginfo_chronos_chronos_getmicrosecondsinday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInWeek, arginfo_chronos_chronos_getmicrosecondsinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInMonth, arginfo_chronos_chronos_getmicrosecondsinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, getMicrosecondsInYear, arginfo_chronos_chronos_getmicrosecondsinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setDateTime, arginfo_chronos_chronos_setdatetime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setYear, arginfo_chronos_chronos_setyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setMonth, arginfo_chronos_chronos_setmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setDay, arginfo_chronos_chronos_setday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setHour, arginfo_chronos_chronos_sethour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setMinute, arginfo_chronos_chronos_setminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setSecond, arginfo_chronos_chronos_setsecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setDayOfWeek, arginfo_chronos_chronos_setdayofweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setDayOfYear, arginfo_chronos_chronos_setdayofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setWeekOfYear, arginfo_chronos_chronos_setweekofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setWeekOfMonth, arginfo_chronos_chronos_setweekofmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, setMonthOfYear, arginfo_chronos_chronos_setmonthofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addYears, arginfo_chronos_chronos_addyears, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addMonths, arginfo_chronos_chronos_addmonths, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addDays, arginfo_chronos_chronos_adddays, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addHours, arginfo_chronos_chronos_addhours, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addMinutes, arginfo_chronos_chronos_addminutes, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addSeconds, arginfo_chronos_chronos_addseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addMicroseconds, arginfo_chronos_chronos_addmicroseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, addWeeks, arginfo_chronos_chronos_addweeks, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subYears, arginfo_chronos_chronos_subyears, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subMonths, arginfo_chronos_chronos_submonths, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subDays, arginfo_chronos_chronos_subdays, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subHours, arginfo_chronos_chronos_subhours, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subMinutes, arginfo_chronos_chronos_subminutes, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subSeconds, arginfo_chronos_chronos_subseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subMicroseconds, arginfo_chronos_chronos_submicroseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, subWeeks, arginfo_chronos_chronos_subweeks, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diff, arginfo_chronos_chronos_diff, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInSeconds, arginfo_chronos_chronos_diffinseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInMinutes, arginfo_chronos_chronos_diffinminutes, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInHours, arginfo_chronos_chronos_diffinhours, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInMonths, arginfo_chronos_chronos_diffinmonths, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInYears, arginfo_chronos_chronos_diffinyears, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInWeeks, arginfo_chronos_chronos_diffinweeks, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInDays, arginfo_chronos_chronos_diffindays, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, diffInMicroseconds, arginfo_chronos_chronos_diffinmicroseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, between, arginfo_chronos_chronos_between, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, eq, arginfo_chronos_chronos_eq, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, ne, arginfo_chronos_chronos_ne, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, gt, arginfo_chronos_chronos_gt, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, gte, arginfo_chronos_chronos_gte, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, lt, arginfo_chronos_chronos_lt, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, lte, arginfo_chronos_chronos_lte, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameDay, arginfo_chronos_chronos_issameday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameMonth, arginfo_chronos_chronos_issamemonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameQuarter, arginfo_chronos_chronos_issamequarter, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameYear, arginfo_chronos_chronos_issameyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameWeek, arginfo_chronos_chronos_issameweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameHour, arginfo_chronos_chronos_issamehour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameMinute, arginfo_chronos_chronos_issameminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, isSameSecond, arginfo_chronos_chronos_issamesecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, __toString, arginfo_chronos_chronos___tostring, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_Chronos, parse, arginfo_chronos_chronos_parse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Chronos_Chronos, now, arginfo_chronos_chronos_now, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
PHP_ME(Chronos_Chronos, copy, arginfo_chronos_chronos_copy, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
