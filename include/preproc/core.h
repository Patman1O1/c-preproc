#ifndef C_PREPROCESSOR_CORE_H
#define C_PREPROCESSOR_CORE_H

// Local Includes
#include "prv/core_prv.h"

#define c_preproc_expand(...) __VA_ARGS__

#define c_preproc_concat(x, y) _c_preproc_concat(x, y)

#define c_preproc_strify(x) _c_preproc_strify(x)

#endif // #ifndef C_PREPROCESSOR_CORE_H
