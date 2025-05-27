<?php

namespace Chronos\Chronos;

use Chronos\Chronos;

/**
 * Carbonクラスのような日付と時間の操作を行う
 */
interface ChronosInterface
{
    public const MYSQL_DATE_FORMAT = 'Y-m-d';

    public const MYSQL_TIME_FORMAT = 'H:i:s';

    public const MYSQL_DATETIME_FORMAT = 'Y-m-d H:i:s';

    public const MYSQL_DATETIME_MILLISEC_FORMAT = 'Y-m-d H:i:s.v';

    public const MYSQL_DATETIME_MICROSEC_FORMAT = 'Y-m-d H:i:s.u';

    public function setTimeZone($timezone): static;

    public static function parse($time = 'now', $timezone = null): static;

    public static function now($timezone = null): static;

    public function copy(): static;

    public function format(string $format, string $locale = null): string;

    public function locale($locale);

    public function toDateTime(): \DateTime;

    public function toDateTimeImmutable(): \DateTimeImmutable;

    public function toDateTimeString();

    public function toDateString();

    public function toDateWeekString();

    public function toTimeString();

    public function toDayOfWeekString();

    public function toDayOfWeekShortString();

    public function toDayOfYearString();

    public function toWeekOfYearString();

    public function toMonthString();

    public function toMonthShortString();

    public function toYearString();

    public function toIso8601String();

    public function today();

    public function tomorrow();

    public function yesterday();

    public function thisWeek();

    public function nextWeek();

    public function lastWeek();

    public function thisMonth();

    public function nextMonth();

    public function lastMonth();

    public function thisYear();

    public function nextYear();

    public function lastYear();

    public function startOfDay();

    public function startOfWeek();

    public function startOfMonth();

    public function startOfYear();

    public function endOfDay();

    public function endOfWeek();

    public function endOfMonth();

    public function endOfYear();

    public function modify(string $modifier): \DateTime|false;

    public function isToday(): bool;

    public function isTomorrow(): bool;

    public function isYesterday(): bool;

    public function isThisWeek(): bool;

    public function isNextWeek(): bool;

    public function isLastWeek(): bool;

    public function isThisMonth(): bool;

    public function isNextMonth(): bool;

    public function isLastMonth(): bool;

    public function isThisYear(): bool;

    public function isNextYear(): bool;

    public function isLastYear(): bool;

    public function isFuture(): bool;

    public function isPast(): bool;

    public function isLeapYear(): bool;

    public function isWeekday(): bool;

    public function isWeekend(): bool;

    public function isMonday(): bool;

    public function isTuesday(): bool;

    public function isWednesday(): bool;

    public function isThursday(): bool;

    public function isFriday(): bool;

    public function isSaturday(): bool;

    public function isSunday(): bool;

    public function isMorning(): bool;

    public function isAfternoon(): bool;

    public function isEvening(): bool;

    public function isNight(): bool;

    public function isMidnight(): bool;

    public function isNoon(): bool;

    public function isDaylightSavingTime(): bool;

    public function isStandardTime(): bool;

    public function isLastDayOfMonth(): bool;

    public function isLastWeekOfMonth(): bool;

    public function isLastWeekOfYear(): bool;

    public function getYear();

    public function getMonth();

    public function getDay();

    public function getHour();

    public function getMinute();

    public function getSecond();

    public function getMicrosecond();

    public function getDayOfWeek();

    public function getDayOfYear();

    public function getWeekOfYear();

    public function getMonthOfYear();

    public function getAge(): int;

    public function getDaysInMonth(): int;

    public function getDaysInYear(): int;

    public function getDaysInWeek(): int;

    public function getMonthsInYear(): int;

    public function getSecondsInMinute(): int;

    public function getMinutesInHour(): int;

    public function getHoursInDay(): int;

    public function getHoursInWeek(): int;

    public function getHoursInMonth(): int;

    public function getHoursInYear(): int;

    public function getMinutesInWeek(): int;

    public function getMinutesInMonth(): int;

    public function getMinutesInYear(): int;

    public function getSecondsInWeek(): int;

    public function getSecondsInMonth(): int;

    public function getSecondsInYear(): int;

    public function getMicrosecondsInSecond(): int;

    public function getMicrosecondsInMinute(): int;

    public function getMicrosecondsInHour(): int;

    public function getMicrosecondsInDay(): int;

    public function getMicrosecondsInWeek(): int;

    public function getMicrosecondsInMonth(): int;

    public function getMicrosecondsInYear(): int;

    public function setDateTime(\DateTime $dateTime);

    public function setYear(int $year);

    public function setMonth(int $month);

    public function setDay(int $day);

    public function setHour(int $hour);

    public function setMinute(int $minute);

    public function setSecond(int $second);

    public function setDayOfWeek(int $dayOfWeek);

    public function setDayOfYear(int $dayOfYear);

    public function setWeekOfYear(int $weekOfYear);

    public function setWeekOfMonth(int $weekOfMonth);

    public function setMonthOfYear(int $monthOfYear);

    public function addYears(int $years);

    public function addMonths(int $months);

    public function addDays(int $days);

    public function addHours(int $hours);

    public function addMinutes(int $minutes);

    public function addSeconds(int $seconds);

    public function addMicroseconds(int $microseconds);

    public function addWeeks(int $weeks);

    public function subYears(int $years);

    public function subMonths(int $months);

    public function subDays(int $days);

    public function subHours(int $hours);

    public function subMinutes(int $minutes);

    public function subSeconds(int $seconds);

    public function subMicroseconds(int $microseconds);

    public function subWeeks(int $weeks);

    public function diffInSeconds($other, bool $abs = true);

    public function diffInMinutes($other, bool $abs = true);

    public function diffInHours($other, bool $abs = true);

    public function diffInMonths($other, bool $abs = true);

    public function diffInYears($other, bool $abs = true);

    public function diffInWeeks($other, bool $abs = true);

    public function diffInDays($other, bool $abs = true);

    public function diffInMicroseconds($other, bool $abs = true);

    public function between($start, $end, bool $equal = true): bool;

    public function eq($dateTime): bool;

    public function ne($dateTime): bool;

    public function gt($dateTime): bool;

    public function gte($dateTime): bool;

    public function lt($dateTime): bool;

    public function lte($dateTime): bool;

    public function isSameDay(\DateTimeInterface $dateTime): bool;

    public function isSameMonth(\DateTimeInterface $dateTime): bool;

    public function isSameQuarter(\DateTimeInterface $dateTime): bool;

    public function isSameYear(\DateTimeInterface $dateTime): bool;

    public function isSameWeek(\DateTimeInterface $dateTime): bool;

    public function isSameHour(\DateTimeInterface $dateTime): bool;

    public function isSameMinute(\DateTimeInterface $dateTime): bool;

    public function isSameSecond(\DateTimeInterface $dateTime): bool;

    public function __toString(): string;
}
