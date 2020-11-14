typedef unsigned int   uint;
typedef unsigned int   uint32_t;
typedef unsigned char  uint8_t;
typedef unsigned short ushort;
typedef unsigned short uint16_t;
typedef unsigned char  uchar;
typedef uint pde_t;

typedef __builtin_va_list va_list;

#define va_start(ap, last) __builtin_va_start(ap, last)

#define va_arg(ap, type) __builtin_va_arg(ap, type)

#define va_end(ap) __builtin_va_end(ap)

#ifndef NULL
#define NULL ((void*) 0)
#endif
