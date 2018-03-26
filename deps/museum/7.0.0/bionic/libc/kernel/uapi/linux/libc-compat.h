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
#ifndef _UAPI_LIBC_COMPAT_H
#define _UAPI_LIBC_COMPAT_H
#define UAPI_LIBC_COMPAT_H
#define UAPI_LIBC_COMPAT_H_
#define _LIBC_COMPAT_H
#define _LIBC_COMPAT_H_
#define _UAPI_LIBC_COMPAT_H_
#ifdef __GLIBC__
#ifdef _NETINET_IN_H
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN_ADDR 0
#define __UAPI_DEF_IN_IPPROTO 0
#define __UAPI_DEF_IN_PKTINFO 0
#define __UAPI_DEF_IP_MREQ 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_SOCKADDR_IN 0
#define __UAPI_DEF_IN_CLASS 0
#define __UAPI_DEF_IN6_ADDR 0
#if defined(__USE_MISC) || defined(__USE_GNU)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN6_ADDR_ALT 0
#else
#define __UAPI_DEF_IN6_ADDR_ALT 1
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_SOCKADDR_IN6 0
#define __UAPI_DEF_IPV6_MREQ 0
#define __UAPI_DEF_IPPROTO_V6 0
#define __UAPI_DEF_IPV6_OPTIONS 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN6_PKTINFO 0
#define __UAPI_DEF_IP6_MTUINFO 0
#else
#define __UAPI_DEF_IN_ADDR 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN_IPPROTO 1
#define __UAPI_DEF_IN_PKTINFO 1
#define __UAPI_DEF_IP_MREQ 1
#define __UAPI_DEF_SOCKADDR_IN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN_CLASS 1
#define __UAPI_DEF_IN6_ADDR 1
#define __UAPI_DEF_IN6_ADDR_ALT 1
#define __UAPI_DEF_SOCKADDR_IN6 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IPV6_MREQ 1
#define __UAPI_DEF_IPPROTO_V6 1
#define __UAPI_DEF_IPV6_OPTIONS 1
#define __UAPI_DEF_IN6_PKTINFO 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IP6_MTUINFO 1
#endif
#ifdef _SYS_XATTR_H
#define __UAPI_DEF_XATTR 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define __UAPI_DEF_XATTR 1
#endif
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN_ADDR 1
#define __UAPI_DEF_IN_IPPROTO 1
#define __UAPI_DEF_IN_PKTINFO 1
#define __UAPI_DEF_IP_MREQ 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_SOCKADDR_IN 1
#define __UAPI_DEF_IN_CLASS 1
#define __UAPI_DEF_IN6_ADDR 1
#define __UAPI_DEF_IN6_ADDR_ALT 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_SOCKADDR_IN6 1
#define __UAPI_DEF_IPV6_MREQ 1
#define __UAPI_DEF_IPPROTO_V6 1
#define __UAPI_DEF_IPV6_OPTIONS 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __UAPI_DEF_IN6_PKTINFO 1
#define __UAPI_DEF_IP6_MTUINFO 1
#define __UAPI_DEF_XATTR 1
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
