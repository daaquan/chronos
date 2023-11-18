
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_CHRONOS_H
#define PHP_CHRONOS_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_CHRONOS_NAME        "chronos"
#define PHP_CHRONOS_VERSION     "0.0.1"
#define PHP_CHRONOS_EXTNAME     "chronos"
#define PHP_CHRONOS_AUTHOR      "Phalcon Team"
#define PHP_CHRONOS_ZEPVERSION  "0.17.0-9f99da6"
#define PHP_CHRONOS_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(chronos)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(chronos)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(chronos)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(chronos, v)
#else
	#define ZEPHIR_GLOBAL(v) (chronos_globals.v)
#endif

#ifdef ZTS
	ZEND_TSRMLS_CACHE_EXTERN()
	#define ZEPHIR_VGLOBAL ((zend_chronos_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(chronos_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(chronos_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def chronos_globals
#define zend_zephir_globals_def zend_chronos_globals

extern zend_module_entry chronos_module_entry;
#define phpext_chronos_ptr &chronos_module_entry

#endif
