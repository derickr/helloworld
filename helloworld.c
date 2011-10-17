#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_helloworld.h"
#include "ext/standard/info.h"

#ifdef COMPILE_DL_HELLOWORLD
ZEND_GET_MODULE(helloworld)
#endif

PHP_FUNCTION(helloworld)
{
	php_printf("Hello World!\n");
}

PHP_FUNCTION(helloearth)
{
	RETURN_STRINGL("Hello Earth!\n", 13, 1);
}

zend_function_entry helloworld_functions[] = {
	PHP_FE(helloworld, NULL)
	PHP_FE(helloearth, NULL)
	{NULL, NULL, NULL}
};

zend_module_entry helloworld_module_entry = {
	STANDARD_MODULE_HEADER,
	"helloworld",
	helloworld_functions,
	NULL, NULL, NULL, NULL, NULL,
	"0.0.1",
	STANDARD_MODULE_PROPERTIES
};
