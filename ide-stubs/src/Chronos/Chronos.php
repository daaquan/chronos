<?php

namespace Chronos;

use Chronos\Chronos\ChronosInterface;

/**
 * Carbonクラスのような日付と時間の操作を行う
 */
class Chronos extends \DateTime implements ChronosInterface
{
    /**
     * @param \DateTimeZone|string|null $timezone
     */
    public function __construct(string $datetime = 'now', $timezone = null)
    {
    }

    /**
     * タイムゾーンを設定する
     *
     * @param mixed $timezone 新しいタイムゾーン
     */
    public function setTimeZone($timezone): static
    {
    }

    /**
     * 文字列をChronosインスタンスに解析する
     *
     * `parse`メソッドは与えられた文字列をChronosインスタンスに解析しようと試みます
     * さまざまな日付や時間のフォーマットを扱うことができますタイムゾーンが指定されていない場合は、
     * デフォルトのタイムゾーンが使用されます`$time`パラメータが提供されていない場合は、
     * 'now'がデフォルト値となり、現在の日付と時間のインスタンスが生成されます
     *
     * @param string|null $time 日付と時間を表す文字列
     * @param \DateTimeZone|string|null $timezone 時間文字列のタイムゾーン
     * nullの場合は、デフォルトのタイムゾーンが使用されます
     * @return static 新しいChronosインスタンスを返します
     */
    public static function parse($time = 'now', $timezone = null): static
    {
    }

    /**
     * 現在の日付と時間を表すChronosインスタンスを返す
     *
     * @param \DateTimeZone|string $timezone
     */
    public static function now($timezone = null): static
    {
    }

    /**
     * 現在のインスタンスのクローンを返す
     */
    public function copy(): static
    {
    }

    /**
     * 指定されたフォーマットで日付と時間を返す
     */
    public function format(string $format, string $locale = null): string
    {
    }

    /**
     * ロケールを設定する
     *
     * @param mixed $locale
     */
    public function locale($locale)
    {
    }

    /**
     * 現在のインスタンスをDateTimeで返却する
     */
    public function toDateTime(): \DateTime
    {
    }

    /**
     * 現在のインスタンスをDateTimeImmutableで返却する
     */
    public function toDateTimeImmutable(): \DateTimeImmutable
    {
    }

    /**
     * 日時を文字列で返却する
     *
     * @example '2018-07-25 12:34:56'
     */
    public function toDateTimeString()
    {
    }

    /**
     * 日付を文字列で返却する
     *
     * @example '2018-07-25'
     */
    public function toDateString()
    {
    }

    /**
     * 週付けの日付を文字列で返却する
     *
     * @example '2018-07-25(Wed)'
     */
    public function toDateWeekString()
    {
    }

    /**
     * 時間を文字列で返却する
     *
     * @example '12:34:56'
     */
    public function toTimeString()
    {
    }

    /**
     * 曜日を文字列で返却する
     *
     * @example 'Wednesday'
     */
    public function toDayOfWeekString()
    {
    }

    /**
     * 曜日を短縮形式の文字列で返却する
     *
     * @example 'Wed'
     */
    public function toDayOfWeekShortString()
    {
    }

    /**
     * 年内の日数を文字列で返却する
     *
     * @example '206'
     */
    public function toDayOfYearString()
    {
    }

    /**
     * 年内の週数を文字列で返却する
     *
     * @example '30'
     */
    public function toWeekOfYearString()
    {
    }

    /**
     * 月を文字列で返却する
     *
     * @example 'July'
     */
    public function toMonthString()
    {
    }

    /**
     * 月を短縮形式の文字列で返却する
     *
     * @example 'Jul'
     */
    public function toMonthShortString()
    {
    }

    /**
     * 年を文字列で返却する
     *
     * @example '2018'
     */
    public function toYearString()
    {
    }

    /**
     * ISO8601形式の文字列で返却する
     *
     * @example '2018-07-25T12:34:56+09:00'
     */
    public function toIso8601String()
    {
    }

