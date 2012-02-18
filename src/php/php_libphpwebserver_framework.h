/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LIBPHPWEBSERVER_FRAMEWORK_H
#define PHP_LIBPHPWEBSERVER_FRAMEWORK_H

extern zend_module_entry libphpwebserver_framework_module_entry;
#define phpext_libphpwebserver_framework_ptr &libphpwebserver_framework_module_entry

#ifdef PHP_WIN32
# define PHP_LIBPHPWEBSERVER_FRAMEWORK_API __declspec(dllexport)
#else
# define PHP_LIBPHPWEBSERVER_FRAMEWORK_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(libphpwebserver_framework);
PHP_MSHUTDOWN_FUNCTION(libphpwebserver_framework);
PHP_RINIT_FUNCTION(libphpwebserver_framework);
PHP_RSHUTDOWN_FUNCTION(libphpwebserver_framework);
PHP_MINFO_FUNCTION(libphpwebserver_framework);

ZEND_NAMED_FUNCTION(_wrap_new_StringVector);
ZEND_NAMED_FUNCTION(_wrap_StringVector_size);
ZEND_NAMED_FUNCTION(_wrap_StringVector_capacity);
ZEND_NAMED_FUNCTION(_wrap_StringVector_reserve);
ZEND_NAMED_FUNCTION(_wrap_StringVector_clear);
ZEND_NAMED_FUNCTION(_wrap_StringVector_push);
ZEND_NAMED_FUNCTION(_wrap_StringVector_is_empty);
ZEND_NAMED_FUNCTION(_wrap_StringVector_pop);
ZEND_NAMED_FUNCTION(_wrap_StringVector_get);
ZEND_NAMED_FUNCTION(_wrap_StringVector_set);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_continue_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_switching_protocol_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_processing_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_ok_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_created_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_accepted_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_non_authoritative_information_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_no_content_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_reset_content_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_partial_content_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_multi_status_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_multiple_choices_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_moved_permanently_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_found_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_see_other_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_not_modified_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_use_proxy_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_switch_proxy_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_temporary_redirect_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_bad_request_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_unauthorized_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_payment_required_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_forbidden_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_not_found_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_not_allowed_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_not_acceptable_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_proxy_authentication_required_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_request_timeout_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_conflict_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_gone_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_length_required_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_precondition_failed_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_request_entity_too_large_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_request_uri_too_long_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_unsupported_media_type_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_requested_range_not_satisfiable_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_expectation_failed_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_unprocessable_entity_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_locked_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_failed_dependency_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_unordered_collection_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_upgrade_required_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_retry_with_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_internal_server_error_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_not_implemented_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_bad_gateway_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_service_unavailable_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_gateway_timeout_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_version_not_supported_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_variant_also_negotiated_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_insufficient_storage_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_bandwidth_limit_exceeded_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_not_extended_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_accept_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_accept_charset_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_accept_encoding_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_accept_language_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_accept_ranges_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_age_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_allow_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_authorization_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_cache_control_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_connection_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_encoding_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_language_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_length_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_location_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_md5_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_range_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_content_type_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_date_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_etag_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_expect_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_expires_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_from_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_host_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_if_match_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_if_modified_since_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_if_none_match_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_if_range_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_if_unmodified_since_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_last_modified_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_location_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_max_forwards_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_pragma_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_proxy_authenticate_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_proxy_authentication_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_range_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_referer_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_retry_after_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_server_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_te_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_trailer_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_transfer_encoding_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_upgrade_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_user_agent_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_vary_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_via_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_warning_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_header_www_authenticate_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_version_1_0_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_version_1_1_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_connect_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_delete_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_head_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_get_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_options_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_post_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_put_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_method_trace_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_post_encoding_form_urlencoded_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_http_post_encoding_multipart_formdata_get);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_tokenizeUrl);
ZEND_NAMED_FUNCTION(_wrap_HttpUtils_standardizeUrl);
ZEND_NAMED_FUNCTION(_wrap_new_HttpUtils);
ZEND_NAMED_FUNCTION(_wrap_new_ArgComparator);
ZEND_NAMED_FUNCTION(_wrap_new_HttpEndpoint);
ZEND_NAMED_FUNCTION(_wrap_HttpEndpoint_match);
ZEND_NAMED_FUNCTION(_wrap_HttpEndpoint_get_url_pars);
ZEND_NAMED_FUNCTION(_wrap_HttpEndpoint_get_url_pieces);
ZEND_NAMED_FUNCTION(_wrap_HttpEndpoint_get_chunk_positions);
ZEND_NAMED_FUNCTION(_wrap_new_HttpRequest);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getUser);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getPass);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getPath);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getPathPieces);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getMethod);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getHeaders);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getArgs);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getHeader);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getArg);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_getContent);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setHeader);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setArg);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setContent);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_growContent);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setPath);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setMethod);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_removeHeader);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setHeaders);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setArgs);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setUser);
ZEND_NAMED_FUNCTION(_wrap_HttpRequest_setPass);
ZEND_NAMED_FUNCTION(_wrap_new_HttpResponse);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_getContent);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setContent);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_getHeader);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_getFooter);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setHeader);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setFooter);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setContentType);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_removeHeader);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_getHeaders);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_getFooters);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setHeaders);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setFooters);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_setResponseCode);
ZEND_NAMED_FUNCTION(_wrap_HttpResponse_getResponseCode);
ZEND_NAMED_FUNCTION(_wrap_new_HttpResource);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_404);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_500);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_405);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_GET);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_POST);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_PUT);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_HEAD);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_DELETE);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_TRACE);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_OPTIONS);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_render_CONNECT);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_routeRequest);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_setAllowing);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_allowAll);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_disallowAll);
ZEND_NAMED_FUNCTION(_wrap_HttpResource_isAllowed);
ZEND_NAMED_FUNCTION(_wrap_new_LoggingDelegate);
ZEND_NAMED_FUNCTION(_wrap_LoggingDelegate_log_access);
ZEND_NAMED_FUNCTION(_wrap_LoggingDelegate_log_error);
ZEND_NAMED_FUNCTION(_wrap_new_RequestValidator);
ZEND_NAMED_FUNCTION(_wrap_RequestValidator_validate);
ZEND_NAMED_FUNCTION(_wrap_new_Unescaper);
ZEND_NAMED_FUNCTION(_wrap_Unescaper_unescape);
ZEND_NAMED_FUNCTION(_wrap_new_Webserver);
ZEND_NAMED_FUNCTION(_wrap_Webserver_start);
ZEND_NAMED_FUNCTION(_wrap_Webserver_stop);
ZEND_NAMED_FUNCTION(_wrap_Webserver_isRunning);
ZEND_NAMED_FUNCTION(_wrap_Webserver_registerResource);
ZEND_NAMED_FUNCTION(_wrap_Webserver_sweetKill);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_pp_set);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_pp_get);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_completeUri_set);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_completeUri_get);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_dhr_set);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_dhr_get);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_second_set);
ZEND_NAMED_FUNCTION(_wrap_ModdedRequest_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_ModdedRequest);
#endif /* PHP_LIBPHPWEBSERVER_FRAMEWORK_H */