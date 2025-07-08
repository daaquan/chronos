<?php

namespace Chronos;

use Chronos\Chronos\ChronosInterface;

/**
 * Provides Carbon-like date and time utilities.
 */
class Chronos extends \DateTime implements ChronosInterface
{
    /**
     * __construct
     * @param \DateTimeZone|string|null $timezone
     */
    public function __construct(string $datetime = 'now', $timezone = null)
    {
    }

    /**
     * Set time zone
     * @param mixed $timezone
     */
    public function setTimeZone($timezone): static
    {
    }

    /**
     * parse
     * @param string|null $time
     * @param \DateTimeZone|string|null $timezone
     * @return static
     */
    public static function parse($time = 'now', $timezone = null): static
    {
    }

    /**
     * now
     * @param \DateTimeZone|string $timezone
     */
    public static function now($timezone = null): static
    {
    }

    /**
     * copy
     */
    public function copy(): static
    {
    }

    /**
     * format
     */
    public function format(string $format, string $locale = null): string
    {
    }

    /**
     * locale
     * @param mixed $locale
     */
    public function locale($locale)
    {
    }

    /**
     * Return date time
     */
    public function toDateTime(): \DateTime
    {
    }

    /**
     * Return date time immutable
     */
    public function toDateTimeImmutable(): \DateTimeImmutable
    {
    }

    /**
     * Return date time string
     */
    public function toDateTimeString()
    {
    }

    /**
     * Return date string
     */
    public function toDateString()
    {
    }

    /**
     * Return date week string
     */
    public function toDateWeekString()
    {
    }

    /**
     * Return time string
     */
    public function toTimeString()
    {
    }

    /**
     * Return day of week string
     */
    public function toDayOfWeekString()
    {
    }

    /**
     * Return day of week short string
     */
    public function toDayOfWeekShortString()
    {
    }

    /**
     * Return day of year string
     */
    public function toDayOfYearString()
    {
    }

    /**
     * Return week of year string
     */
    public function toWeekOfYearString()
    {
    }

    /**
     * Return month string
     */
    public function toMonthString()
    {
    }

    /**
     * Return month short string
     */
    public function toMonthShortString()
    {
    }

    /**
     * Return year string
     */
    public function toYearString()
    {
    }

    /**
     * Return iso8601 string
     */
    public function toIso8601String()
    {
    }

    /**
     * Return day
     * @return static
     */
    public function today()
    {
    }

    /**
     * Return morrow
     * @return static
     */
    public function tomorrow()
    {
    }

    /**
     * Return an instance for yesterday
     * @return static
     */
    public function yesterday()
    {
    }

    /**
     * Return an instance for this week
     * @return static
     */
    public function thisWeek()
    {
    }

    /**
     * Return an instance for next week
     * @return static
     */
    public function nextWeek()
    {
    }

    /**
     * Return an instance for last week
     * @return static
     */
    public function lastWeek()
    {
    }

    /**
     * Return an instance for this month
     * @return static
     */
    public function thisMonth()
    {
    }

    /**
     * Return an instance for next month
     * @return static
     */
    public function nextMonth()
    {
    }

    /**
     * Return an instance for last month
     * @return static
     */
    public function lastMonth()
    {
    }

    /**
     * Return an instance for this year
     * @return static
     */
    public function thisYear()
    {
    }

    /**
     * Return an instance for next year
     * @return static
     */
    public function nextYear()
    {
    }

    /**
     * Return an instance for last year
     * @return static
     */
    public function lastYear()
    {
    }

    /**
     * Return an instance for start of day
     * @return static
     */
    public function startOfDay()
    {
    }

    /**
     * Return an instance for start of week
     * @return static
     */
    public function startOfWeek()
    {
    }

    /**
     * Return an instance for start of month
     * @return static
     */
    public function startOfMonth()
    {
    }

    /**
     * Return an instance for start of year
     * @return static
     */
    public function startOfYear()
    {
    }

