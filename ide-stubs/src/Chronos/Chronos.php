<?php

namespace Chronos;

use DateTime;

/**
 * Carbon like DateTime class for PHP 8.0+
 */
class Chronos extends \DateTime
{
    const MYSQL_DATE_FORMAT = 'Y-m-d';

    const MYSQL_TIME_FORMAT = 'H:i:s';

    const MYSQL_DATETIME_FORMAT = 'Y-m-d H:i:s';

    const MYSQL_DATETIME_MILLISEC_FORMAT = 'Y-m-d H:i:s.v';

    const MYSQL_DATETIME_MICROSEC_FORMAT = 'Y-m-d H:i:s.u';

    /**
     * @param  mixed  $timezone
     */
    public function __construct(string $datetime = 'now', $timezone = null)
    {
    }

    /**
     * @param  mixed  $timezone
     * @return $this
     */
    public function setTimeZone($timezone)
    {
    }

    /**
     * @param  mixed  $time
     * @param  mixed  $timezone
     */
    public static function parse($time = 'now', $timezone = null)
    {
    }

    /**
     * @param  mixed  $timezone
     */
    public static function now($timezone = null)
    {
    }

    /**
     * @return $this
     */
    public function copy()
    {
    }

    /**
     * @param  mixed  $format
     * @param  mixed  $locale
     */
    public function format($format, $locale = null): string
    {
    }

    /**
     * @param  mixed  $locale
     */
    public function locale($locale)
    {
    }

    public function toDateTime()
    {
    }

    public function toDateTimeImmutable()
    {
    }

    public function toDateTimeString()
    {
    }

    public function toDateString()
    {
    }

    public function toDateWeekString()
    {
    }

    public function toTimeString()
    {
    }

    public function toDayOfWeekString()
    {
    }

    public function toDayOfWeekShortString()
    {
    }

    public function toDayOfYearString()
    {
    }

    public function toWeekOfYearString()
    {
    }

    public function toMonthString()
    {
    }

    public function toMonthShortString()
    {
    }

    public function toYearString()
    {
    }

    public function toIso8601String()
    {
    }

    public function today()
    {
    }

    public function tomorrow()
    {
    }

    public function yesterday()
    {
    }

    public function thisWeek()
    {
    }

    public function nextWeek()
    {
    }

    public function lastWeek()
    {
    }

    public function thisMonth()
    {
    }

    public function nextMonth()
    {
    }

    public function lastMonth()
    {
    }

    public function thisYear()
    {
    }

    public function nextYear()
    {
    }

    public function lastYear()
    {
    }

    public function startOfDay()
    {
    }

    public function startOfMonth()
    {
    }

    public function startOfYear()
    {
    }

    public function endOfDay()
    {
    }

    public function endOfMonth()
    {
    }

    public function endOfYear()
    {
    }

    /**
     * @return false|\DateTime
     */
    public function modify(string $modifier): DateTime
    {
    }

    public function isToday()
    {
    }

    public function isTomorrow()
    {
    }

    public function isYesterday()
    {
    }

    public function isThisWeek()
    {
    }

    public function isNextWeek()
    {
    }

    public function isLastWeek()
    {
    }

    public function isThisMonth()
    {
    }

    public function isNextMonth()
    {
    }

    public function isLastMonth()
    {
    }

    public function isThisYear()
    {
    }

    public function isNextYear()
    {
    }

    public function isLastYear()
    {
    }

    public function isFuture()
    {
    }

    public function isPast()
    {
    }

    public function isLeapYear()
    {
    }

    public function isLongYear()
    {
    }

    public function isWeekday()
    {
    }

    public function isWeekend()
    {
    }

    public function isMonday()
    {
    }

    public function isTuesday()
    {
    }

    public function isWednesday()
    {
    }

    public function isThursday()
    {
    }

    public function isFriday()
    {
    }

    public function isSaturday()
    {
    }

    public function isSunday()
    {
    }

    public function isMorning()
    {
    }

    public function isAfternoon()
    {
    }

    public function isEvening()
    {
    }

    public function isNight()
    {
    }

    public function isMidnight()
    {
    }

    public function isNoon()
    {
    }

    public function isDaylightSavingTime()
    {
    }

    public function isStandardTime()
    {
    }

    public function isLastDayOfMonth()
    {
    }

    public function isLastWeekOfMonth()
    {
    }

    public function isLastWeekOfYear()
    {
    }

    /**
     * @return $this
     */
    public function getDateTime()
    {
    }

    public function getYear(): int
    {
    }

    public function getMonth(): int
    {
    }

    public function getDay()
    {
    }

    public function getHour(): int
    {
    }

    public function getMinute(): int
    {
    }

    public function getSecond(): int
    {
    }

    public function getMicrosecond(): int
    {
    }

    public function getDayOfWeek(): int
    {
    }

    public function getDayOfYear(): int
    {
    }

    public function getWeekOfYear(): int
    {
    }

    public function getWeekOfMonth(): int
    {
    }

    public function getMonthOfYear(): int
    {
    }

    public function getTimestamp(): int
    {
    }

    public function getAge(): int
    {
    }

    public function getDaysInMonth(): int
    {
    }

    public function getDaysInYear(): int
    {
    }

    public function getDaysInWeek(): int
    {
    }

    public function getMonthsInYear(): int
    {
    }

