/* -*- mode: C -*-
 *
 * Copyright (c) 2007-2011, 2013, 2014, 2015 The University of Utah
 * All rights reserved.
 *
 * This file is part of `csmith', a random generator of C programs.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

// FIXME-- need more versions, and a way to figure out which is needed
#include "custom_stdint_x86.h"

#include "custom_limits.h"

#define STATIC static

#define UNDEFINED(__val) (__val)

#define LOG_INDEX

#define LOG_EXEC

#define FUNC_NAME(x) (safe_##x)

// FIXME
#define assert(x)

#if defined (USE_MATH_MACROS_NOTMP)
#include "safe_math_macros_notmp.h"
#elif defined (USE_MATH_MACROS)
#include "safe_math_macros.h"
#else
#define FUNC_NAME(x) (safe_##x)
#include "safe_math.h"
#undef FUNC_NAME
#endif

static inline void platform_main_begin(void)
{
}

static inline void crc32_gentab (void)
{
}

#define _CSMITH_BITFIELD(x) ((x>32)?(x%32):x)

uint64_t crc32_context;

static inline void 
transparent_crc (uint64_t val, char* vname, int flag)
{
  crc32_context += val;
}

static void 
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
  int i;
  for (i=0; i<nbytes; i++) {
    crc32_context += ptr[i];
  }
}

static inline void
platform_main_end (uint64_t x, int flag)
{
}
