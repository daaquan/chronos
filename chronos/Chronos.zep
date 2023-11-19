/**
 * Carbon like DateTime class for PHP 8.0+
 */

namespace Chronos;

use DateTime;
use DateTimeImmutable;
use DateTimeZone;

class Chronos extends DateTime implements ChronosInterface
{
    public function __construct(string datetime = "now", var timezone = null)
    {
        var tempTimezone;
        if (timezone !== null) {
            let tempTimezone = timezone instanceof DateTimeZone ? timezone : new DateTimeZone(timezone);
        }
        parent::__construct(datetime, tempTimezone);
    }

    public function setTimeZone(var timezone) -> <DateTime>
    {
        if (!(timezone instanceof DateTimeZone)) {
            let timezone = new DateTimeZone(timezone);
        }
        parent::setTimezone(timezone);
        return this;
    }

    public static function parse(var time = "now", var timezone = null)
    {
        var e;
        try {
            return new static(time, timezone);
        } catch \Exception, e {
            throw new \Chronos\Exceptions\InvalidFormatException(e->getMessage());
        }
    }

    public static function now(var timezone = null)
    {
        return new static("now", timezone);
    }

    public function copy()
    {
        return new static(this->format("Y-m-d H:i:s.u"), this->getTimezone());
    }

    public function format(string format, string locale = null) -> string
    {
        if (locale !== null) {
            this->locale(locale);
        }
        return parent::format(format);
    }

    public function locale(var locale)
    {
        // "ja_JP.UTF-8"
        setlocale(LC_TIME, locale);
        return this;
    }

    public function toDateTime()
    {
        return DateTime::createFromInterface(this);
    }

    public function toDateTimeImmutable()
    {
        return DateTimeImmutable::createFromMutable(this);
    }

    public function toDateTimeString()
    {
        return this->format(self::MYSQL_DATETIME_FORMAT);
    }

    public function toDateString()
    {
        return this->format(self::MYSQL_DATE_FORMAT);
    }

    public function toDateWeekString()
    {
        return this->format(self::MYSQL_DATE_FORMAT . "(D)");
    }

    public function toTimeString()
    {
        return this->format(self::MYSQL_TIME_FORMAT);
    }

    public function toDayOfWeekString()
    {
        return this->format("l");
    }

    public function toDayOfWeekShortString()
    {
        return this->format("D");
    }

    public function toDayOfYearString()
    {
        return this->format("z");
    }

    public function toWeekOfYearString()
    {
        return this->format("W");
    }

    public function toMonthString()
    {
        return this->format("F");
    }

    public function toMonthShortString()
    {
        return this->format("M");
    }

    public function toYearString()
    {
        return this->format("Y");
    }

    public function toIso8601String()
    {
        return this->format("c");
    }

    public function today()
    {
        return this->modify("today");
    }

    public function tomorrow()
    {
        return this->modify("tomorrow");
    }

    public function yesterday()
    {
        return this->modify("yesterday");
    }

    public function thisWeek()
    {
        return this->modify("this week");
    }

    public function nextWeek()
    {
        return this->modify("next week");
    }

    public function lastWeek()
    {
        return this->modify("last week");
    }

    public function thisMonth()
    {
        return this->modify("this month");
    }

    public function nextMonth()
    {
        return this->modify("next month");
    }

    public function lastMonth()
    {
        return this->modify("last month");
    }

    public function thisYear()
    {
        return this->modify("this year");
    }

    public function nextYear()
    {
        return this->modify("next year");
    }

    public function lastYear()
    {
        return this->modify("last year");
    }

    public function startOfDay()
    {
        this->setTime(0, 0, 0);
        return this;
    }

    public function startOfMonth()
    {
        return this->modify("first day of this month");
    }

    public function startOfYear()
    {
        return this->modify("first day of january this year");
    }

    public function endOfDay()
    {
        this->setTime(23, 59, 59);
        return this;
    }

    public function endOfMonth()
    {
        return this->modify("last day of this month");
    }

    public function endOfYear()
    {
        return this->modify("last day of december this year");
    }

    public function modify(string modifier) -> <DateTime>
    {
        return parent::modify(modifier);
    }

    public function isToday() -> bool
    {
        return this->format("Y-m-d") === date("Y-m-d");
    }

    public function isTomorrow() -> bool
    {
        return this->format("Y-m-d") === date("Y-m-d", strtotime("tomorrow"));
    }

