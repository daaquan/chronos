# Chronos

Chronos is a lightweight date/time extension for PHP 8+. It extends the native `DateTime` class and offers Carbon-like helpers implemented in Zephir.

## Building the Extension

1. Compile the source and install the module:

```bash
cd ext
phpize
./configure
make
sudo make install
```

2. Enable the extension by adding the following line to your `php.ini`:

```ini
extension=chronos.so
```

## Usage

```php
<?php
$chronos = \Chronos\Chronos::now();
echo $chronos->format('Y-m-d H:i:s');
```

## Running Tests

Install development dependencies and execute the test suite:

```bash
composer install
php vendor/bin/pest --configuration ide-stubs/phpunit.xml.dist
```

All tests should pass without failures.
