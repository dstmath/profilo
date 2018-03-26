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
#ifndef _UAPI__IP_SET_LIST_H
#define _UAPI__IP_SET_LIST_H
#define UAPI__IP_SET_LIST_H
#define UAPI__IP_SET_LIST_H_
#define NDK_ANDROID_SUPPORT_UAPI__IP_SET_LIST_H
#define NDK_ANDROID_SUPPORT_UAPI__IP_SET_LIST_H_
#define NDK_ANDROID_SUPPORT__IP_SET_LIST_H
#define NDK_ANDROID_SUPPORT__IP_SET_LIST_H_
#define __IP_SET_LIST_H
#define __IP_SET_LIST_H_
#define _UAPI__IP_SET_LIST_H_
#include <museum/8.1.0/bionic/libc/linux/netfilter/ipset/ip_set.h>
enum {
  IPSET_ERR_NAME = IPSET_ERR_TYPE_SPECIFIC,
  IPSET_ERR_LOOP,
  IPSET_ERR_BEFORE,
  IPSET_ERR_NAMEREF,
  IPSET_ERR_LIST_FULL,
  IPSET_ERR_REF_EXIST,
};
#endif
