<?php

use Chronos\Chronos;

it('can create a new Chronos instance', function () {
    $chronos = new Chronos();
    expect($chronos)->toBeInstanceOf(Chronos::class);
});

it('can parse a time string', function () {
    $chronos = Chronos::parse('2023-01-01');
    expect($chronos->format('Y-m-d'))->toBe('2023-01-01');
});

it('can copy the instance', function () {
    $chronos = new Chronos('2023-01-01');
    $copy = $chronos->copy();
    expect($copy)->toBeInstanceOf(Chronos::class);
    expect($copy->format('Y-m-d'))->toBe('2023-01-01');
});

it('can format the instance', function () {
    $chronos = new Chronos('2023-01-01 15:30:00');
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-01-01 15:30:00');
});

it('can convert the instance to DateTime', function () {
    $chronos = new Chronos('2023-01-01');
    expect($chronos->toDateTime())->toBeInstanceOf(DateTime::class);
});

it('can convert the instance to DateTimeImmutable', function () {
    $chronos = new Chronos('2023-01-01');
    expect($chronos->toDateTimeImmutable())->toBeInstanceOf(DateTimeImmutable::class);
});

it('can get today', function () {
    $chronos = new Chronos();
    $today = $chronos->today()->format('Y-m-d');
    expect($today)->toBe(date('Y-m-d'));
});

it('can get tomorrow', function () {
    $chronos = new Chronos();
    $tomorrow = $chronos->tomorrow()->format('Y-m-d');
    $expected = (new DateTime('+1 day'))->format('Y-m-d');
    expect($tomorrow)->toBe($expected);
});

it('can get yesterday', function () {
    $chronos = new Chronos();
    $yesterday = $chronos->yesterday()->format('Y-m-d');
    $expected = (new DateTime('-1 day'))->format('Y-m-d');
    expect($yesterday)->toBe($expected);
});

it('can get the start of the day', function () {
    $chronos = new Chronos('2023-01-01 15:30:00');
    $chronos->startOfDay();
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-01-01 00:00:00');
});

it('can get the start of the week', function () {
    $chronos = new Chronos('2023-01-11');
    $chronos->startOfWeek();
    expect($chronos->format('Y-m-d'))->toBe('2023-01-09');
});

it('can get the start of the month', function () {
    $chronos = new Chronos('2023-01-15');
    $chronos->startOfMonth();
    expect($chronos->format('Y-m-d'))->toBe('2023-01-01');
});

it('can get the start of the year', function () {
    $chronos = new Chronos('2023-05-01');
    $chronos->startOfYear();
    expect($chronos->format('Y-m-d'))->toBe('2023-01-01');
});

it('can get the end of the day', function () {
    $chronos = new Chronos('2023-05-01');
    $chronos->endOfDay();
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 23:59:59');
});

it('can get the end of the week', function () {
    $chronos = new Chronos('2023-01-11');
    $chronos->endOfWeek();
    expect($chronos->format('Y-m-d'))->toBe('2023-01-15');
});

it('can get the end of the month', function () {
    $chronos = new Chronos('2023-05-01');
    $chronos->endOfMonth();
    expect($chronos->format('Y-m-d'))->toBe('2023-05-31');
});

it('can get the end of the year', function () {
    $chronos = new Chronos('2023-05-01');
    $chronos->endOfYear();
    expect($chronos->format('Y-m-d'))->toBe('2023-12-31');
});

it('has correct days in week', function () {
    $instance = new Chronos();
    expect($instance->getDaysInWeek())->toBe(7);
});

it('has correct months in year', function () {
    $instance = new Chronos();
    expect($instance->getMonthsInYear())->toBe(12);
});

it('has correct seconds in minute', function () {
    $instance = new Chronos();
    expect($instance->getSecondsInMinute())->toBe(60);
});

it('has correct minutes in hour', function () {
    $instance = new Chronos();
    expect($instance->getMinutesInHour())->toBe(60);
});

it('has correct hours in day', function () {
    $instance = new Chronos();
    expect($instance->getHoursInDay())->toBe(24);
});

it('has correct hours in week', function () {
    $instance = new Chronos();
    expect($instance->getHoursInWeek())->toBe(168);
});

it('calculates hours in month correctly', function () {
    $instance = new Chronos();
    $hoursInMonth = $instance->getDaysInMonth() * $instance->getHoursInDay();
    expect($instance->getHoursInMonth())->toBe($hoursInMonth);
});

it('calculates hours in year correctly', function () {
    $instance = new Chronos();
    $hoursInYear = $instance->getDaysInYear() * $instance->getHoursInDay();
    expect($instance->getHoursInYear())->toBe($hoursInYear);
});