    /**
     * 現在の日付を表すインスタンスを返す
     *
     * @return static
     */
    public function today()
    {
    }

    /**
     * 明日の日付を表すインスタンスを返す
     *
     * @return static
     */
    public function tomorrow()
    {
    }

    /**
     * 昨日の日付を表すインスタンスを返す
     *
     * @return static
     */
    public function yesterday()
    {
    }

    /**
     * 現在の週を表すインスタンスを返す
     *
     * @return static
     */
    public function thisWeek()
    {
    }

    /**
     * 次の週を表すインスタンスを返す
     *
     * @return static
     */
    public function nextWeek()
    {
    }

    /**
     * 前の週を表すインスタンスを返す
     *
     * @return static
     */
    public function lastWeek()
    {
    }

    /**
     * 現在の月を表すインスタンスを返す
     *
     * @return static
     */
    public function thisMonth()
    {
    }

    /**
     * 次の月を表すインスタンスを返す
     *
     * @return static
     */
    public function nextMonth()
    {
    }

    /**
     * 前の月を表すインスタンスを返す
     *
     * @return static
     */
    public function lastMonth()
    {
    }

    /**
     * 現在の年を表すインスタンスを返す
     *
     * @return static
     */
    public function thisYear()
    {
    }

    /**
     * 次の年を表すインスタンスを返す
     *
     * @return static
     */
    public function nextYear()
    {
    }

    /**
     * 前の年を表すインスタンスを返す
     *
     * @return static
     */
    public function lastYear()
    {
    }

    /**
     * 現在の日の開始を表すインスタンスを返す
     *
     * @return static
     */
    public function startOfDay()
    {
    }

    /**
     * 現在の週の開始を表すインスタンスを返す
     *
     * @return static
     */
    public function startOfWeek()
    {
    }

    /**
     * 現在の月の開始を表すインスタンスを返す
     *
     * @return static
     */
    public function startOfMonth()
    {
    }

    /**
     * 現在の年の開始を表すインスタンスを返す
     *
     * @return static
     */
    public function startOfYear()
    {
    }

    /**
     * 現在の日の終了を表すインスタンスを返す
     *
     * @return static
     */
    public function endOfDay()
    {
    }

    /**
     * 現在の週の終了を表すインスタンスを返す
     *
     * @return static
     */
    public function endOfWeek()
    {
    }

    /**
     * 現在の月の終了を表すインスタンスを返す
     *
     * @return static
     */
    public function endOfMonth()
    {
    }

    /**
     * 現在の年の終了を表すインスタンスを返す
     *
     * @return static
     */
    public function endOfYear()
    {
    }

    /**
     * @return static
     */
    public function modify(string $modifier): \DateTime
    {
    }

    /**
     * 今日の日付のインスタンスかどうかを判定する
     */
    public function isToday(): bool
    {
    }

    /**
     * 明日の日付のインスタンスかどうかを判定する
     */
    public function isTomorrow(): bool
    {
    }

    /**
     * 昨日の日付のインスタンスかどうかを判定する
     */
    public function isYesterday(): bool
    {
    }

    /**
     * 現在の週のインスタンスかどうかを判定する
     */
    public function isThisWeek(): bool
    {
    }

    /**
     * 次の週のインスタンスかどうかを判定する
     */
    public function isNextWeek(): bool
    {
    }

    /**
     * 前の週のインスタンスかどうかを判定する
     */
    public function isLastWeek(): bool
    {
    }

    /**
     * 現在の月のインスタンスかどうかを判定する
     */
    public function isThisMonth(): bool
    {
    }

    /**
     * 次の月のインスタンスかどうかを判定する
     */
    public function isNextMonth(): bool
    {
    }

    /**
     * 前の月のインスタンスかどうかを判定する
     */
    public function isLastMonth(): bool
    {
    }

    /**
     * 現在の年のインスタンスかどうかを判定する
     */
    public function isThisYear(): bool
    {
    }

