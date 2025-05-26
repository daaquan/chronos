
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Carbonクラスのような日付と時間の操作を行う
 */
ZEPHIR_INIT_CLASS(Chronos_ChronosInterface)
{
	ZEPHIR_REGISTER_INTERFACE(Chronos, ChronosInterface, chronos, chronosinterface, chronos_chronosinterface_method_entry);

	zephir_declare_class_constant_string(chronos_chronosinterface_ce, SL("MYSQL_DATE_FORMAT"), "Y-m-d");

	zephir_declare_class_constant_string(chronos_chronosinterface_ce, SL("MYSQL_TIME_FORMAT"), "H:i:s");

	zephir_declare_class_constant_string(chronos_chronosinterface_ce, SL("MYSQL_DATETIME_FORMAT"), "Y-m-d H:i:s");

	zephir_declare_class_constant_string(chronos_chronosinterface_ce, SL("MYSQL_DATETIME_MILLISEC_FORMAT"), "Y-m-d H:i:s.v");

	zephir_declare_class_constant_string(chronos_chronosinterface_ce, SL("MYSQL_DATETIME_MICROSEC_FORMAT"), "Y-m-d H:i:s.u");

	return SUCCESS;
}

ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setTimeZone);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, parse);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, now);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, copy);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, format);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, locale);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDateTime);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDateTimeImmutable);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDateTimeString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDateString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDateWeekString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toTimeString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDayOfWeekString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDayOfWeekShortString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toDayOfYearString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toWeekOfYearString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toMonthString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toMonthShortString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toYearString);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, toIso8601String);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, today);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, tomorrow);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, yesterday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, thisWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, nextWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, lastWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, thisMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, nextMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, lastMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, thisYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, nextYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, lastYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, startOfDay);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, startOfMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, startOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, endOfDay);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, endOfMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, endOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, modify);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isToday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isTomorrow);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isYesterday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isThisWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isNextWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLastWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isThisMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isNextMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLastMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isThisYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isNextYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLastYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isFuture);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isPast);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLeapYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isWeekday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isWeekend);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isMonday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isTuesday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isWednesday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isThursday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isFriday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isSaturday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isSunday);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isMorning);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isAfternoon);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isEvening);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isNight);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isMidnight);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isNoon);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isDaylightSavingTime);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isStandardTime);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLastDayOfMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLastWeekOfMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, isLastWeekOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getDay);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getHour);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMinute);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getSecond);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecond);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getDayOfWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getDayOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getWeekOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMonthOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getAge);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getDaysInMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getDaysInYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getDaysInWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMonthsInYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getSecondsInMinute);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMinutesInHour);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getHoursInDay);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getHoursInWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getHoursInMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getHoursInYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMinutesInWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMinutesInMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMinutesInYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getSecondsInWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getSecondsInMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getSecondsInYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInSecond);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInMinute);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInHour);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInDay);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, getMicrosecondsInYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setDateTime);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setDay);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setHour);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setMinute);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setSecond);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setDayOfWeek);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setDayOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setWeekOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setWeekOfMonth);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, setMonthOfYear);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addYears);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addMonths);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addDays);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addHours);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addMinutes);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addSeconds);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addMicroseconds);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, addWeeks);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subYears);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subMonths);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subDays);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subHours);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subMinutes);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subSeconds);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subMicroseconds);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, subWeeks);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diff);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInSeconds);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInMinutes);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInHours);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInMonths);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInYears);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInWeeks);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInDays);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, diffInMicroseconds);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, between);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, eq);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, ne);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, gt);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, gte);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, lt);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, lte);
ZEPHIR_DOC_METHOD(Chronos_ChronosInterface, __toString);