it('calculates minutes in week correctly', function () {
    $instance = new Chronos();
    $minutesInWeek = $instance->getHoursInWeek() * $instance->getMinutesInHour();
    expect($instance->getMinutesInWeek())->toBe($minutesInWeek);
});

it('calculates seconds in week correctly', function () {
    $instance = new Chronos();
    $secondsInWeek = $instance->getMinutesInWeek() * $instance->getSecondsInMinute();
    expect($instance->getSecondsInWeek())->toBe($secondsInWeek);
});

it('calculates seconds in month correctly', function () {
    $instance = new Chronos();
    $secondsInMonth = $instance->getMinutesInMonth() * $instance->getSecondsInMinute();
    expect($instance->getSecondsInMonth())->toBe($secondsInMonth);
});

it('calculates seconds in year correctly', function () {
    $instance = new Chronos();
    $secondsInYear = $instance->getMinutesInYear() * $instance->getSecondsInMinute();
    expect($instance->getSecondsInYear())->toBe($secondsInYear);
});

it('has correct microseconds in second', function () {
    $instance = new Chronos();
    expect($instance->getMicrosecondsInSecond())->toBe(1000000);
});

it('calculates microseconds in minute correctly', function () {
    $instance = new Chronos();
    $microsecondsInMinute = $instance->getSecondsInMinute() * $instance->getMicrosecondsInSecond();
    expect($instance->getMicrosecondsInMinute())->toBe($microsecondsInMinute);
});

it('calculates microseconds in hour correctly', function () {
    $instance = new Chronos();
    $microsecondsInHour = $instance->getMinutesInHour() * $instance->getMicrosecondsInMinute();
    expect($instance->getMicrosecondsInHour())->toBe($microsecondsInHour);
});

it('calculates microseconds in day correctly', function () {
    $instance = new Chronos();
    $microsecondsInDay = $instance->getHoursInDay() * $instance->getMicrosecondsInHour();
    expect($instance->getMicrosecondsInDay())->toBe($microsecondsInDay);
});

it('calculates microseconds in week correctly', function () {
    $instance = new Chronos();
    $microsecondsInWeek = $instance->getHoursInWeek() * $instance->getMicrosecondsInHour();
    expect($instance->getMicrosecondsInWeek())->toBe($microsecondsInWeek);
});

it('calculates microseconds in month correctly', function () {
    $instance = new Chronos();
    $microsecondsInMonth = $instance->getHoursInMonth() * $instance->getMicrosecondsInHour();
    expect($instance->getMicrosecondsInMonth())->toBe($microsecondsInMonth);
});

it('calculates microseconds in year correctly', function () {
    $instance = new Chronos();
    $microsecondsInYear = $instance->getHoursInYear() * $instance->getMicrosecondsInHour();
    expect($instance->getMicrosecondsInYear())->toBe($microsecondsInYear);
});

beforeEach(function () {
    $this->Chronos1 = new Chronos('2023-05-01 00:00:00');
    $this->Chronos2 = new Chronos('2023-05-01 01:00:00');
    $this->Chronos3 = new Chronos('2023-05-02 00:00:00');
    $this->Chronos4 = new Chronos('2023-06-01 00:00:00');
});

it('calculates diff correctly', function () {
    $diff = $this->Chronos1->diff($this->Chronos3);
    expect($diff->days)->toBe(1);
});

it('calculates diffInSeconds correctly', function () {
    $diffInSeconds = $this->Chronos1->diffInSeconds($this->Chronos2);
    expect($diffInSeconds)->toBe(3600);
});

it('calculates diffInMinutes correctly', function () {
    $diffInMinutes = $this->Chronos1->diffInMinutes($this->Chronos2);
    expect($diffInMinutes)->toBe(60);
});

it('calculates diffInHours correctly', function () {
    $diffInHours = $this->Chronos1->diffInHours($this->Chronos3);
    expect($diffInHours)->toBe(24);
});

it('calculates diffInMonths correctly', function () {
    $diffInMonths = $this->Chronos1->diffInMonths($this->Chronos4);
    expect($diffInMonths)->toBe(1);
});

it('calculates diffInYears correctly', function () {
    $chronos5 = new Chronos('2024-05-01 00:00:00');
    $diffInYears = $this->Chronos1->diffInYears($chronos5);
    expect($diffInYears)->toBe(1);
});

it('calculates diffInWeeks correctly', function () {
    $chronos6 = new Chronos('2023-05-08 00:00:00');
    $diffInWeeks = $this->Chronos1->diffInWeeks($chronos6);
    expect($diffInWeeks)->toBe(1);
});

