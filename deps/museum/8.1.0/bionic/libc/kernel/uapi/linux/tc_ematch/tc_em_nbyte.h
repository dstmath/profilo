/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_TC_EM_NBYTE_H
#define __LINUX_TC_EM_NBYTE_H
#define _LINUX_TC_EM_NBYTE_H
#define _LINUX_TC_EM_NBYTE_H_
#define _UAPI_LINUX_TC_EM_NBYTE_H
#define _UAPI_LINUX_TC_EM_NBYTE_H_
#define NDK_ANDROID_SUPPORT__LINUX_TC_EM_NBYTE_H
#define NDK_ANDROID_SUPPORT__LINUX_TC_EM_NBYTE_H_
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_TC_EM_NBYTE_H
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_TC_EM_NBYTE_H_
#define _UAPI__LINUX_TC_EM_NBYTE_H
#define _UAPI__LINUX_TC_EM_NBYTE_H_
#define __LINUX_TC_EM_NBYTE_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/pkt_cls.h>
struct tcf_em_nbyte {
  __u16 off;
  __u16 len : 12;
  __u8 layer : 4;
};
#endif
