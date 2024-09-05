#pragma once

#if !defined(NGS_BUILD_LIB_NAME)
#	error "NGS_BUILD_LIB_NAME is not defined."
#endif

#define NGS_BUILD_LIB_BEGIN NGS_BUILD_LIB_INLINE_MODIFIER namespace NGS_BUILD_LIB_NAME {
#define NGS_BUILD_LIB_END }