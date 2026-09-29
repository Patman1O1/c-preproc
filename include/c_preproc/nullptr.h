#ifndef C_PREPROCESSOR_NULLPTR_H
#define C_PREPROCESSOR_NULLPTR_H

// ISO Includes
#include <stdlib.h>

// Local Includes
#include "stdc_version.h"

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= C_PP_STDC_VERSION_23
    #define c_pp_nullptr nullptr
#else
    #define c_pp_nullptr NULL
#endif // #ifndef ...

#endif // #ifndef C_PREPROCESSOR_NULLPTR_H