it('calculates diffInDays correctly', function () {
    $diffInDays = $this->Chronos1->diffInDays($this->Chronos3);
    expect($diffInDays)->toBe(1);
});

it('calculates diffInMicroseconds correctly', function () {
    $chronos7 = new Chronos('2023-05-01 00:00:00.150321');
    $diffInMicroseconds = $this->Chronos1->diffInMicroseconds($chronos7);
    expect($diffInMicroseconds)->toBe(150321);
});

it('checks if date is between two other dates correctly', function () {
    $isBetween = $this->Chronos2->between($this->Chronos1, $this->Chronos3);
    expect($isBetween)->toBeTrue();
});

it('checks if date is equal to another date correctly', function () {
    $isEqual = $this->Chronos1->eq($this->Chronos1);
    expect($isEqual)->toBeTrue();
});

it('checks if date is not equal to another date correctly', function () {
    $isNotEqual = $this->Chronos1->ne($this->Chronos2);
    expect($isNotEqual)->toBeTrue();
});

it('checks if date is greater than another date correctly', function () {
    $isGreater = $this->Chronos2->gt($this->Chronos1);
    expect($isGreater)->toBeTrue();
});

it('checks if date is greater than or equal to another date correctly', function () {
    $isGreaterOrEqual = $this->Chronos1->gte($this->Chronos1);
    expect($isGreaterOrEqual)->toBeTrue();
});

it('checks if date is less than another date correctly', function () {
    $isLess = $this->Chronos1->lt($this->Chronos2);
    expect($isLess)->toBeTrue();
});

it('checks if date is less than or equal to another date correctly', function () {
    $isLessOrEqual = $this->Chronos1->lte($this->Chronos1);
    expect($isLessOrEqual)->toBeTrue();
});

it('checks datetime when add minutes correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:00');
    $chronos->addMinutes(30);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:30:00');
});

it('checks datetime when add seconds correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:00');
    $chronos->addSeconds(30);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:30');
});

it('checks datetime when add hours correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:00');
    $chronos->addHours(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 01:00:00');
});

it('checks datetime when add days correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:00');
    $chronos->addDays(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-02 00:00:00');
});

it('checks datetime when add months correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:00');
    $chronos->addMonths(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-06-01 00:00:00');
});

it('checks datetime when add years correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:00');
    $chronos->addYears(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2024-05-01 00:00:00');
});

it('checks datetime when sub minutes correctly', function () {
    $chronos = new Chronos('2023-05-01 00:30:00');
    $chronos->subMinutes(30);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:00');
});

it('checks datetime when sub seconds correctly', function () {
    $chronos = new Chronos('2023-05-01 00:00:30');
    $chronos->subSeconds(30);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:00');
});

