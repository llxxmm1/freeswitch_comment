/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ESL_H
#define PHP_ESL_H

extern zend_module_entry ESL_module_entry;
#define phpext_ESL_ptr &ESL_module_entry

#ifdef PHP_WIN32
# define PHP_ESL_API __declspec(dllexport)
#else
# define PHP_ESL_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(ESL);
PHP_MSHUTDOWN_FUNCTION(ESL);
PHP_RINIT_FUNCTION(ESL);
PHP_RSHUTDOWN_FUNCTION(ESL);
PHP_MINFO_FUNCTION(ESL);

ZEND_NAMED_FUNCTION(_wrap_ESLevent_event_set);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_event_get);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_serialized_string_set);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_serialized_string_get);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_mine_set);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_mine_get);
ZEND_NAMED_FUNCTION(_wrap_new_ESLevent);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_serialize);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_setPriority);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_getHeader);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_getBody);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_getType);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_addBody);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_addHeader);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_pushHeader);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_unshiftHeader);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_delHeader);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_firstHeader);
ZEND_NAMED_FUNCTION(_wrap_ESLevent_nextHeader);
ZEND_NAMED_FUNCTION(_wrap_new_ESLconnection);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_socketDescriptor);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_connected);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_getInfo);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_send);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_sendRecv);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_api);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_bgapi);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_sendEvent);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_sendMSG);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_recvEvent);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_recvEventTimed);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_filter);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_events);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_execute);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_executeAsync);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_setAsyncExecute);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_setEventLock);
ZEND_NAMED_FUNCTION(_wrap_ESLconnection_disconnect);
ZEND_NAMED_FUNCTION(_wrap_eslSetLogLevel);
#endif /* PHP_ESL_H */