    public function isYesterday() -> bool
    {
        return this->format("Y-m-d") === date("Y-m-d", strtotime("yesterday"));
    }

    public function isThisWeek() -> bool
    {
        return this->format("W") === date("W");
    }

    public function isNextWeek() -> bool
    {
        return this->format("W") === date("W", strtotime("next week"));
    }

    public function isLastWeek() -> bool
    {
        return this->format("W") === date("W", strtotime("last week"));
    }

    public function isThisMonth() -> bool
    {
        return this->format("m") === date("m");
    }

    public function isNextMonth() -> bool
    {
        return this->format("m") === date("m", strtotime("next month"));
    }

    public function isLastMonth() -> bool
    {
        return this->format("m") === date("m", strtotime("last month"));
    }

    public function isThisYear() -> bool
    {
        return this->format("Y") === date("Y");
    }

    public function isNextYear() -> bool
    {
        return this->format("Y") === date("Y", strtotime("next year"));
    }

    public function isLastYear() -> bool
    {
        return this->format("Y") === date("Y", strtotime("last year"));
    }

    public function isFuture() -> bool
    {
        return this->format("U") > time();
    }

    public function isPast() -> bool
    {
        return this->format("U") < time();
    }

    public function isLeapYear() -> bool
    {
        return this->format("L") === "1";
    }

    public function isLongYear() -> bool
    {
        return this->format("L") === "0";
    }

    public function isWeekday() -> bool
    {
        return this->format("N") < 6;
    }

    public function isWeekend() -> bool
    {
        return this->format("N") > 5;
    }

    public function isMonday() -> bool
    {
        return this->format("N") === "1";
    }

    public function isTuesday() -> bool
    {
        return this->format("N") === "2";
    }

    public function isWednesday() -> bool
    {
        return this->format("N") === "3";
    }

    public function isThursday() -> bool
    {
        return this->format("N") === "4";
    }

    public function isFriday() -> bool
    {
        return this->format("N") === "5";
    }

    public function isSaturday() -> bool
    {
        return this->format("N") === "6";
    }

    public function isSunday() -> bool
    {
        return this->format("N") === "7";
    }

    public function isMorning() -> bool
    {
        return this->format("G") < 12;
    }

    public function isAfternoon() -> bool
    {
        return this->format("G") > 11 && this->format("G") < 18;
    }

    public function isEvening() -> bool
    {
        return this->format("G") > 17 && this->format("G") < 22;
    }

    public function isNight() -> bool
    {
        return this->format("G") > 21 || this->format("G") < 6;
    }

    public function isMidnight() -> bool
    {
        return this->format("G") === "0";
    }

    public function isNoon() -> bool
    {
        return this->format("G") === "12";
    }

    public function isDaylightSavingTime() -> bool
    {
        return this->format("I") === "1";
    }

    public function isStandardTime() -> bool
    {
        return this->format("I") === "0";
    }

    public function isLastDayOfMonth() -> bool
    {
        return this->format("t") === this->format("d");
    }

    public function isLastWeekOfMonth() -> bool
    {
        return this->format("W") === date("W", strtotime("last day of this month"));
    }

    public function isLastWeekOfYear() -> bool
    {
        return this->format("W") === date("W", strtotime("last day of december this year"));
    }

    public function getYear() -> int
    {
        return this->format("Y");
    }

    public function getMonth() -> int
    {
        return this->format("m");
    }

    public function getDay() -> int
    {
        return this->format("d");
    }

    public function getHour() -> int
    {
        return this->format("H");
    }

    public function getMinute() -> int
    {
        return this->format("i");
    }

    public function getSecond() -> int
    {
        return this->format("s");
    }

    public function getMicrosecond() -> int
    {
        return this->format("u");
    }

    public function getDayOfWeek() -> int
    {
        return this->format("N");
    }

    public function getDayOfYear() -> int
    {
        return this->format("z");
    }

    public function getWeekOfYear() -> int
    {
        return this->format("W");
    }

    public function getWeekOfMonth() -> int
    {
        return this->format("W");
    }

    public function getMonthOfYear() -> int
    {
        return this->format("n");
    }

    public function getAge() -> int
    {
        return this->diff(new DateTime())->format("%y");
    }

    public function getDaysInMonth() -> int
    {
        return this->format("t");
    }

    public function getDaysInYear() -> int
    {
        return this->format("L") === "1" ? 366 : 365;
    }

    public function getDaysInWeek() -> int
    {
        return 7;
    }