    /**
     * 次の年のインスタンスかどうかを判定する
     */
    public function isNextYear(): bool
    {
    }

    /**
     * 前の年のインスタンスかどうかを判定する
     */
    public function isLastYear(): bool
    {
    }

    /**
     * 未来の日付のインスタンスかどうかを判定する
     */
    public function isFuture(): bool
    {
    }

    /**
     * 過去の日付のインスタンスかどうかを判定する
     */
    public function isPast(): bool
    {
    }

    /**
     * 閏年のインスタンスかどうかを判定する
     */
    public function isLeapYear(): bool
    {
    }

    /**
     * 平日のインスタンスかどうかを判定する
     */
    public function isWeekday(): bool
    {
    }

    /**
     * 週末のインスタンスかどうかを判定する
     */
    public function isWeekend(): bool
    {
    }

    /**
     * 月曜日のインスタンスかどうかを判定する
     */
    public function isMonday(): bool
    {
    }

    /**
     * 火曜日のインスタンスかどうかを判定する
     */
    public function isTuesday(): bool
    {
    }

    /**
     * 水曜日のインスタンスかどうかを判定する
     */
    public function isWednesday(): bool
    {
    }

    /**
     * 木曜日のインスタンスかどうかを判定する
     */
    public function isThursday(): bool
    {
    }

    /**
     * 金曜日のインスタンスかどうかを判定する
     */
    public function isFriday(): bool
    {
    }

    /**
     * 土曜日のインスタンスかどうかを判定する
     */
    public function isSaturday(): bool
    {
    }

    /**
     * 日曜日のインスタンスかどうかを判定する
     */
    public function isSunday(): bool
    {
    }

    /**
     * 午前のインスタンスかどうかを判定する
     */
    public function isMorning(): bool
    {
    }

    /**
     * 午後のインスタンスかどうかを判定する
     */
    public function isAfternoon(): bool
    {
    }

    /**
     * 夕方のインスタンスかどうかを判定する
     */
    public function isEvening(): bool
    {
    }

    /**
     * 夜のインスタンスかどうかを判定する
     */
    public function isNight(): bool
    {
    }

    /**
     * 真夜中のインスタンスかどうかを判定する
     */
    public function isMidnight(): bool
    {
    }

    /**
     * 正午のインスタンスかどうかを判定する
     */
    public function isNoon(): bool
    {
    }

    /**
     * サマータイムのインスタンスかどうかを判定する
     */
    public function isDaylightSavingTime(): bool
    {
    }

    /**
     * 標準時のインスタンスかどうかを判定する
     */
    public function isStandardTime(): bool
    {
    }

    /**
     * 現在の日付が月の最後の日かどうかを判定する
     */
    public function isLastDayOfMonth(): bool
    {
    }

    /**
     * 現在の日付が月の最後の週かどうかを判定する
     */
    public function isLastWeekOfMonth(): bool
    {
    }

    /**
     * 現在の日付が年の最後の週かどうかを判定する
     */
    public function isLastWeekOfYear(): bool
    {
    }

    /**
     * 年を返す
     */
    public function getYear()
    {
    }

    /**
     * 月を返す
     */
    public function getMonth()
    {
    }

    /**
     * 日を返す
     */
    public function getDay()
    {
    }

    /**
     * 時間を返す
     */
    public function getHour()
    {
    }

    /**
     * 分を返す
     */
    public function getMinute()
    {
    }

    /**
     * 秒を返す
     */
    public function getSecond()
    {
    }

    /**
     * マイクロ秒を返す
     */
    public function getMicrosecond()
    {
    }

    /**
     * 曜日を返す
     */
    public function getDayOfWeek()
    {
    }

    /**
     * 年間の通算日を返す
     */
    public function getDayOfYear()
    {
    }

    /**
     * 年内の週番号を返す
     */
    public function getWeekOfYear()
    {
    }

    /**
     * 月を返す
     */
    public function getMonthOfYear()
    {
    }

    /**
     * 年齢を返す
     */
    public function getAge(): int
    {
    }