    /**
     * Return an instance for end of day
     * @return static
     */
    public function endOfDay()
    {
    }

    /**
     * Return an instance for end of week
     * @return static
     */
    public function endOfWeek()
    {
    }

    /**
     * Return an instance for end of month
     * @return static
     */
    public function endOfMonth()
    {
    }

    /**
     * Return an instance for end of year
     * @return static
     */
    public function endOfYear()
    {
    }

    /**
     * modify
     * @return static
     */
    public function modify(string $modifier): \DateTime
    {
    }

    /**
     * Check if today
     */
    public function isToday(): bool
    {
    }

    /**
     * Check if tomorrow
     */
    public function isTomorrow(): bool
    {
    }

    /**
     * Check if yesterday
     */
    public function isYesterday(): bool
    {
    }

    /**
     * Check if this week
     */
    public function isThisWeek(): bool
    {
    }

    /**
     * Check if next week
     */
    public function isNextWeek(): bool
    {
    }

    /**
     * Check if last week
     */
    public function isLastWeek(): bool
    {
    }

    /**
     * Check if this month
     */
    public function isThisMonth(): bool
    {
    }

    /**
     * Check if next month
     */
    public function isNextMonth(): bool
    {
    }

    /**
     * Check if last month
     */
    public function isLastMonth(): bool
    {
    }

    /**
     * Check if this year
     */
    public function isThisYear(): bool
    {
    }

    /**
     * Check if next year
     */
    public function isNextYear(): bool
    {
    }

    /**
     * Check if last year
     */
    public function isLastYear(): bool
    {
    }

    /**
     * Check if future
     */
    public function isFuture(): bool
    {
    }

    /**
     * Check if past
     */
    public function isPast(): bool
    {
    }

    /**
     * Check if leap year
     */
    public function isLeapYear(): bool
    {
    }

    /**
     * Check if weekday
     */
    public function isWeekday(): bool
    {
    }

    /**
     * Check if weekend
     */
    public function isWeekend(): bool
    {
    }

    /**
     * Check if monday
     */
    public function isMonday(): bool
    {
    }

    /**
     * Check if tuesday
     */
    public function isTuesday(): bool
    {
    }

    /**
     * Check if wednesday
     */
    public function isWednesday(): bool
    {
    }

    /**
     * Check if thursday
     */
    public function isThursday(): bool
    {
    }

    /**
     * Check if friday
     */
    public function isFriday(): bool
    {
    }

    /**
     * Check if saturday
     */
    public function isSaturday(): bool
    {
    }

    /**
     * Check if sunday
     */
    public function isSunday(): bool
    {
    }

    /**
     * Check if morning
     */
    public function isMorning(): bool
    {
    }

    /**
     * Check if afternoon
     */
    public function isAfternoon(): bool
    {
    }

    /**
     * Check if evening
     */
    public function isEvening(): bool
    {
    }

    /**
     * Check if night
     */
    public function isNight(): bool
    {
    }

    /**
     * Check if midnight
     */
    public function isMidnight(): bool
    {
    }

    /**
     * Check if noon
     */
    public function isNoon(): bool
    {
    }

    /**
     * Check if daylight saving time
     */
    public function isDaylightSavingTime(): bool
    {
    }

    /**
     * Check if standard time
     */
    public function isStandardTime(): bool
    {
    }

    /**
     * Check if last day of month
     */
    public function isLastDayOfMonth(): bool
    {
    }

    /**
     * Check if last week of month
     */
    public function isLastWeekOfMonth(): bool
    {
    }

    /**
     * Check if last week of year
     */
    public function isLastWeekOfYear(): bool
    {
    }

    /**
     * Get year
     */
    public function getYear()
    {
    }

    /**
     * Get month
     */
    public function getMonth()
    {
    }

    /**
     * Get day
     */
    public function getDay()
    {
    }

