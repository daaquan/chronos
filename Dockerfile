FROM php:8.3-cli-alpine

RUN apk add --no-cache --virtual .build-deps \
        autoconf gcc g++ make \
        php8-dev linux-headers \
    && docker-php-source extract

COPY ./ext /usr/src/php/ext/chronos

RUN cd /usr/src/php/ext/chronos \
    && phpize \
    && ./configure \
    && make -j$(nproc) \
    && make install

COPY ./php.ini /usr/local/etc/php/conf.d/chronos.ini

RUN docker-php-source delete && apk del .build-deps

CMD ["php", "-a"]