    /**
     * 月の日数を返す
     */
    public function getDaysInMonth(): int
    {
    }

    /**
     * 年の日数を返す
     */
    public function getDaysInYear(): int
    {
    }

    /**
     * 週の日数を返す
     */
    public function getDaysInWeek(): int
    {
    }

    /**
     * 年の月数を返す
     */
    public function getMonthsInYear(): int
    {
    }

    /**
     * 分の秒数を返す
     */
    public function getSecondsInMinute(): int
    {
    }

    /**
     * 時間の分数を返す
     */
    public function getMinutesInHour(): int
    {
    }

    /**
     * 日の時間を返す
     */
    public function getHoursInDay(): int
    {
    }

    /**
     * 週の時間を返す
     */
    public function getHoursInWeek(): int
    {
    }

    /**
     * 月の時間を返す
     */
    public function getHoursInMonth(): int
    {
    }

    /**
     * 年の時間を返す
     */
    public function getHoursInYear(): int
    {
    }

    /**
     * 週の分数を返す
     */
    public function getMinutesInWeek(): int
    {
    }

    /**
     * 月の分数を返す
     */
    public function getMinutesInMonth(): int
    {
    }

    /**
     * 年の分数を返す
     */
    public function getMinutesInYear(): int
    {
    }

    /**
     * 週の秒数を返す
     */
    public function getSecondsInWeek(): int
    {
    }

    /**
     * 月の秒数を返す
     */
    public function getSecondsInMonth(): int
    {
    }

    /**
     * 年の秒数を返す
     */
    public function getSecondsInYear(): int
    {
    }

    /**
     * 秒のマイクロ秒数を返す
     */
    public function getMicrosecondsInSecond(): int
    {
    }

    /**
     * 分のマイクロ秒数を返す
     */
    public function getMicrosecondsInMinute(): int
    {
    }

    /**
     * 時間のマイクロ秒数を返す
     */
    public function getMicrosecondsInHour(): int
    {
    }

    /**
     * 日のマイクロ秒数を返す
     */
    public function getMicrosecondsInDay(): int
    {
    }

    /**
     * 週のマイクロ秒数を返す
     */
    public function getMicrosecondsInWeek(): int
    {
    }

    /**
     * 月のマイクロ秒数を返す
     */
    public function getMicrosecondsInMonth(): int
    {
    }

    /**
     * 年のマイクロ秒数を返す
     */
    public function getMicrosecondsInYear(): int
    {
    }

    /**
     * @param \DateTimeZone|string|null $timezone
     */
    public function setDateTime(\DateTime $dateTime)
    {
    }

    /**
     * 年を設定する
     */
    public function setYear(int $year)
    {
    }

    /**
     * 月を設定する
     */
    public function setMonth(int $month)
    {
    }

    /**
     * 日を設定する
     */
    public function setDay(int $day)
    {
    }

    /**
     * 時間を設定する
     */
    public function setHour(int $hour)
    {
    }

    /**
     * 分を設定する
     */
    public function setMinute(int $minute)
    {
    }

    /**
     * 秒を設定する
     */
    public function setSecond(int $second)
    {
    }

    /**
     * 曜日を設定する
     */
    public function setDayOfWeek(int $dayOfWeek)
    {
    }

    /**
     * 年間の日を設定する
     */
    public function setDayOfYear(int $dayOfYear)
    {
    }

    /**
     * 年間の週番号を設定する
     */
    public function setWeekOfYear(int $weekOfYear)
    {
    }

    /**
     * 月間の週番号を設定する
     */
    public function setWeekOfMonth(int $weekOfMonth)
    {
    }

    /**
     * 年間の月を設定する
     */
    public function setMonthOfYear(int $monthOfYear)
    {
    }

    /**
     * 年を加算して返す
     *
     * @return static
     */
    public function addYears(int $years)
    {
    }

    /**
     * 月を加算して返す
     *
     * @return static
     */
    public function addMonths(int $months)
    {
    }

