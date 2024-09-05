//#pragma once

#include "./config.h"

#if defined(NGS_BUILD_LIB_BEGIN) || defined(NGS_BUILD_LIB_END)
#	error "NGS_LIB_BEGIN or NGS_LIB_END is already defined."
#endif

#include "./details/name.h"
#include "./details/version.h"

// build version

NGS_BUILD_LIB_BEGIN

struct lib_version
{
	NGS_BUILD_LIB_PRIVATE_CALL(NGS_BUILD_LIB_PRIVATE_PARSE_VERSION, NGS_BUILD_LIB_VERSION);
};

NGS_BUILD_LIB_END