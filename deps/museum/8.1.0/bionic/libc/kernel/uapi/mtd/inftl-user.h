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
#ifndef __MTD_INFTL_USER_H__
#define __MTD_INFTL_USER_H__
#include <museum/8.1.0/bionic/libc/linux/types.h>
#define OSAK_VERSION 0x5120
#define PERCENTUSED 98
#define SECTORSIZE 512
struct inftl_bci {
  __u8 ECCsig[6];
  __u8 Status;
  __u8 Status1;
} __attribute__((packed));
struct inftl_unithead1 {
  __u16 virtualUnitNo;
  __u16 prevUnitNo;
  __u8 ANAC;
  __u8 NACs;
  __u8 parityPerField;
  __u8 discarded;
} __attribute__((packed));
struct inftl_unithead2 {
  __u8 parityPerField;
  __u8 ANAC;
  __u16 prevUnitNo;
  __u16 virtualUnitNo;
  __u8 NACs;
  __u8 discarded;
} __attribute__((packed));
struct inftl_unittail {
  __u8 Reserved[4];
  __u16 EraseMark;
  __u16 EraseMark1;
} __attribute__((packed));
union inftl_uci {
  struct inftl_unithead1 a;
  struct inftl_unithead2 b;
  struct inftl_unittail c;
};
struct inftl_oob {
  struct inftl_bci b;
  union inftl_uci u;
};
struct INFTLPartition {
  __u32 virtualUnits;
  __u32 firstUnit;
  __u32 lastUnit;
  __u32 flags;
  __u32 spareUnits;
  __u32 Reserved0;
  __u32 Reserved1;
} __attribute__((packed));
struct INFTLMediaHeader {
  char bootRecordID[8];
  __u32 NoOfBootImageBlocks;
  __u32 NoOfBinaryPartitions;
  __u32 NoOfBDTLPartitions;
  __u32 BlockMultiplierBits;
  __u32 FormatFlags;
  __u32 OsakVersion;
  __u32 PercentUsed;
  struct INFTLPartition Partitions[4];
} __attribute__((packed));
#define INFTL_BINARY 0x20000000
#define INFTL_BDTL 0x40000000
#define INFTL_LAST 0x80000000
#endif