    /**
     * 日を加算して返す
     *
     * @return static
     */
    public function addDays(int $days)
    {
    }

    /**
     * 時間を加算して返す
     *
     * @return static
     */
    public function addHours(int $hours)
    {
    }

    /**
     * 分を加算して返す
     *
     * @return static
     */
    public function addMinutes(int $minutes)
    {
    }

    /**
     * 秒を加算して返す
     *
     * @return static
     */
    public function addSeconds(int $seconds)
    {
    }

    /**
     * マイクロ秒を加算して返す
     *
     * @return static
     */
    public function addMicroseconds(int $microseconds)
    {
    }

    /**
     * 週を加算して返す
     *
     * @return static
     */
    public function addWeeks(int $weeks)
    {
    }

    /**
     * 年を減算して返す
     *
     * @return static
     */
    public function subYears(int $years)
    {
    }

    /**
     * 月を減算して返す
     *
     * @return static
     */
    public function subMonths(int $months)
    {
    }

    /**
     * 日を減算して返す
     *
     * @return static
     */
    public function subDays(int $days)
    {
    }

    /**
     * 時間を減算して返す
     *
     * @return static
     */
    public function subHours($hours)
    {
    }

    /**
     * 分を減算して返す
     *
     * @return static
     */
    public function subMinutes(int $minutes)
    {
    }

    /**
     * 秒を減算して返す
     *
     * @return static
     */
    public function subSeconds(int $seconds)
    {
    }

    /**
     * マイクロ秒を減算して返す
     *
     * @return static
     */
    public function subMicroseconds(int $microseconds)
    {
    }

    /**
     * 週を減算して返す
     *
     * @return static
     */
    public function subWeeks(int $weeks)
    {
    }

    /**
     * 指定された日時との差を秒単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInSeconds($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差を分単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInMinutes($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差を時間単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInHours($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差を日単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInMonths($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差を年単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInYears($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差を週単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInWeeks($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差を日単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差の秒数
     */
    public function diffInDays($other, bool $abs = true)
    {
    }

    /**
     * 指定された日時との差をマイクロ秒単位で返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $other 比較対象の日時
     * @param bool $abs 差の絶対値を取るかどうか（デフォルトではtrue）
     * @return int 差のマイクロ秒数
     */
    public function diffInMicroseconds($other, bool $abs = true)
    {
    }

    /**
     * インスタンスが他の2つの間にあるかどうかを判定します
     *
     * 3つ目の引数では、境界を含むかどうかを指定できます（デフォルトではtrue）
     * ただし、境界を含む/含まないことがアプリケーションで異なる結果を生む可能性がある場合、
     * 明示的なメソッド ->betweenIncluded() や ->betweenExcluded() の使用を推奨します
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $date1
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $date2
     * @param bool $equal Indicates if an equal to comparison should be done
     *
     * @example
     * ```
     * Chronos::parse('2018-07-25')->between('2018-07-14', '2018-08-01'); // true
     * Chronos::parse('2018-07-25')->between('2018-08-01', '2018-08-20'); // false
     * Chronos::parse('2018-07-25')->between('2018-07-25', '2018-08-01'); // true
     * Chronos::parse('2018-07-25')->between('2018-07-25', '2018-08-01', false); // false
     * ```
     */
    public function between($start, $end, bool $equal = true): bool
    {
    }

    /**
     * 現在の日時に対して比較演算子を適用し、真偽値を返す
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime 比較する日時
     * @return bool 比較結果等しい場合はtrue、そうでない場合はfalse
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2020-01-01');
     *  $date2 = Chronos::parse('2021-01-01');
     *  $result = $date1->eq($date2); // false
     *  ```
     */
    public function eq($dateTime): bool
    {
    }

    /**
     * 現在の日時が引数の日時と異なるかどうかを判定する
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime 比較する日時
     * @return bool 等しくない場合はtrue、等しい場合はfalse
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2020-01-01');
     *  $date2 = Chronos::parse('2021-01-01');
     *  $diffInSeconds = $date1->diffInSeconds($date2); // 31536000 (1年の秒数)
     *  ```
     */
    public function ne($dateTime): bool
    {
    }

