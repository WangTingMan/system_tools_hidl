#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBHIDLGENUTILS_EXPORTS_IMPL)
#define LIBHIDLGENUTILS_API __declspec(dllexport)
#else
#define LIBHIDLGENUTILS_API __declspec(dllimport)
#endif  // defined(LIBHIDLGENUTILS_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(LIBHIDLGENUTILS_EXPORTS_IMPL)
#define LIBHIDLGENUTILS_API __attribute__((visibility("default")))
#else
#define LIBHIDLGENUTILS_API
#endif  // defined(LIBHIDLGENUTILS_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
