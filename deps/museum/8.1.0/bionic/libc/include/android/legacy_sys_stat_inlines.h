/*
 * Copyright (C) 2015 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _ANDROID_LEGACY_SYS_STAT_INLINES_H_
#define _ANDROID_LEGACY_SYS_STAT_INLINES_H_
#define ANDROID_LEGACY_SYS_STAT_INLINES_H_
#define ANDROID_LEGACY_SYS_STAT_INLINES_H
#define NDK_ANDROID_SUPPORT_ANDROID_LEGACY_SYS_STAT_INLINES_H_
#define NDK_ANDROID_SUPPORT_ANDROID_LEGACY_SYS_STAT_INLINES_H
#define _ANDROID_LEGACY_SYS_STAT_INLINES_H

#include <museum/8.1.0/bionic/libc/sys/cdefs.h>
#include <museum/8.1.0/bionic/libc/sys/stat.h>

#if __ANDROID_API__ < __ANDROID_API_L__

__BEGIN_DECLS

static __inline int mkfifo(const char *__p, mode_t __m) {
  return mknod(__p, (__m & ~S_IFMT) | S_IFIFO, (dev_t)0);
}

__END_DECLS

#endif
#endif /* _ANDROID_LEGACY_SYS_STAT_INLINES_H_ */