    public function getMonthsInYear() -> int
    {
        return 12;
    }

    public function getSecondsInMinute() -> int
    {
        return 60;
    }

    public function getMinutesInHour() -> int
    {
        return 60;
    }

    public function getHoursInDay() -> int
    {
        return 24;
    }

    public function getHoursInWeek() -> int
    {
        return 168;
    }

    public function getHoursInMonth() -> int
    {
        return this->getDaysInMonth() * this->getHoursInDay();
    }

    public function getHoursInYear() -> int
    {
        return this->getDaysInYear() * this->getHoursInDay();
    }

    public function getMinutesInWeek() -> int
    {
        return this->getHoursInWeek() * this->getMinutesInHour();
    }

    public function getMinutesInMonth() -> int
    {
        return this->getHoursInMonth() * this->getMinutesInHour();
    }

    public function getMinutesInYear() -> int
    {
        return this->getHoursInYear() * this->getMinutesInHour();
    }

    public function getSecondsInWeek() -> int
    {
        return this->getMinutesInWeek() * this->getSecondsInMinute();
    }

    public function getSecondsInMonth() -> int
    {
        return this->getMinutesInMonth() * this->getSecondsInMinute();
    }

    public function getSecondsInYear() -> int
    {
        return this->getMinutesInYear() * this->getSecondsInMinute();
    }

    public function getMicrosecondsInSecond() -> int
    {
        return 1000000;
    }

    public function getMicrosecondsInMinute() -> int
    {
        return this->getSecondsInMinute() * this->getMicrosecondsInSecond();
    }

    public function getMicrosecondsInHour() -> int
    {
        return this->getMinutesInHour() * this->getMicrosecondsInMinute();
    }

    public function getMicrosecondsInDay() -> int
    {
        return this->getHoursInDay() * this->getMicrosecondsInHour();
    }

    public function getMicrosecondsInWeek() -> int
    {
        return this->getHoursInWeek() * this->getMicrosecondsInHour();
    }

    public function getMicrosecondsInMonth() -> int
    {
        return this->getHoursInMonth() * this->getMicrosecondsInHour();
    }

    public function getMicrosecondsInYear() -> int
    {
        return this->getHoursInYear() * this->getMicrosecondsInHour();
    }

    public function setDateTime(<DateTime> dateTime)
    {
        return this->setTimestamp(dateTime->getTimestamp());
    }

    public function setYear(int year)
    {
        return this->setDate(year, this->getMonth(), this->getDay());
    }

    public function setMonth(int month)
    {
        return this->setDate(this->getYear(), month, this->getDay());
    }

    public function setDay(int day)
    {
        return this->setDate(this->getYear(), this->getMonth(), day);
    }

    public function setHour(int hour)
    {
        return this->setTime(hour, this->getMinute(), this->getSecond());
    }

    public function setMinute(int minute)
    {
        return this->setTime(this->getHour(), minute, this->getSecond());
    }

    public function setSecond(int second)
    {
        return this->setTime(this->getHour(), this->getMinute(), second);
    }

    public function setMicrosecond(int microsecond)
    {
        return this->setTime(this->getHour(), this->getMinute(), this->getSecond(), microsecond);
    }

    public function setDayOfWeek(int dayOfWeek)
    {
        return this->setISODate(this->getYear(), this->getWeekOfYear(), dayOfWeek);
    }

    public function setDayOfYear(int dayOfYear)
    {
        return this->setDate(this->getYear(), 1, dayOfYear);
    }

    public function setWeekOfYear(int weekOfYear)
    {
        return this->setISODate(this->getYear(), weekOfYear, this->getDayOfWeek());
    }

    public function setWeekOfMonth(int weekOfMonth)
    {
        return this->setISODate(this->getYear(), this->getWeekOfYear(), this->getDayOfWeek());
    }

    public function setMonthOfYear(int monthOfYear)
    {
        return this->setDate(this->getYear(), monthOfYear, this->getDay());
    }

    public function addYears(int years)
    {
        return this->add(new \DateInterval("P" . years . "Y"));
    }

    public function addMonths(int months)
    {
        return this->add(new \DateInterval("P" . months . "M"));
    }

    public function addDays(int days)
    {
        return this->add(new \DateInterval("P" . days . "D"));
    }

    public function addHours(int hours)
    {
        return this->add(new \DateInterval("PT" . hours . "H"));
    }

    public function addMinutes(int minutes)
    {
        return this->add(new \DateInterval("PT" . minutes . "M"));
    }

