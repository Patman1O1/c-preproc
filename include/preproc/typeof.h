#ifndef C_PREPROCESSOR_TYPEOF_H
#define C_PREPROCESSOR_TYPEOF_H

// ISO Includes
#include <stdbool.h>

// Local Includes
#include <preproc/stdc_version.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= C_PP_STDC_VERSION_23
    #define c_pp_typeof(x) typeof(x)
#elif defined(__GNUC__) || defined(__clang__) || defined(__TINYC__)
    #define TYPEOF(x) __typeof__(x)
#elif defined(_MSC_VER) && _MSC_VER >= 1939 && !defined(__cplusplus)
    #define c_pp_typeof(x) __typeof__(x)
#endif // #ifndef ...

#ifdef c_pp_typeof
    #define C_PP_HAS_TYPEOF true
#else
    #define C_PP_HAS_TYPEOF false
#endif // #ifdef c_pp_typeof

#endif // #ifndef C_PREPROCESSOR_TYPEOF_H
