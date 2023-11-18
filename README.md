# Chronos

Chronosは、PHPの拡張機能として提供されている日付/時刻ライブラリーです。Carbonの軽量版としてPHPの標準のDateTimeクラスと互換性があります。

### Zephirとは

Zephir は、PHPの拡張機能を容易に作成し、維持するために設計されたオープンソースの高レベルなプログラミング言語です。

https://docs.zephir-lang.com/0.12/en/welcome

## インストール

### コンパイルとインストール

1. Zephir インストーラーを使用して、ソースコードから拡張をコンパイルします。

```bash
zephir fullclean

zephir build
```

2. php.ini に以下の行を追加して、拡張機能を有効にします。

```ini
extension=chronos.so
```

3. 使い方

この拡張の基本的な使い方

```php
<?php

$chronos = \Chronos\Chronos::now();
echo $chronos->format('Y-m-d H:i:s');

// 2023-11-18 23:08:56
```

4. テスト

```bash
composer install

./vendor/bin/pest ide-stubs/tests

   PASS  Idestubs\tests\ChronosTest

  Tests:    64 passed (68 assertions)
  Duration: 0.17s
```