    /**
     * Get hour
     */
    public function getHour()
    {
    }

    /**
     * Get minute
     */
    public function getMinute()
    {
    }

    /**
     * Get second
     */
    public function getSecond()
    {
    }

    /**
     * Get microsecond
     */
    public function getMicrosecond()
    {
    }

    /**
     * Get day of week
     */
    public function getDayOfWeek()
    {
    }

    /**
     * Get day of year
     */
    public function getDayOfYear()
    {
    }

    /**
     * Get week of year
     */
    public function getWeekOfYear()
    {
    }

    /**
     * Get month of year
     */
    public function getMonthOfYear()
    {
    }

    /**
     * Get age
     */
    public function getAge(): int
    {
    }

    /**
     * Get days in month
     */
    public function getDaysInMonth(): int
    {
    }

    /**
     * Get days in year
     */
    public function getDaysInYear(): int
    {
    }

    /**
     * Get days in week
     */
    public function getDaysInWeek(): int
    {
    }

    /**
     * Get months in year
     */
    public function getMonthsInYear(): int
    {
    }

    /**
     * Get seconds in minute
     */
    public function getSecondsInMinute(): int
    {
    }

    /**
     * Get minutes in hour
     */
    public function getMinutesInHour(): int
    {
    }

    /**
     * Get hours in day
     */
    public function getHoursInDay(): int
    {
    }

    /**
     * Get hours in week
     */
    public function getHoursInWeek(): int
    {
    }

    /**
     * Get hours in month
     */
    public function getHoursInMonth(): int
    {
    }

    /**
     * Get hours in year
     */
    public function getHoursInYear(): int
    {
    }

    /**
     * Get minutes in week
     */
    public function getMinutesInWeek(): int
    {
    }

    /**
     * Get minutes in month
     */
    public function getMinutesInMonth(): int
    {
    }

    /**
     * Get minutes in year
     */
    public function getMinutesInYear(): int
    {
    }

    /**
     * Get seconds in week
     */
    public function getSecondsInWeek(): int
    {
    }

    /**
     * Get seconds in month
     */
    public function getSecondsInMonth(): int
    {
    }

    /**
     * Get seconds in year
     */
    public function getSecondsInYear(): int
    {
    }

    /**
     * Get microseconds in second
     */
    public function getMicrosecondsInSecond(): int
    {
    }

    /**
     * Get microseconds in minute
     */
    public function getMicrosecondsInMinute(): int
    {
    }

    /**
     * Get microseconds in hour
     */
    public function getMicrosecondsInHour(): int
    {
    }

    /**
     * Get microseconds in day
     */
    public function getMicrosecondsInDay(): int
    {
    }

    /**
     * Get microseconds in week
     */
    public function getMicrosecondsInWeek(): int
    {
    }

    /**
     * Get microseconds in month
     */
    public function getMicrosecondsInMonth(): int
    {
    }

    /**
     * Get microseconds in year
     */
    public function getMicrosecondsInYear(): int
    {
    }

    /**
     * Set date time
     * @param \DateTimeZone|string|null $timezone
     */
    public function setDateTime(\DateTime $dateTime)
    {
    }

    /**
     * Set year
     */
    public function setYear(int $year)
    {
    }

    /**
     * Set month
     */
    public function setMonth(int $month)
    {
    }

    /**
     * Set day
     */
    public function setDay(int $day)
    {
    }

    /**
     * Set hour
     */
    public function setHour(int $hour)
    {
    }

    /**
     * Set minute
     */
    public function setMinute(int $minute)
    {
    }

    /**
     * Set second
     */
    public function setSecond(int $second)
    {
    }

    /**
     * Set day of week
     */
    public function setDayOfWeek(int $dayOfWeek)
    {
    }

    /**
     * Set day of year
     */
    public function setDayOfYear(int $dayOfYear)
    {
    }

    /**
     * Set week of year
     */
    public function setWeekOfYear(int $weekOfYear)
    {
    }

