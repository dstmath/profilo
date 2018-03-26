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
#ifndef _XT_TPROXY_H
#define _XT_TPROXY_H
#define XT_TPROXY_H
#define XT_TPROXY_H_
#define _UAPI_XT_TPROXY_H
#define _UAPI_XT_TPROXY_H_
#define _XT_TPROXY_H_
#include <museum/7.1.2/bionic/libc/linux/types.h>
struct xt_tproxy_target_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 mark_mask;
  __u32 mark_value;
  __be32 laddr;
  __be16 lport;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct xt_tproxy_target_info_v1 {
  __u32 mark_mask;
  __u32 mark_value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union nf_inet_addr laddr;
  __be16 lport;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
