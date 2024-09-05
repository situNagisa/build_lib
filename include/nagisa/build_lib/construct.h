//#pragma once

#include "./config.h"

#if defined(NGS_BUILD_LIB_BEGIN) || defined(NGS_BUILD_LIB_END)
#	error "NGS_LIB_BEGIN or NGS_LIB_END is already defined."
#endif

#include "./details/root.h"
#include "./details/name.h"
#include "./details/detail.h"
#include "./details/version.h"

// build lib namespace

#if NGS_BUILD_LIB_CONFIG_DISABLE_NGS_ROOT_NS
#
#	define NGS_BUILD_LIB_BEGIN NGS_BUILD_LIB_INLINE_MODIFIER namespace NGS_BUILD_LIB_NAME {
#	define NGS_BUILD_LIB_END }
#
#else
#
#	define NGS_BUILD_LIB_BEGIN namespace NGS_NS { NGS_BUILD_LIB_INLINE_MODIFIER namespace NGS_BUILD_LIB_NAME {
#	define NGS_BUILD_LIB_END } }
#
#endif

// build version

NGS_BUILD_LIB_BEGIN

struct lib_version
{
	NGS_BUILD_LIB_PRIVATE_CALL(NGS_BUILD_LIB_PRIVATE_PARSE_VERSION, NGS_BUILD_LIB_VERSION);
};

NGS_BUILD_LIB_END