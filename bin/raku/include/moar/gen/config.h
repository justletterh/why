/* !!!
 * If you're looking at config.h and thinking of editing - this is a
 * generated file. See build/config.h.in, unless you're just twiddling
 * to get things to work on your platform before updating Configure,
 * in which case go right ahead. :-)
 * !!!
 */

/* Version information. */
#define MVM_VERSION "2020.08"
#define MVM_VERSION_MAJOR 2020
#define MVM_VERSION_MINOR 08
#define MVM_VERSION_PATCH 0

/* Various compiler-specific pragmii. */
#define MVM_NO_RETURN __declspec(noreturn)
#define MVM_NO_RETURN_ATTRIBUTE 
#define MVM_FORMAT(X, Y, Z) 
#define MVM_FALLTHROUGH 

/* DLL interface definitions. */
#define MVM_DLL_IMPORT __declspec(dllimport)
#define MVM_DLL_EXPORT __declspec(dllexport)
#define MVM_DLL_LOCAL  

/* Set in case of big-endian sytems.
 * The default byte order is little-endian. */
#if 0
#define MVM_BIGENDIAN 0
#endif

/* pthread_yield() detection */
#if 0
#define MVM_HAS_PTHREAD_YIELD 0
#endif

/* pthread_setname_np() detection */
#if 0
#define MVM_HAS_PTHREAD_SETNAME_NP 0
#endif

#if 0
#define MVM_HAS_FN_MALLOC_TRIM 0
#endif

/* How this compiler does static inline functions. */
#define MVM_STATIC_INLINE static inline

#if 1
#define MVM_CAN_UNALIGNED_INT32
#endif

#if 1
#define MVM_CAN_UNALIGNED_INT64
#endif

#if 1
#define MVM_CAN_UNALIGNED_NUM64
#endif

#define MVM_PTR_SIZE 8


#if 1
#define MVM_BOOL _Bool
#endif

/* Should we translate \n to \r\n on output? */
#define MVM_TRANSLATE_NEWLINE_OUTPUT 1

#define MVM_JIT_ARCH MVM_JIT_ARCH_X64
#define MVM_JIT_PLATFORM MVM_JIT_PLATFORM_WIN32

#define MVM_VECTORIZE_LOOP 

/* Branch condition compiler hints */
#define MVM_LIKELY(condition) (condition)
#define MVM_UNLIKELY(condition) (condition)
#define MVM_EXPECT(condition, expection) (condition)
