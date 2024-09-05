#pragma once


#if !defined(NGS_BUILD_LIB_VERSION)
#	error "NGS_BUILD_LIB_VERSION is not defined."
#endif

#define NGS_BUILD_LIB_PRIVATE_PARSE_VERSION(major_, minor_, patch_)	\
constexpr static auto major = major_;					\
constexpr static auto minor = minor_;					\
constexpr static auto patch = patch_					\
//
#define NGS_BUILD_LIB_PRIVATE_CALL(macro, version_tuple) macro version_tuple