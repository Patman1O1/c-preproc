#ifndef C_PREPROCESSOR_GNU_EXPECT_H
#define C_PREPROCESSOR_GNU_EXPECT_H

#ifdef __GNUC__
    #define c_pp_gnu_likely(expr) __builtin_expect(!!(expr), 1)

    #define c_pp_gnu_unlikely(expr) __builtin_expect(!!(expr), 0)
#else
    #define c_pp_gnu_likely(expr)

    #define c_pp_gnu_unlikely(expr)
#endif // #ifdef __GNUC__

#endif // #ifndef C_PREPROCESSOR_GNU_EXPECT_H