    /**
     * Set week of month
     */
    public function setWeekOfMonth(int $weekOfMonth)
    {
    }

    /**
     * Set month of year
     */
    public function setMonthOfYear(int $monthOfYear)
    {
    }

    /**
     * Add years
     * @return static
     */
    public function addYears(int $years)
    {
    }

    /**
     * Add months
     * @return static
     */
    public function addMonths(int $months)
    {
    }

    /**
     * Add days
     * @return static
     */
    public function addDays(int $days)
    {
    }

    /**
     * Add hours
     * @return static
     */
    public function addHours(int $hours)
    {
    }

    /**
     * Add minutes
     * @return static
     */
    public function addMinutes(int $minutes)
    {
    }

    /**
     * Add seconds
     * @return static
     */
    public function addSeconds(int $seconds)
    {
    }

    /**
     * Add microseconds
     * @return static
     */
    public function addMicroseconds(int $microseconds)
    {
    }

    /**
     * Add weeks
     * @return static
     */
    public function addWeeks(int $weeks)
    {
    }

    /**
     * Subtract years
     * @return static
     */
    public function subYears(int $years)
    {
    }

    /**
     * Subtract months
     * @return static
     */
    public function subMonths(int $months)
    {
    }

    /**
     * Subtract days
     * @return static
     */
    public function subDays(int $days)
    {
    }

    /**
     * Subtract hours
     * @return static
     */
    public function subHours($hours)
    {
    }

    /**
     * Subtract minutes
     * @return static
     */
    public function subMinutes(int $minutes)
    {
    }

    /**
     * Subtract seconds
     * @return static
     */
    public function subSeconds(int $seconds)
    {
    }

    /**
     * Subtract microseconds
     * @return static
     */
    public function subMicroseconds(int $microseconds)
    {
    }

    /**
     * Subtract weeks
     * @return static
     */
    public function subWeeks(int $weeks)
    {
    }

    /**
     * diff In Seconds
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInSeconds($other, bool $abs = true)
    {
    }

    /**
     * diff In Minutes
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInMinutes($other, bool $abs = true)
    {
    }

    /**
     * diff In Hours
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInHours($other, bool $abs = true)
    {
    }

    /**
     * diff In Months
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInMonths($other, bool $abs = true)
    {
    }

    /**
     * diff In Years
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInYears($other, bool $abs = true)
    {
    }

    /**
     * diff In Weeks
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInWeeks($other, bool $abs = true)
    {
    }

    /**
     * diff In Days
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInDays($other, bool $abs = true)
    {
    }

    /**
     * diff In Microseconds
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other
     * @param bool $abs
     * @return int
     */
    public function diffInMicroseconds($other, bool $abs = true)
    {
    }

    /**
     * between
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $date1
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $date2
     * @param bool $equal
     */
    public function between($start, $end, bool $equal = true): bool
    {
    }

    /**
     * eq
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime
     * @return bool
     */
    public function eq($dateTime): bool
    {
    }

    /**
     * ne
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime
     * @return bool
     */
    public function ne($dateTime): bool
    {
    }

    /**
     * gt
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime
     * @return bool
     */
    public function gt($dateTime): bool
    {
    }

    /**
     * gte
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime
     * @return bool
     */
    public function gte($dateTime): bool
    {
    }

    /**
     * lt
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime
     * @return bool
     */
    public function lt($dateTime): bool
    {
    }

    /**
     * lte
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime
     * @return bool
     */
    public function lte($dateTime): bool
    {
    }

    /**
     * Check if same day
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameDay(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same hour
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameHour(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same minute
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameMinute(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same month
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameMonth(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same quarter
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameQuarter(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same second
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameSecond(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same week
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameWeek(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if same year
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameYear(\DateTimeInterface $dateTime): bool
    {
    }

    public function __toString(): string
    {
    }
}
