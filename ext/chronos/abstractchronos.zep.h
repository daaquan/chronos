
extern zend_class_entry *chronos_abstractchronos_ce;

ZEPHIR_INIT_CLASS(Chronos_AbstractChronos);

PHP_METHOD(Chronos_AbstractChronos, __construct);
PHP_METHOD(Chronos_AbstractChronos, setTimeZone);
PHP_METHOD(Chronos_AbstractChronos, parse);
PHP_METHOD(Chronos_AbstractChronos, now);
PHP_METHOD(Chronos_AbstractChronos, copy);
PHP_METHOD(Chronos_AbstractChronos, format);
PHP_METHOD(Chronos_AbstractChronos, locale);
PHP_METHOD(Chronos_AbstractChronos, toDateTime);
PHP_METHOD(Chronos_AbstractChronos, toDateTimeImmutable);
PHP_METHOD(Chronos_AbstractChronos, toDateTimeString);
PHP_METHOD(Chronos_AbstractChronos, toDateString);
PHP_METHOD(Chronos_AbstractChronos, toDateWeekString);
PHP_METHOD(Chronos_AbstractChronos, toTimeString);
PHP_METHOD(Chronos_AbstractChronos, toDayOfWeekString);
PHP_METHOD(Chronos_AbstractChronos, toDayOfWeekShortString);
PHP_METHOD(Chronos_AbstractChronos, toDayOfYearString);
PHP_METHOD(Chronos_AbstractChronos, toWeekOfYearString);
PHP_METHOD(Chronos_AbstractChronos, toMonthString);
PHP_METHOD(Chronos_AbstractChronos, toMonthShortString);
PHP_METHOD(Chronos_AbstractChronos, toYearString);
PHP_METHOD(Chronos_AbstractChronos, toIso8601String);
PHP_METHOD(Chronos_AbstractChronos, today);
PHP_METHOD(Chronos_AbstractChronos, tomorrow);
PHP_METHOD(Chronos_AbstractChronos, yesterday);
PHP_METHOD(Chronos_AbstractChronos, thisWeek);
PHP_METHOD(Chronos_AbstractChronos, nextWeek);
PHP_METHOD(Chronos_AbstractChronos, lastWeek);
PHP_METHOD(Chronos_AbstractChronos, thisMonth);
PHP_METHOD(Chronos_AbstractChronos, nextMonth);
PHP_METHOD(Chronos_AbstractChronos, lastMonth);
PHP_METHOD(Chronos_AbstractChronos, thisYear);
PHP_METHOD(Chronos_AbstractChronos, nextYear);
PHP_METHOD(Chronos_AbstractChronos, lastYear);
PHP_METHOD(Chronos_AbstractChronos, startOfDay);
PHP_METHOD(Chronos_AbstractChronos, startOfMonth);
PHP_METHOD(Chronos_AbstractChronos, startOfYear);
PHP_METHOD(Chronos_AbstractChronos, endOfDay);
PHP_METHOD(Chronos_AbstractChronos, endOfMonth);
PHP_METHOD(Chronos_AbstractChronos, endOfYear);
PHP_METHOD(Chronos_AbstractChronos, modify);
PHP_METHOD(Chronos_AbstractChronos, isToday);
PHP_METHOD(Chronos_AbstractChronos, isTomorrow);
PHP_METHOD(Chronos_AbstractChronos, isYesterday);
PHP_METHOD(Chronos_AbstractChronos, isThisWeek);
PHP_METHOD(Chronos_AbstractChronos, isNextWeek);
PHP_METHOD(Chronos_AbstractChronos, isLastWeek);
PHP_METHOD(Chronos_AbstractChronos, isThisMonth);
PHP_METHOD(Chronos_AbstractChronos, isNextMonth);
PHP_METHOD(Chronos_AbstractChronos, isLastMonth);
PHP_METHOD(Chronos_AbstractChronos, isThisYear);
PHP_METHOD(Chronos_AbstractChronos, isNextYear);
PHP_METHOD(Chronos_AbstractChronos, isLastYear);
PHP_METHOD(Chronos_AbstractChronos, isFuture);
PHP_METHOD(Chronos_AbstractChronos, isPast);
PHP_METHOD(Chronos_AbstractChronos, isLeapYear);
PHP_METHOD(Chronos_AbstractChronos, isWeekday);
PHP_METHOD(Chronos_AbstractChronos, isWeekend);
PHP_METHOD(Chronos_AbstractChronos, isMonday);
PHP_METHOD(Chronos_AbstractChronos, isTuesday);
PHP_METHOD(Chronos_AbstractChronos, isWednesday);
PHP_METHOD(Chronos_AbstractChronos, isThursday);
PHP_METHOD(Chronos_AbstractChronos, isFriday);
PHP_METHOD(Chronos_AbstractChronos, isSaturday);
PHP_METHOD(Chronos_AbstractChronos, isSunday);
PHP_METHOD(Chronos_AbstractChronos, isMorning);
PHP_METHOD(Chronos_AbstractChronos, isAfternoon);
PHP_METHOD(Chronos_AbstractChronos, isEvening);
PHP_METHOD(Chronos_AbstractChronos, isNight);
PHP_METHOD(Chronos_AbstractChronos, isMidnight);
PHP_METHOD(Chronos_AbstractChronos, isNoon);
PHP_METHOD(Chronos_AbstractChronos, isDaylightSavingTime);
PHP_METHOD(Chronos_AbstractChronos, isStandardTime);
PHP_METHOD(Chronos_AbstractChronos, isLastDayOfMonth);
PHP_METHOD(Chronos_AbstractChronos, isLastWeekOfMonth);
PHP_METHOD(Chronos_AbstractChronos, isLastWeekOfYear);
PHP_METHOD(Chronos_AbstractChronos, getYear);
PHP_METHOD(Chronos_AbstractChronos, getMonth);
PHP_METHOD(Chronos_AbstractChronos, getDay);
PHP_METHOD(Chronos_AbstractChronos, getHour);
PHP_METHOD(Chronos_AbstractChronos, getMinute);
PHP_METHOD(Chronos_AbstractChronos, getSecond);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecond);
PHP_METHOD(Chronos_AbstractChronos, getDayOfWeek);
PHP_METHOD(Chronos_AbstractChronos, getDayOfYear);
PHP_METHOD(Chronos_AbstractChronos, getWeekOfYear);
PHP_METHOD(Chronos_AbstractChronos, getMonthOfYear);
PHP_METHOD(Chronos_AbstractChronos, getAge);
PHP_METHOD(Chronos_AbstractChronos, getDaysInMonth);
PHP_METHOD(Chronos_AbstractChronos, getDaysInYear);
PHP_METHOD(Chronos_AbstractChronos, getDaysInWeek);
PHP_METHOD(Chronos_AbstractChronos, getMonthsInYear);
PHP_METHOD(Chronos_AbstractChronos, getSecondsInMinute);
PHP_METHOD(Chronos_AbstractChronos, getMinutesInHour);
PHP_METHOD(Chronos_AbstractChronos, getHoursInDay);
PHP_METHOD(Chronos_AbstractChronos, getHoursInWeek);
PHP_METHOD(Chronos_AbstractChronos, getHoursInMonth);
PHP_METHOD(Chronos_AbstractChronos, getHoursInYear);
PHP_METHOD(Chronos_AbstractChronos, getMinutesInWeek);
PHP_METHOD(Chronos_AbstractChronos, getMinutesInMonth);
PHP_METHOD(Chronos_AbstractChronos, getMinutesInYear);
PHP_METHOD(Chronos_AbstractChronos, getSecondsInWeek);
PHP_METHOD(Chronos_AbstractChronos, getSecondsInMonth);
PHP_METHOD(Chronos_AbstractChronos, getSecondsInYear);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInSecond);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInMinute);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInHour);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInDay);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInWeek);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInMonth);
PHP_METHOD(Chronos_AbstractChronos, getMicrosecondsInYear);
PHP_METHOD(Chronos_AbstractChronos, setDateTime);
PHP_METHOD(Chronos_AbstractChronos, setYear);
PHP_METHOD(Chronos_AbstractChronos, setMonth);
PHP_METHOD(Chronos_AbstractChronos, setDay);
PHP_METHOD(Chronos_AbstractChronos, setHour);
PHP_METHOD(Chronos_AbstractChronos, setMinute);
PHP_METHOD(Chronos_AbstractChronos, setSecond);
PHP_METHOD(Chronos_AbstractChronos, setMicrosecond);
PHP_METHOD(Chronos_AbstractChronos, setDayOfWeek);
PHP_METHOD(Chronos_AbstractChronos, setDayOfYear);
PHP_METHOD(Chronos_AbstractChronos, setWeekOfYear);
PHP_METHOD(Chronos_AbstractChronos, setWeekOfMonth);
PHP_METHOD(Chronos_AbstractChronos, setMonthOfYear);
PHP_METHOD(Chronos_AbstractChronos, addYears);
PHP_METHOD(Chronos_AbstractChronos, addMonths);
PHP_METHOD(Chronos_AbstractChronos, addDays);
PHP_METHOD(Chronos_AbstractChronos, addHours);
PHP_METHOD(Chronos_AbstractChronos, addMinutes);
PHP_METHOD(Chronos_AbstractChronos, addSeconds);
PHP_METHOD(Chronos_AbstractChronos, addMicroseconds);
PHP_METHOD(Chronos_AbstractChronos, addWeeks);
PHP_METHOD(Chronos_AbstractChronos, subYears);
PHP_METHOD(Chronos_AbstractChronos, subMonths);
PHP_METHOD(Chronos_AbstractChronos, subDays);
PHP_METHOD(Chronos_AbstractChronos, subHours);
PHP_METHOD(Chronos_AbstractChronos, subMinutes);
PHP_METHOD(Chronos_AbstractChronos, subSeconds);
PHP_METHOD(Chronos_AbstractChronos, subMicroseconds);
PHP_METHOD(Chronos_AbstractChronos, subWeeks);
PHP_METHOD(Chronos_AbstractChronos, diff);
PHP_METHOD(Chronos_AbstractChronos, diffInSeconds);
PHP_METHOD(Chronos_AbstractChronos, diffInMinutes);
PHP_METHOD(Chronos_AbstractChronos, diffInHours);
PHP_METHOD(Chronos_AbstractChronos, diffInMonths);
PHP_METHOD(Chronos_AbstractChronos, diffInYears);
PHP_METHOD(Chronos_AbstractChronos, diffInWeeks);
PHP_METHOD(Chronos_AbstractChronos, diffInDays);
PHP_METHOD(Chronos_AbstractChronos, diffInMicroseconds);
PHP_METHOD(Chronos_AbstractChronos, between);
PHP_METHOD(Chronos_AbstractChronos, eq);
PHP_METHOD(Chronos_AbstractChronos, ne);
PHP_METHOD(Chronos_AbstractChronos, gt);
PHP_METHOD(Chronos_AbstractChronos, gte);
PHP_METHOD(Chronos_AbstractChronos, lt);
PHP_METHOD(Chronos_AbstractChronos, lte);
PHP_METHOD(Chronos_AbstractChronos, __toString);

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, datetime, IS_STRING, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_abstractchronos_settimezone, 0, 1, DateTime, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_parse, 0, 0, 0)
	ZEND_ARG_INFO(0, time)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_now, 0, 0, 0)
	ZEND_ARG_INFO(0, timezone)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_copy, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_locale, 0, 0, 1)
	ZEND_ARG_INFO(0, locale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_abstractchronos_todatetime, 0, 0, DateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_abstractchronos_todatetimeimmutable, 0, 0, DateTimeImmutable, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_todatetimestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_todatestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_todateweekstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_totimestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_todayofweekstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_todayofweekshortstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_todayofyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_toweekofyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_tomonthstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_tomonthshortstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_toyearstring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_toiso8601string, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_today, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_tomorrow, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_yesterday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_thisweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_nextweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_lastweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_thismonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_nextmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_lastmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_thisyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_nextyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_lastyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_startofday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_startofmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_startofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_endofday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_endofmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_endofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_abstractchronos_modify, 0, 1, DateTime, 0)
	ZEND_ARG_TYPE_INFO(0, modifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_istoday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_istomorrow, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isyesterday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isthisweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isnextweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_islastweek, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isthismonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isnextmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_islastmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isthisyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isnextyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_islastyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isfuture, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_ispast, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isleapyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isweekday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isweekend, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_ismonday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_istuesday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_iswednesday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isthursday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isfriday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_issaturday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_issunday, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_ismorning, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isafternoon, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isevening, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isnight, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_ismidnight, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isnoon, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isdaylightsavingtime, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_isstandardtime, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_islastdayofmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_islastweekofmonth, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_islastweekofyear, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getmonth, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getday, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_gethour, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getminute, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getsecond, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecond, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getdayofweek, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getdayofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getweekofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_getmonthofyear, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getage, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getdaysinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getdaysinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getdaysinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmonthsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getsecondsinminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getminutesinhour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_gethoursinday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_gethoursinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_gethoursinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_gethoursinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getminutesinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getminutesinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getminutesinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getsecondsinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getsecondsinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getsecondsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinsecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinminute, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinhour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinday, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinweek, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinmonth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_getmicrosecondsinyear, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setdatetime, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, dateTime, DateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setmonth, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setday, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_sethour, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hour, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setminute, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minute, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setsecond, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, second, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setmicrosecond, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microsecond, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setdayofweek, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, dayOfWeek, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setdayofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, dayOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setweekofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weekOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setweekofmonth, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weekOfMonth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_setmonthofyear, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, monthOfYear, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addyears, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addmonths, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_adddays, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addhours, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hours, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addminutes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minutes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addmicroseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_addweeks, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weeks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_subyears, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_submonths, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_subdays, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_subhours, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hours, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_subminutes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, minutes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_subseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_submicroseconds, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, microseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_subweeks, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, weeks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_chronos_abstractchronos_diff, 0, 1, DateInterval, 0)
	ZEND_ARG_OBJ_INFO(0, targetObject, DateTimeInterface, 0)
	ZEND_ARG_TYPE_INFO(0, absolute, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinseconds, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinminutes, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinhours, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinmonths, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinyears, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinweeks, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffindays, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_INFO(0, abs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chronos_abstractchronos_diffinmicroseconds, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
	ZEND_ARG_TYPE_INFO(0, abs, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_between, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, start)
	ZEND_ARG_INFO(0, end)
	ZEND_ARG_TYPE_INFO(0, equal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_eq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_ne, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_gt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_gte, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_lt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos_lte, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dateTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chronos_abstractchronos___tostring, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(chronos_abstractchronos_method_entry) {
	PHP_ME(Chronos_AbstractChronos, __construct, arginfo_chronos_abstractchronos___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Chronos_AbstractChronos, setTimeZone, arginfo_chronos_abstractchronos_settimezone, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, parse, arginfo_chronos_abstractchronos_parse, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Chronos_AbstractChronos, now, arginfo_chronos_abstractchronos_now, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, copy, arginfo_chronos_abstractchronos_copy, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, copy, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
#endif
	PHP_ME(Chronos_AbstractChronos, format, arginfo_chronos_abstractchronos_format, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, locale, arginfo_chronos_abstractchronos_locale, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, toDateTime, arginfo_chronos_abstractchronos_todatetime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, toDateTimeImmutable, arginfo_chronos_abstractchronos_todatetimeimmutable, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toDateTimeString, arginfo_chronos_abstractchronos_todatetimestring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toDateTimeString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toDateString, arginfo_chronos_abstractchronos_todatestring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toDateString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toDateWeekString, arginfo_chronos_abstractchronos_todateweekstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toDateWeekString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toTimeString, arginfo_chronos_abstractchronos_totimestring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toTimeString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toDayOfWeekString, arginfo_chronos_abstractchronos_todayofweekstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toDayOfWeekString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toDayOfWeekShortString, arginfo_chronos_abstractchronos_todayofweekshortstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toDayOfWeekShortString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toDayOfYearString, arginfo_chronos_abstractchronos_todayofyearstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toDayOfYearString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toWeekOfYearString, arginfo_chronos_abstractchronos_toweekofyearstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toWeekOfYearString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toMonthString, arginfo_chronos_abstractchronos_tomonthstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toMonthString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toMonthShortString, arginfo_chronos_abstractchronos_tomonthshortstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toMonthShortString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toYearString, arginfo_chronos_abstractchronos_toyearstring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toYearString, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, toIso8601String, arginfo_chronos_abstractchronos_toiso8601string, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, toIso8601String, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, today, arginfo_chronos_abstractchronos_today, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, today, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, tomorrow, arginfo_chronos_abstractchronos_tomorrow, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, tomorrow, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, yesterday, arginfo_chronos_abstractchronos_yesterday, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, yesterday, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, thisWeek, arginfo_chronos_abstractchronos_thisweek, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, thisWeek, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, nextWeek, arginfo_chronos_abstractchronos_nextweek, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, nextWeek, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, lastWeek, arginfo_chronos_abstractchronos_lastweek, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, lastWeek, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, thisMonth, arginfo_chronos_abstractchronos_thismonth, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, thisMonth, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, nextMonth, arginfo_chronos_abstractchronos_nextmonth, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, nextMonth, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, lastMonth, arginfo_chronos_abstractchronos_lastmonth, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, lastMonth, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, thisYear, arginfo_chronos_abstractchronos_thisyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, thisYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, nextYear, arginfo_chronos_abstractchronos_nextyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, nextYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, lastYear, arginfo_chronos_abstractchronos_lastyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, lastYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, startOfDay, arginfo_chronos_abstractchronos_startofday, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, startOfDay, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, startOfMonth, arginfo_chronos_abstractchronos_startofmonth, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, startOfMonth, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, startOfYear, arginfo_chronos_abstractchronos_startofyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, startOfYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, endOfDay, arginfo_chronos_abstractchronos_endofday, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, endOfDay, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, endOfMonth, arginfo_chronos_abstractchronos_endofmonth, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, endOfMonth, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, endOfYear, arginfo_chronos_abstractchronos_endofyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, endOfYear, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_ME(Chronos_AbstractChronos, modify, arginfo_chronos_abstractchronos_modify, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isToday, arginfo_chronos_abstractchronos_istoday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isTomorrow, arginfo_chronos_abstractchronos_istomorrow, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isYesterday, arginfo_chronos_abstractchronos_isyesterday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isThisWeek, arginfo_chronos_abstractchronos_isthisweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isNextWeek, arginfo_chronos_abstractchronos_isnextweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLastWeek, arginfo_chronos_abstractchronos_islastweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isThisMonth, arginfo_chronos_abstractchronos_isthismonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isNextMonth, arginfo_chronos_abstractchronos_isnextmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLastMonth, arginfo_chronos_abstractchronos_islastmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isThisYear, arginfo_chronos_abstractchronos_isthisyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isNextYear, arginfo_chronos_abstractchronos_isnextyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLastYear, arginfo_chronos_abstractchronos_islastyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isFuture, arginfo_chronos_abstractchronos_isfuture, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isPast, arginfo_chronos_abstractchronos_ispast, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLeapYear, arginfo_chronos_abstractchronos_isleapyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isWeekday, arginfo_chronos_abstractchronos_isweekday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isWeekend, arginfo_chronos_abstractchronos_isweekend, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isMonday, arginfo_chronos_abstractchronos_ismonday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isTuesday, arginfo_chronos_abstractchronos_istuesday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isWednesday, arginfo_chronos_abstractchronos_iswednesday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isThursday, arginfo_chronos_abstractchronos_isthursday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isFriday, arginfo_chronos_abstractchronos_isfriday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isSaturday, arginfo_chronos_abstractchronos_issaturday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isSunday, arginfo_chronos_abstractchronos_issunday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isMorning, arginfo_chronos_abstractchronos_ismorning, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isAfternoon, arginfo_chronos_abstractchronos_isafternoon, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isEvening, arginfo_chronos_abstractchronos_isevening, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isNight, arginfo_chronos_abstractchronos_isnight, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isMidnight, arginfo_chronos_abstractchronos_ismidnight, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isNoon, arginfo_chronos_abstractchronos_isnoon, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isDaylightSavingTime, arginfo_chronos_abstractchronos_isdaylightsavingtime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isStandardTime, arginfo_chronos_abstractchronos_isstandardtime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLastDayOfMonth, arginfo_chronos_abstractchronos_islastdayofmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLastWeekOfMonth, arginfo_chronos_abstractchronos_islastweekofmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, isLastWeekOfYear, arginfo_chronos_abstractchronos_islastweekofyear, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getYear, arginfo_chronos_abstractchronos_getyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getMonth, arginfo_chronos_abstractchronos_getmonth, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getMonth, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getDay, arginfo_chronos_abstractchronos_getday, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getDay, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getHour, arginfo_chronos_abstractchronos_gethour, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getHour, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getMinute, arginfo_chronos_abstractchronos_getminute, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getMinute, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getSecond, arginfo_chronos_abstractchronos_getsecond, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getSecond, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getMicrosecond, arginfo_chronos_abstractchronos_getmicrosecond, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getMicrosecond, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getDayOfWeek, arginfo_chronos_abstractchronos_getdayofweek, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getDayOfWeek, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getDayOfYear, arginfo_chronos_abstractchronos_getdayofyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getDayOfYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getWeekOfYear, arginfo_chronos_abstractchronos_getweekofyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getWeekOfYear, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Chronos_AbstractChronos, getMonthOfYear, arginfo_chronos_abstractchronos_getmonthofyear, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Chronos_AbstractChronos, getMonthOfYear, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_ME(Chronos_AbstractChronos, getAge, arginfo_chronos_abstractchronos_getage, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getDaysInMonth, arginfo_chronos_abstractchronos_getdaysinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getDaysInYear, arginfo_chronos_abstractchronos_getdaysinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getDaysInWeek, arginfo_chronos_abstractchronos_getdaysinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMonthsInYear, arginfo_chronos_abstractchronos_getmonthsinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getSecondsInMinute, arginfo_chronos_abstractchronos_getsecondsinminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMinutesInHour, arginfo_chronos_abstractchronos_getminutesinhour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getHoursInDay, arginfo_chronos_abstractchronos_gethoursinday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getHoursInWeek, arginfo_chronos_abstractchronos_gethoursinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getHoursInMonth, arginfo_chronos_abstractchronos_gethoursinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getHoursInYear, arginfo_chronos_abstractchronos_gethoursinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMinutesInWeek, arginfo_chronos_abstractchronos_getminutesinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMinutesInMonth, arginfo_chronos_abstractchronos_getminutesinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMinutesInYear, arginfo_chronos_abstractchronos_getminutesinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getSecondsInWeek, arginfo_chronos_abstractchronos_getsecondsinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getSecondsInMonth, arginfo_chronos_abstractchronos_getsecondsinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getSecondsInYear, arginfo_chronos_abstractchronos_getsecondsinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInSecond, arginfo_chronos_abstractchronos_getmicrosecondsinsecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInMinute, arginfo_chronos_abstractchronos_getmicrosecondsinminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInHour, arginfo_chronos_abstractchronos_getmicrosecondsinhour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInDay, arginfo_chronos_abstractchronos_getmicrosecondsinday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInWeek, arginfo_chronos_abstractchronos_getmicrosecondsinweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInMonth, arginfo_chronos_abstractchronos_getmicrosecondsinmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, getMicrosecondsInYear, arginfo_chronos_abstractchronos_getmicrosecondsinyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setDateTime, arginfo_chronos_abstractchronos_setdatetime, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setYear, arginfo_chronos_abstractchronos_setyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setMonth, arginfo_chronos_abstractchronos_setmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setDay, arginfo_chronos_abstractchronos_setday, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setHour, arginfo_chronos_abstractchronos_sethour, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setMinute, arginfo_chronos_abstractchronos_setminute, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setSecond, arginfo_chronos_abstractchronos_setsecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setMicrosecond, arginfo_chronos_abstractchronos_setmicrosecond, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setDayOfWeek, arginfo_chronos_abstractchronos_setdayofweek, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setDayOfYear, arginfo_chronos_abstractchronos_setdayofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setWeekOfYear, arginfo_chronos_abstractchronos_setweekofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setWeekOfMonth, arginfo_chronos_abstractchronos_setweekofmonth, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, setMonthOfYear, arginfo_chronos_abstractchronos_setmonthofyear, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addYears, arginfo_chronos_abstractchronos_addyears, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addMonths, arginfo_chronos_abstractchronos_addmonths, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addDays, arginfo_chronos_abstractchronos_adddays, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addHours, arginfo_chronos_abstractchronos_addhours, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addMinutes, arginfo_chronos_abstractchronos_addminutes, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addSeconds, arginfo_chronos_abstractchronos_addseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addMicroseconds, arginfo_chronos_abstractchronos_addmicroseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, addWeeks, arginfo_chronos_abstractchronos_addweeks, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subYears, arginfo_chronos_abstractchronos_subyears, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subMonths, arginfo_chronos_abstractchronos_submonths, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subDays, arginfo_chronos_abstractchronos_subdays, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subHours, arginfo_chronos_abstractchronos_subhours, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subMinutes, arginfo_chronos_abstractchronos_subminutes, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subSeconds, arginfo_chronos_abstractchronos_subseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subMicroseconds, arginfo_chronos_abstractchronos_submicroseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, subWeeks, arginfo_chronos_abstractchronos_subweeks, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diff, arginfo_chronos_abstractchronos_diff, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInSeconds, arginfo_chronos_abstractchronos_diffinseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInMinutes, arginfo_chronos_abstractchronos_diffinminutes, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInHours, arginfo_chronos_abstractchronos_diffinhours, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInMonths, arginfo_chronos_abstractchronos_diffinmonths, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInYears, arginfo_chronos_abstractchronos_diffinyears, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInWeeks, arginfo_chronos_abstractchronos_diffinweeks, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInDays, arginfo_chronos_abstractchronos_diffindays, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, diffInMicroseconds, arginfo_chronos_abstractchronos_diffinmicroseconds, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, between, arginfo_chronos_abstractchronos_between, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, eq, arginfo_chronos_abstractchronos_eq, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, ne, arginfo_chronos_abstractchronos_ne, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, gt, arginfo_chronos_abstractchronos_gt, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, gte, arginfo_chronos_abstractchronos_gte, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, lt, arginfo_chronos_abstractchronos_lt, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, lte, arginfo_chronos_abstractchronos_lte, ZEND_ACC_PUBLIC)
	PHP_ME(Chronos_AbstractChronos, __toString, arginfo_chronos_abstractchronos___tostring, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