    public function addSeconds(int seconds)
    {
        return this->add(new \DateInterval("PT" . seconds . "S"));
    }

    public function addMicroseconds(int microseconds)
    {
        return this->add(new \DateInterval("PT" . microseconds . "S"));
    }

    public function addWeeks(int weeks)
    {
        return this->add(new \DateInterval("P" . weeks . "W"));
    }

    public function subYears(int years)
    {
        return this->sub(new \DateInterval("P" . years . "Y"));
    }

    public function subMonths(int months)
    {
        return this->sub(new \DateInterval("P" . months . "M"));
    }

    public function subDays(int days)
    {
        return this->sub(new \DateInterval("P" . days . "D"));
    }

    public function subHours(int hours)
    {
        return this->sub(new \DateInterval("PT" . hours . "H"));
    }

    public function subMinutes(int minutes)
    {
        return this->sub(new \DateInterval("PT" . minutes . "M"));
    }

    public function subSeconds(int seconds)
    {
        return this->sub(new \DateInterval("PT" . seconds . "S"));
    }

    public function subMicroseconds(int microseconds)
    {
        return this->sub(new \DateInterval("PT" . microseconds . "S"));
    }

    public function subWeeks(int weeks)
    {
        return this->sub(new \DateInterval("P" . weeks . "W"));
    }

    public function diff(<\DateTimeInterface> targetObject, bool absolute = false) -> <\DateInterval>
    {
        return parent::diff(targetObject, absolute);
    }

    public function diffInSeconds(var other, var abs = true)
    {
        var diffInSeconds;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInSeconds = timestamp1 - timestamp2;
        return (int) (abs ? abs(diffInSeconds) : diffInSeconds);
    }

    public function diffInMinutes(var other, var abs = true)
    {
        var diffInMinutes;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInMinutes = (timestamp1 - timestamp2) / 60;
        return (int) (abs ? abs(diffInMinutes) : diffInMinutes);
    }

    public function diffInHours(var other, var abs = true)
    {
        var diffInHours;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInHours = (timestamp1 - timestamp2) / 3600;
        return (int) (abs ? abs(diffInHours) : diffInHours);
    }

    public function diffInMonths(var other, var abs = true)
    {
        var diffInMonths;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInMonths = (timestamp1 - timestamp2) / 2678400;
        return (int) (abs ? abs(diffInMonths) : diffInMonths);
    }

    public function diffInYears(var other, var abs = true)
    {
        var diffInYears;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInYears = (timestamp1 - timestamp2) / 31536000;
        return (int) (abs ? abs(diffInYears) : diffInYears);
    }

    public function diffInWeeks(var other, var abs = true)
    {
        var diffInWeeks;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInWeeks = (timestamp1 - timestamp2) / 604800;
        return (int) (abs ? abs(diffInWeeks) : diffInWeeks);
    }

    public function diffInDays(var other, var abs = true)
    {
        var diffInDays;
        var timestamp2;
        var timestamp1;
        let timestamp1 = this->getTimestamp();
        let timestamp2 = other->getTimestamp();
        let diffInDays = (timestamp1 - timestamp2) / 86400;
        return (int) (abs ? abs(diffInDays) : diffInDays);
    }

    public function diffInMicroseconds(var other, bool abs = true)
    {
        var microsecondDiff;
        var timestampMicro2;
        var timestampMicro1;
        let timestampMicro1 = this->getTimestamp() * 1000000 + this->format("u");
        let timestampMicro2 = other->getTimestamp() * 1000000 + other->format("u");
        let microsecondDiff = timestampMicro1 - timestampMicro2;
        return (int) (abs ? abs(microsecondDiff) : microsecondDiff);
    }

    public function between(var start, var end, bool equal = true) -> bool
    {
        if (equal) {
            return this >= start && this <= end;
        }
        return this > start && this < end;
    }

    public function eq(var dateTime) -> bool
    {
        return this == dateTime;
    }

    public function ne(var dateTime) -> bool
    {
        return this != dateTime;
    }

    public function gt(var dateTime) -> bool
    {
        return this > dateTime;
    }

    public function gte(var dateTime) -> bool
    {
        return this >= dateTime;
    }

    public function lt(var dateTime) -> bool
    {
        return this < dateTime;
    }

    public function lte(var dateTime) -> bool
    {
        return this <= dateTime;
    }

    public function __toString() -> string
    {
        return this->toDateTimeString();
    }
}