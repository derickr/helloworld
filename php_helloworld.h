#ifndef PHP_HELLOWORLD_H
#define PHP_HELLOWORLD_H

#include "php.h"

extern zend_module_entry helloworld_module_entry;
#define phpext_helloworld_ptr &helloworld_module_entry

#ifdef PHP_WIN32
#define PHP_HELLOWORLD_API __declspec(dllexport)
#else
#define PHP_HELLOWORLD_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_FUNCTION(helloworld);

#endif
