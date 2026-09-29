#ifndef C_PREPROCESSOR_GNU_ATTRIBUTES_H
#define C_PREPROCESSOR_GNU_ATTRIBUTES_H

#ifdef __GNUC__
    #define c_pp_gnu_attr(...) __attribute__((__VA_ARGS__))
#else
    #define c_pp_gnu_attr(...)
#endif // #ifdef __GNUC__

#define c_pp_gnu_alias(target) c_pp_gnu_attr(alias(target))

#define c_pp_gnu_aligned(...) c_pp_gnu_attr(aligned(__VA_ARGS__))

#define c_pp_gnu_alloc_size(...) c_pp_gnu_attr(alloc_size(__VA_ARGS__))

#define c_pp_gnu_cleanup(...) c_pp_gnu_attr(cleanup(__VA_ARGS__))

#define c_pp_gnu_common c_pp_gnu_attr(common)

#define c_pp_gnu_nocommon c_pp_gnu_attr(nocommon)

#define c_pp_gnu_copy(ref) c_pp_gnu_attr(copy(ref))

#define c_pp_gnu_deprecated(...) c_pp_gnu_attr(deprecated(__VA_ARGS__))

#define c_pp_gnu_mode(mode) c_pp_gnu_attr(mode(mode))

#define c_pp_gnu_nonstring c_pp_gnu_attr(nonstring)

#define c_pp_gnu_packed c_pp_gnu_attr(packed)

#define c_pp_gnu_persistent c_pp_gnu_attr(persistent)

#define c_pp_gnu_retain c_pp_gnu_attr(retain)

#define c_pp_gnu_section(name) c_pp_gnu_attr(section(name))

#define c_pp_gnu_tls_model(model) c_pp_gnu_attr(tls_model(model))

#define c_pp_gnu_uninitialized c_pp_gnu_attr(uninitialized)

#define c_pp_gnu_unavailable(...) c_pp_gnu_attr(unavailable(__VA_ARGS__))

#define c_pp_gnu_unused c_pp_gnu_attr(unused)

#define c_pp_gnu_used c_pp_gnu_attr(used)

#define c_pp_gnu_vector_size(bytes)  c_pp_gnu_attr(vector_size(bytes))

#define c_pp_gnu_visibility(mode) c_pp_gnu_attr(visibility(mode))

#define c_pp_gnu_weak c_pp_gnu_attr(weak)

#define c_pp_gnu_zero_call_used_regs(...) \
    c_pp_gnu_attr(zero_call_used_regs(__VA_ARGS__))

#define c_pp_gnu_access(...) c_pp_gnu_attr(access(__VA_ARGS__))

#define c_pp_gnu_alloc_align(...) c_pp_gnu_attr(alloc_align(__VA_ARGS__))

#define c_pp_gnu_always_inline c_pp_gnu_attr(always_inline)

#define c_pp_gnu_gnu_inline c_pp_gnu_attr(gnu_inline)

#define c_pp_gnu_noinline c_pp_gnu_attr(noinline)

#define c_pp_gnu_cold c_pp_gnu_attr(cold)

#define c_pp_gnu_hot c_pp_gnu_attr(hot)

#define c_pp_gnu_pure c_pp_gnu_attr(pure)

#define c_pp_gnu_const c_pp_gnu_attr(const)

#define c_pp_gnu_noreturn c_pp_gnu_attr(noreturn)

#define c_pp_gnu_returns_nonnull c_pp_gnu_attr(returns_nonnull)

#define c_pp_gnu_returns_twice c_pp_gnu_attr(returns_twice)

#define c_pp_gnu_malloc c_pp_gnu_attr(malloc)

#define c_pp_gnu_warn_unused_result c_pp_gnu_attr(warn_unused_result)

#define c_pp_gnu_fallthrough c_pp_gnu_attr(fallthrough)

#define c_pp_gnu_constructor(...) c_pp_gnu_attr(constructor(__VA_ARGS__))

#define c_pp_gnu_destructor(...) c_pp_gnu_attr(destructor(__VA_ARGS__))

#define c_pp_gnu_format(...) c_pp_gnu_attr(format(__VA_ARGS__))

#define c_pp_gnu_format_arg(...) c_pp_gnu_attr(format_arg(__VA_ARGS__))

#define c_pp_gnu_nonnull(...) c_pp_gnu_attr(nonnull(__VA_ARGS__))

#define c_pp_gnu_sentinel(...) c_pp_gnu_attr(sentinel(__VA_ARGS__))

#define c_pp_gnu_flatten c_pp_gnu_attr(flatten)

#define c_pp_gnu_leaf c_pp_gnu_attr(leaf)

#define c_pp_gnu_noclone c_pp_gnu_attr(noclone)

#define c_pp_gnu_no_instrument_function c_pp_gnu_attr(no_instrument_function)

#define c_pp_gnu_no_sanitize(...) c_pp_gnu_attr(no_sanitize(__VA_ARGS__))

#define c_pp_gnu_target(...) c_pp_gnu_attr(target(__VA_ARGS__))

#define c_pp_gnu_optimize(...) c_pp_gnu_attr(optimize(__VA_ARGS__))

#define c_pp_gnu_ifunc(resolver) c_pp_gnu_attr(ifunc(resolver))

#define c_pp_gnu_weakref(...) c_pp_gnu_attr(weakref(__VA_ARGS__))

#define c_pp_gnu_error(msg) c_pp_gnu_attr(error(msg))

#define c_pp_gnu_warning(msg) c_pp_gnu_attr(warning(msg))

#define c_pp_gnu_transparent_union c_pp_gnu_attr(transparent_union)

#define c_pp_gnu_may_alias c_pp_gnu_attr(may_alias)

#define c_pp_gnu_designated_init c_pp_gnu_attr(designated_init)

#define c_pp_gnu_scalar_storage_order(order) \
    c_pp_gnu_attr(scalar_storage_order(order))

#endif // #ifndef C_PREPROCESSOR_GNU_ATTRIBUTES_H
