
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "chronos.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *chronos_chronos_ce;
zend_class_entry *chronos_exceptions_invalidformatexception_ce;

ZEND_DECLARE_MODULE_GLOBALS(chronos)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(chronos)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Chronos_Chronos);
	ZEPHIR_INIT(Chronos_Exceptions_InvalidFormatException);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(chronos)
{
	
	zephir_deinitialize_memory();
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_chronos_globals *chronos_globals)
{
	chronos_globals->initialized = 0;

	/* Cache Enabled */
	chronos_globals->cache_enabled = 1;

	/* Recursive Lock */
	chronos_globals->recursive_lock = 0;

	/* Static cache */
	memset(chronos_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_chronos_globals *chronos_globals)
{
	
}

static PHP_RINIT_FUNCTION(chronos)
{
	zend_chronos_globals *chronos_globals_ptr;
	chronos_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(chronos_globals_ptr);
	zephir_initialize_memory(chronos_globals_ptr);

	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(chronos)
{
	
	zephir_deinitialize_memory();
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(chronos)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_CHRONOS_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_CHRONOS_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_CHRONOS_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_CHRONOS_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_CHRONOS_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(chronos)
{
#if defined(COMPILE_DL_CHRONOS) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	php_zephir_init_globals(chronos_globals);
	php_zephir_init_module_globals(chronos_globals);
}

static PHP_GSHUTDOWN_FUNCTION(chronos)
{
	
}


zend_function_entry php_chronos_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_chronos_deps[] = {
	
	ZEND_MOD_END
};

zend_module_entry chronos_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_chronos_deps,
	PHP_CHRONOS_EXTNAME,
	php_chronos_functions,
	PHP_MINIT(chronos),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(chronos),
#else
	NULL,
#endif
	PHP_RINIT(chronos),
	PHP_RSHUTDOWN(chronos),
	PHP_MINFO(chronos),
	PHP_CHRONOS_VERSION,
	ZEND_MODULE_GLOBALS(chronos),
	PHP_GINIT(chronos),
	PHP_GSHUTDOWN(chronos),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(chronos),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

/* implement standard "stub" routine to introduce ourselves to Zend */
#ifdef COMPILE_DL_CHRONOS
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(chronos)
#endif
