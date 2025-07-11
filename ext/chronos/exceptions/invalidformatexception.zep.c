
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Chronos_Exceptions_InvalidFormatException)
{
	ZEPHIR_REGISTER_CLASS_EX(Chronos\\Exceptions, InvalidFormatException, chronos, exceptions_invalidformatexception, zend_ce_exception, NULL, 0);

	return SUCCESS;
}

