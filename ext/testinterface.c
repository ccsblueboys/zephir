
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_test.h"
#include "test.h"

#include "Zend/zend_operators.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_interfaces.h"

#include "kernel/main.h"


/**
 * Sample exception class
 */
ZEPHIR_INIT_CLASS(Test_TestInterface) {

	ZEPHIR_REGISTER_CLASS(Test, TestInterface, testinterface, test_testinterface_method_entry, 0);


	return SUCCESS;

}
