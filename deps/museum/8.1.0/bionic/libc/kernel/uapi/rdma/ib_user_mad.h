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
#ifndef IB_USER_MAD_H
#define IB_USER_MAD_H
#define _IB_USER_MAD_H
#define _IB_USER_MAD_H_
#define _UAPI_IB_USER_MAD_H
#define _UAPI_IB_USER_MAD_H_
#define NDK_ANDROID_SUPPORT_UAPIIB_USER_MAD_H
#define NDK_ANDROID_SUPPORT_UAPIIB_USER_MAD_H_
#define _UAPIIB_USER_MAD_H
#define _UAPIIB_USER_MAD_H_
#define IB_USER_MAD_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/ioctl.h>
#define IB_USER_MAD_ABI_VERSION 5
struct ib_user_mad_hdr_old {
  __u32 id;
  __u32 status;
  __u32 timeout_ms;
  __u32 retries;
  __u32 length;
  __be32 qpn;
  __be32 qkey;
  __be16 lid;
  __u8 sl;
  __u8 path_bits;
  __u8 grh_present;
  __u8 gid_index;
  __u8 hop_limit;
  __u8 traffic_class;
  __u8 gid[16];
  __be32 flow_label;
};
struct ib_user_mad_hdr {
  __u32 id;
  __u32 status;
  __u32 timeout_ms;
  __u32 retries;
  __u32 length;
  __be32 qpn;
  __be32 qkey;
  __be16 lid;
  __u8 sl;
  __u8 path_bits;
  __u8 grh_present;
  __u8 gid_index;
  __u8 hop_limit;
  __u8 traffic_class;
  __u8 gid[16];
  __be32 flow_label;
  __u16 pkey_index;
  __u8 reserved[6];
};
struct ib_user_mad {
  struct ib_user_mad_hdr hdr;
  __u64 data[0];
};
typedef unsigned long __attribute__((aligned(4))) packed_ulong;
#define IB_USER_MAD_LONGS_PER_METHOD_MASK (128 / (8 * sizeof(long)))
struct ib_user_mad_reg_req {
  __u32 id;
  packed_ulong method_mask[IB_USER_MAD_LONGS_PER_METHOD_MASK];
  __u8 qpn;
  __u8 mgmt_class;
  __u8 mgmt_class_version;
  __u8 oui[3];
  __u8 rmpp_version;
};
enum {
  IB_USER_MAD_USER_RMPP = (1 << 0),
};
#define IB_USER_MAD_REG_FLAGS_CAP (IB_USER_MAD_USER_RMPP)
struct ib_user_mad_reg_req2 {
  __u32 id;
  __u32 qpn;
  __u8 mgmt_class;
  __u8 mgmt_class_version;
  __u16 res;
  __u32 flags;
  __u64 method_mask[2];
  __u32 oui;
  __u8 rmpp_version;
  __u8 reserved[3];
};
#define IB_IOCTL_MAGIC 0x1b
#define IB_USER_MAD_REGISTER_AGENT _IOWR(IB_IOCTL_MAGIC, 1, struct ib_user_mad_reg_req)
#define IB_USER_MAD_UNREGISTER_AGENT _IOW(IB_IOCTL_MAGIC, 2, __u32)
#define IB_USER_MAD_ENABLE_PKEY _IO(IB_IOCTL_MAGIC, 3)
#define IB_USER_MAD_REGISTER_AGENT2 _IOWR(IB_IOCTL_MAGIC, 4, struct ib_user_mad_reg_req2)
#endif