    public function getSecondsInMinute(): int
    {
    }

    public function getMinutesInHour(): int
    {
    }

    public function getHoursInDay(): int
    {
    }

    public function getHoursInWeek(): int
    {
    }

    public function getHoursInMonth(): int
    {
    }

    public function getHoursInYear(): int
    {
    }

    public function getMinutesInWeek(): int
    {
    }

    public function getMinutesInMonth(): int
    {
    }

    public function getMinutesInYear(): int
    {
    }

    public function getSecondsInWeek(): int
    {
    }

    public function getSecondsInMonth(): int
    {
    }

    public function getSecondsInYear(): int
    {
    }

    public function getMicrosecondsInSecond(): int
    {
    }

    public function getMicrosecondsInMinute(): int
    {
    }

    public function getMicrosecondsInHour(): int
    {
    }

    public function getMicrosecondsInDay(): int
    {
    }

    public function getMicrosecondsInWeek(): int
    {
    }

    public function getMicrosecondsInMonth(): int
    {
    }

    public function getMicrosecondsInYear(): int
    {
    }

    public function setDateTime(DateTime $dateTime): DateTime
    {
    }

    /**
     * @param  mixed  $year
     */
    public function setYear($year)
    {
    }

    /**
     * @param  mixed  $month
     */
    public function setMonth($month)
    {
    }

    /**
     * @param  mixed  $day
     */
    public function setDay($day)
    {
    }

    /**
     * @param  mixed  $hour
     */
    public function setHour($hour)
    {
    }

    /**
     * @param  mixed  $minute
     */
    public function setMinute($minute)
    {
    }

    /**
     * @param  mixed  $second
     */
    public function setSecond($second)
    {
    }

    /**
     * @param  mixed  $microsecond
     */
    public function setMicrosecond($microsecond)
    {
    }

    /**
     * @param  mixed  $dayOfWeek
     */
    public function setDayOfWeek($dayOfWeek)
    {
    }

    /**
     * @param  mixed  $dayOfYear
     */
    public function setDayOfYear($dayOfYear)
    {
    }

    /**
     * @param  mixed  $weekOfYear
     */
    public function setWeekOfYear($weekOfYear)
    {
    }

    /**
     * @param  mixed  $weekOfMonth
     */
    public function setWeekOfMonth($weekOfMonth)
    {
    }

    /**
     * @param  mixed  $monthOfYear
     */
    public function setMonthOfYear($monthOfYear)
    {
    }

    /**
     * @param  mixed  $millennium
     */
    public function setMillennium($millennium)
    {
    }

    /**
     * @param  mixed  $years
     */
    public function addYears($years)
    {
    }

    /**
     * @param  mixed  $months
     */
    public function addMonths($months)
    {
    }

    /**
     * @param  mixed  $days
     */
    public function addDays($days)
    {
    }

    /**
     * @param  mixed  $hours
     */
    public function addHours($hours)
    {
    }

    /**
     * @param  mixed  $minutes
     */
    public function addMinutes($minutes)
    {
    }

    /**
     * @param  mixed  $seconds
     */
    public function addSeconds($seconds)
    {
    }

    /**
     * @param  mixed  $microseconds
     */
    public function addMicroseconds($microseconds)
    {
    }

    /**
     * @param  mixed  $weeks
     */
    public function addWeeks($weeks)
    {
    }

    /**
     * @param  mixed  $years
     */
    public function subYears($years)
    {
    }

    /**
     * @param  mixed  $months
     */
    public function subMonths($months)
    {
    }

    /**
     * @param  mixed  $days
     */
    public function subDays($days)
    {
    }

    /**
     * @param  mixed  $hours
     */
    public function subHours($hours)
    {
    }

    /**
     * @param  mixed  $minutes
     */
    public function subMinutes($minutes)
    {
    }

    /**
     * @param  mixed  $seconds
     */
    public function subSeconds($seconds)
    {
    }

    /**
     * @param  mixed  $microseconds
     */
    public function subMicroseconds($microseconds)
    {
    }

    /**
     * @param  mixed  $weeks
     */
    public function subWeeks($weeks)
    {
    }

    public function diff(\DateTimeInterface $targetObject, bool $absolute = false): \DateInterval
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInSeconds($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInMinutes($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInHours($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInMonths($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInYears($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInWeeks($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInDays($other, $abs = true)
    {
    }

    /**
     * @param  \DateTimeInterface  $other
     * @param  bool  $abs
     */
    public function diffInMicroseconds($other, $abs = true)
    {
    }

    /**
     * @param  mixed  $start
     * @param  mixed  $end
     * @param  mixed  $equal
     */
    public function between($start, $end, $equal = true)
    {
    }

    /**
     * @param  mixed  $dateTime
     */
    public function eq($dateTime)
    {
    }

    /**
     * @param  mixed  $dateTime
     */
    public function ne($dateTime)
    {
    }

    /**
     * @param  mixed  $dateTime
     */
    public function gt($dateTime)
    {
    }

    /**
     * @param  mixed  $dateTime
     */
    public function gte($dateTime)
    {
    }

    /**
     * @param  mixed  $dateTime
     */
    public function lt($dateTime)
    {
    }

    /**
     * @param  mixed  $dateTime
     */
    public function lte($dateTime)
    {
    }

    public function __toString(): string
    {
    }
}