it('checks datetime when sub hours correctly', function () {
    $chronos = new Chronos('2023-05-01 01:00:00');
    $chronos->subHours(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:00');
});

it('checks datetime when sub days correctly', function () {
    $chronos = new Chronos('2023-05-02 00:00:00');
    $chronos->subDays(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:00');
});

it('checks datetime when sub months correctly', function () {
    $chronos = new Chronos('2023-06-01 00:00:00');
    $chronos->subMonths(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:00');
});

it('checks datetime when sub years correctly', function () {
    $chronos = new Chronos('2024-05-01 00:00:00');
    $chronos->subYears(1);
    expect($chronos->format('Y-m-d H:i:s'))->toBe('2023-05-01 00:00:00');
});

it('returns date week string correctly', function () {
    $dateWeekString = $this->Chronos1->toDateWeekString();
    expect($dateWeekString)->toBe('2023-05-01(Mon)');
});

it('can set the timezone', function () {
    $chronos = new Chronos();
    expect($chronos->getTimezone()->getName())->toBe(date_default_timezone_get());
    expect($chronos->getOffset())->toBe(timezone_offset_get($chronos->getTimezone(), $chronos)); // ex) Asia/Tokyo -> UTC/GMT +9 hour

    $chronos->setTimezone(new DateTimeZone('Asia/Tokyo'));
    expect($chronos->getTimezone()->getName())->toBe('Asia/Tokyo');
    expect($chronos->getOffset())->toBe(3600 * 9); // UTC/GMT +9 hour
});

// isSameDay のテスト
it('checks if date is same day correctly', function () {
    $day1 = new Chronos('2023-05-01 10:00:00');
    $day2 = new Chronos('2023-05-01 15:30:00');
    $day3 = new Chronos('2023-05-02 10:00:00');

    expect($day1->isSameDay($day2))->toBeTrue();
    expect($day1->isSameDay($day3))->toBeFalse();
});

// isSameMonth のテスト
it('checks if date is same month correctly', function () {
    $month1 = new Chronos('2023-05-01');
    $month2 = new Chronos('2023-05-15');
    $month3 = new Chronos('2023-06-01');

    expect($month1->isSameMonth($month2))->toBeTrue();
    expect($month1->isSameMonth($month3))->toBeFalse();
});

// isSameQuarter のテスト
it('checks if date is same quarter correctly', function () {
    $q1 = new Chronos('2023-01-15');
    $q1End = new Chronos('2023-03-31');
    $q2 = new Chronos('2023-04-01');
    $q4 = new Chronos('2023-10-15');
    $nextYearQ1 = new Chronos('2024-01-15');

    expect($q1->isSameQuarter($q1End))->toBeTrue();
    expect($q1->isSameQuarter($q2))->toBeFalse();
    expect($q1->isSameQuarter($nextYearQ1))->toBeFalse();
    expect($q2->isSameQuarter($q4))->toBeFalse();
});

// isSameYear のテスト
it('checks if date is same year correctly', function () {
    $year1 = new Chronos('2023-01-01');
    $year2 = new Chronos('2023-12-31');
    $year3 = new Chronos('2024-01-01');

    expect($year1->isSameYear($year2))->toBeTrue();
    expect($year1->isSameYear($year3))->toBeFalse();
});

// isSameWeek のテスト
it('checks if date is same week correctly', function () {
    $week1Start = new Chronos('2023-05-01'); // 月曜日
    $week1End = new Chronos('2023-05-07');   // 日曜日
    $week2Start = new Chronos('2023-05-08'); // 次の週の月曜日

    expect($week1Start->isSameWeek($week1End))->toBeTrue();
    expect($week1Start->isSameWeek($week2Start))->toBeFalse();
});

// isSameHour のテスト
it('checks if date is same hour correctly', function () {
    $hour1 = new Chronos('2023-05-01 10:15:00');
    $hour2 = new Chronos('2023-05-01 10:45:00');
    $hour3 = new Chronos('2023-05-01 11:15:00');

    expect($hour1->isSameHour($hour2))->toBeTrue();
    expect($hour1->isSameHour($hour3))->toBeFalse();
});

// isSameMinute のテスト
it('checks if date is same minute correctly', function () {
    $minute1 = new Chronos('2023-05-01 10:15:10');
    $minute2 = new Chronos('2023-05-01 10:15:45');
    $minute3 = new Chronos('2023-05-01 10:16:10');

    expect($minute1->isSameMinute($minute2))->toBeTrue();
    expect($minute1->isSameMinute($minute3))->toBeFalse();
});

// isSameSecond のテスト
it('checks if date is same second correctly', function () {
    $second1 = new Chronos('2023-05-01 10:15:10.123');
    $second2 = new Chronos('2023-05-01 10:15:10.456');
    $second3 = new Chronos('2023-05-01 10:15:11.123');

    expect($second1->isSameSecond($second2))->toBeTrue();
    expect($second1->isSameSecond($second3))->toBeFalse();
});

// 複数のタイムゾーンでの isSameDay テスト
it('checks if date is same day across different timezones', function () {
    $tokyo = new Chronos('2023-05-01 23:00:00', new DateTimeZone('Asia/Tokyo'));
    $london = new Chronos('2023-05-01 15:00:00', new DateTimeZone('Europe/London'));
    $newYork = new Chronos('2023-05-01 10:00:00', new DateTimeZone('America/New_York'));

    // これらは同じ時点を異なるタイムゾーンで表しているため、同じ日になるはず
    expect($tokyo->isSameDay($london))->toBeTrue();
    expect($tokyo->isSameDay($newYork))->toBeTrue();
});

// 境界値でのテスト（月末など）
it('handles edge cases for isSameMonth correctly', function () {
    $janEnd = new Chronos('2023-01-31');
    $febStart = new Chronos('2023-02-01');

    expect($janEnd->isSameMonth($febStart))->toBeFalse();

    // うるう年と非うるう年の2月の比較
    $feb2023 = new Chronos('2023-02-28'); // 非うるう年
    $feb2024 = new Chronos('2024-02-29'); // うるう年

    expect($feb2023->isSameMonth($feb2024))->toBeFalse(); // 年が違うので false
});

// 四半期の境界でのテスト
it('handles quarter boundaries correctly', function () {
    $q1End = new Chronos('2023-03-31 23:59:59');
    $q2Start = new Chronos('2023-04-01 00:00:00');

    expect($q1End->isSameQuarter($q2Start))->toBeFalse();
});
