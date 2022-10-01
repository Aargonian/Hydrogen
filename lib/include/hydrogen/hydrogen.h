#ifndef HYDROGEN_MAIN_INC_H
#define HYDROGEN_MAIN_INC_H

#include <stdio.h>
#include <stdint.h>

extern unsigned int HYDROGEN_VERSION_MAJOR;
extern unsigned int HYDROGEN_VERSION_MINOR;
extern unsigned int HYDROGEN_VERSION_PATCH;

#include<hydrogen/constants.h>

/* Common Typedefs using Rust idioms because why not? */
typedef uint_least8_t u8;
typedef uint_least16_t u16;
typedef uint_least32_t u32;
typedef uint_least64_t u64;
typedef int_least8_t i8;
typedef int_least16_t i16;
typedef int_least32_t i32;
typedef int_least64_t i64;
typedef size_t usize;

typedef float f32;
typedef double f64;

#ifdef HYDROGEN_REAL_FLOAT
    typedef f32 real;
#else
    typedef f64 real;
#endif

void test();


#endif//HYDROGEN_MAIN_INC_H
