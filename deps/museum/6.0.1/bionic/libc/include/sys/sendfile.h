/*
 * Copyright (C) 2008 The Android Open Source Project
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

#ifndef _SYS_SENDFILE_H_
#define _SYS_SENDFILE_H_
#define SYS_SENDFILE_H_
#define SYS_SENDFILE_H
#define NDK_ANDROID_SUPPORT_SYS_SENDFILE_H_
#define NDK_ANDROID_SUPPORT_SYS_SENDFILE_H
#define _SYS_SENDFILE_H

#include <museum/6.0.1/bionic/libc/sys/cdefs.h>
#include <museum/6.0.1/bionic/libc/sys/types.h>

__BEGIN_DECLS

#if defined(__USE_FILE_OFFSET64)
extern ssize_t sendfile(int out_fd, int in_fd, off_t* offset, size_t count) __RENAME(sendfile64);
#else
extern ssize_t sendfile(int out_fd, int in_fd, off_t* offset, size_t count);
#endif
extern ssize_t sendfile64(int out_fd, int in_fd, off64_t* offset, size_t count);

__END_DECLS

#endif /* _SYS_SENDFILE_H_ */