    /**
     * 現在の日時が引数の日時よりも大きいかどうかを判定する
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime 比較する日時
     * @return bool 現在の日時が引数の日時よりも大きい場合はtrue、そうでない場合はfalse
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2020-01-01');
     *  $date2 = Chronos::parse('2021-01-01');
     *  $result = $date1->gt($date2); // false
     *  ```
     */
    public function gt($dateTime): bool
    {
    }

    /**
     * 現在の日時が引数の日時よりも大きいかどうかを判定する
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime 比較する日時
     * @return bool 現在の日時が引数の日時よりも大きい場合はtrue、そうでない場合はfalse
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2020-01-01');
     *  $date2 = Chronos::parse('2021-01-01');
     *  $result = $date1->gt($date2); // false
     *  ```
     */
    public function gte($dateTime): bool
    {
    }

    /**
     * 現在の日時が引数の日時よりも小さいかどうかを判定する
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime 比較する日時
     * @return bool 現在の日時が引数の日時よりも小さい場合はtrue、そうでない場合はfalse
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2020-01-01');
     *  $date2 = Chronos::parse('2021-01-01');
     *  $result = $date1->lt($date2); // true
     *  ```
     */
    public function lt($dateTime): bool
    {
    }

    /**
     * 現在の日時が引数の日時よりも小さいかどうかを判定する
     *
     * @param \Chronos\Chronos|\DateTimeInterface|mixed $dateTime 比較する日時
     * @return bool 現在の日時が引数の日時よりも小さい場合はtrue、そうでない場合はfalse
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2020-01-01');
     *  $date2 = Chronos::parse('2021-01-01');
     *  $result = $date1->lt($date2); // true
     *  ```
     */
    public function lte($dateTime): bool
    {
    }

    /**
     * Checks if the given date is the same day as the current instance
     *
     * @param \DateTimeInterface $dateTime The date to compare
     * @return bool True if the dates are on the same day, false otherwise
     */
    public function isSameDay(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if the given date is the same hour as the current instance
     *
     * @param \DateTimeInterface $dateTime The date to compare
     * @return bool True if the dates are on the same hour, false otherwise
     */
    public function isSameHour(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if the given date is the same minute as the current instance
     *
     * @param \DateTimeInterface $dateTime The date to compare
     * @return bool True if the dates are on the same minute, false otherwise
     */
    public function isSameMinute(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Check if two dates are in the same month.
     *
     * @param \DateTimeInterface $dateTime
     * @return bool
     */
    public function isSameMonth(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Checks if the given date is in the same quarter as the current instance.
     *
     * @param \DateTimeInterface $dateTime The date to compare.
     * @return bool True if the dates are in the same quarter, false otherwise.
     */
    public function isSameQuarter(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Checks if the given date is in the same second as the current instance.
     *
     * @param \DateTimeInterface $dateTime The date to compare.
     * @return bool True if the dates are in the same second, false otherwise.
     */
    public function isSameSecond(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Checks if the given date is in the same week as the current instance.
     *
     * @param \DateTimeInterface $dateTime The date to compare.
     * @return bool True if the dates are in the same week, false otherwise.
     *
     * @example
     *  ```
     *  $date1 = Chronos::parse('2023-05-01');
     *  $date2 = Chronos::parse('2023-05-03');
     *  $result = $date1->isSameWeek($date2); // true
     *  ```
     */
    public function isSameWeek(\DateTimeInterface $dateTime): bool
    {
    }

    /**
     * Checks if the current instance is in the same year as the given date.
     *
     * @param \DateTimeInterface $dateTime The date to compare
     * @return bool True if the dates are in the same year, false otherwise
     */
    public function isSameYear(\DateTimeInterface $dateTime): bool
    {
    }

    public function __toString(): string
    {
    }
}
