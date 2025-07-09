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

## Building with Docker

```bash
docker build -t chronos-ext .
# Build using the provided Dockerfile and php.ini
```

You can then run:

```bash
docker run --rm chronos-ext php -m | grep chronos
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

## Packaging for PECL

Create the `package.xml` file describing the extension and run the `pecl package` command from the repository root:

```bash
pecl package
```

This will generate a distributable `chronos-0.0.1.tgz` archive that can be uploaded to PECL.


