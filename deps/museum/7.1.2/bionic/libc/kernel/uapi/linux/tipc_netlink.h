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
#ifndef _LINUX_TIPC_NETLINK_H_
#define _LINUX_TIPC_NETLINK_H_
#define LINUX_TIPC_NETLINK_H_
#define LINUX_TIPC_NETLINK_H
#define _UAPI_LINUX_TIPC_NETLINK_H_
#define _UAPI_LINUX_TIPC_NETLINK_H
#define _LINUX_TIPC_NETLINK_H
#define TIPC_GENL_V2_NAME "TIPCv2"
#define TIPC_GENL_V2_VERSION 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TIPC_NL_UNSPEC,
  TIPC_NL_LEGACY,
  TIPC_NL_BEARER_DISABLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NL_BEARER_ENABLE,
  TIPC_NL_BEARER_GET,
  TIPC_NL_BEARER_SET,
  TIPC_NL_SOCK_GET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NL_PUBL_GET,
  TIPC_NL_LINK_GET,
  TIPC_NL_LINK_SET,
  TIPC_NL_LINK_RESET_STATS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NL_MEDIA_GET,
  TIPC_NL_MEDIA_SET,
  TIPC_NL_NODE_GET,
  TIPC_NL_NET_GET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NL_NET_SET,
  TIPC_NL_NAME_TABLE_GET,
  __TIPC_NL_CMD_MAX,
  TIPC_NL_CMD_MAX = __TIPC_NL_CMD_MAX - 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TIPC_NLA_UNSPEC,
  TIPC_NLA_BEARER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_SOCK,
  TIPC_NLA_PUBL,
  TIPC_NLA_LINK,
  TIPC_NLA_MEDIA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_NODE,
  TIPC_NLA_NET,
  TIPC_NLA_NAME_TABLE,
  __TIPC_NLA_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_MAX = __TIPC_NLA_MAX - 1
};
enum {
  TIPC_NLA_BEARER_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_BEARER_NAME,
  TIPC_NLA_BEARER_PROP,
  TIPC_NLA_BEARER_DOMAIN,
  TIPC_NLA_BEARER_UDP_OPTS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TIPC_NLA_BEARER_MAX,
  TIPC_NLA_BEARER_MAX = __TIPC_NLA_BEARER_MAX - 1
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_UDP_UNSPEC,
  TIPC_NLA_UDP_LOCAL,
  TIPC_NLA_UDP_REMOTE,
  __TIPC_NLA_UDP_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_UDP_MAX = __TIPC_NLA_UDP_MAX - 1
};
enum {
  TIPC_NLA_SOCK_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_SOCK_ADDR,
  TIPC_NLA_SOCK_REF,
  TIPC_NLA_SOCK_CON,
  TIPC_NLA_SOCK_HAS_PUBL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TIPC_NLA_SOCK_MAX,
  TIPC_NLA_SOCK_MAX = __TIPC_NLA_SOCK_MAX - 1
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_LINK_UNSPEC,
  TIPC_NLA_LINK_NAME,
  TIPC_NLA_LINK_DEST,
  TIPC_NLA_LINK_MTU,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_LINK_BROADCAST,
  TIPC_NLA_LINK_UP,
  TIPC_NLA_LINK_ACTIVE,
  TIPC_NLA_LINK_PROP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_LINK_STATS,
  TIPC_NLA_LINK_RX,
  TIPC_NLA_LINK_TX,
  __TIPC_NLA_LINK_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_LINK_MAX = __TIPC_NLA_LINK_MAX - 1
};
enum {
  TIPC_NLA_MEDIA_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_MEDIA_NAME,
  TIPC_NLA_MEDIA_PROP,
  __TIPC_NLA_MEDIA_MAX,
  TIPC_NLA_MEDIA_MAX = __TIPC_NLA_MEDIA_MAX - 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TIPC_NLA_NODE_UNSPEC,
  TIPC_NLA_NODE_ADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_NODE_UP,
  __TIPC_NLA_NODE_MAX,
  TIPC_NLA_NODE_MAX = __TIPC_NLA_NODE_MAX - 1
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TIPC_NLA_NET_UNSPEC,
  TIPC_NLA_NET_ID,
  TIPC_NLA_NET_ADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TIPC_NLA_NET_MAX,
  TIPC_NLA_NET_MAX = __TIPC_NLA_NET_MAX - 1
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_NAME_TABLE_UNSPEC,
  TIPC_NLA_NAME_TABLE_PUBL,
  __TIPC_NLA_NAME_TABLE_MAX,
  TIPC_NLA_NAME_TABLE_MAX = __TIPC_NLA_NAME_TABLE_MAX - 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TIPC_NLA_PUBL_UNSPEC,
  TIPC_NLA_PUBL_TYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_PUBL_LOWER,
  TIPC_NLA_PUBL_UPPER,
  TIPC_NLA_PUBL_SCOPE,
  TIPC_NLA_PUBL_NODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_PUBL_REF,
  TIPC_NLA_PUBL_KEY,
  __TIPC_NLA_PUBL_MAX,
  TIPC_NLA_PUBL_MAX = __TIPC_NLA_PUBL_MAX - 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TIPC_NLA_CON_UNSPEC,
  TIPC_NLA_CON_FLAG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_CON_NODE,
  TIPC_NLA_CON_SOCK,
  TIPC_NLA_CON_TYPE,
  TIPC_NLA_CON_INST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TIPC_NLA_CON_MAX,
  TIPC_NLA_CON_MAX = __TIPC_NLA_CON_MAX - 1
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_PROP_UNSPEC,
  TIPC_NLA_PROP_PRIO,
  TIPC_NLA_PROP_TOL,
  TIPC_NLA_PROP_WIN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TIPC_NLA_PROP_MAX,
  TIPC_NLA_PROP_MAX = __TIPC_NLA_PROP_MAX - 1
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_UNSPEC,
  TIPC_NLA_STATS_RX_INFO,
  TIPC_NLA_STATS_RX_FRAGMENTS,
  TIPC_NLA_STATS_RX_FRAGMENTED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_RX_BUNDLES,
  TIPC_NLA_STATS_RX_BUNDLED,
  TIPC_NLA_STATS_TX_INFO,
  TIPC_NLA_STATS_TX_FRAGMENTS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_TX_FRAGMENTED,
  TIPC_NLA_STATS_TX_BUNDLES,
  TIPC_NLA_STATS_TX_BUNDLED,
  TIPC_NLA_STATS_MSG_PROF_TOT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_MSG_LEN_CNT,
  TIPC_NLA_STATS_MSG_LEN_TOT,
  TIPC_NLA_STATS_MSG_LEN_P0,
  TIPC_NLA_STATS_MSG_LEN_P1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_MSG_LEN_P2,
  TIPC_NLA_STATS_MSG_LEN_P3,
  TIPC_NLA_STATS_MSG_LEN_P4,
  TIPC_NLA_STATS_MSG_LEN_P5,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_MSG_LEN_P6,
  TIPC_NLA_STATS_RX_STATES,
  TIPC_NLA_STATS_RX_PROBES,
  TIPC_NLA_STATS_RX_NACKS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_RX_DEFERRED,
  TIPC_NLA_STATS_TX_STATES,
  TIPC_NLA_STATS_TX_PROBES,
  TIPC_NLA_STATS_TX_NACKS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_TX_ACKS,
  TIPC_NLA_STATS_RETRANSMITTED,
  TIPC_NLA_STATS_DUPLICATES,
  TIPC_NLA_STATS_LINK_CONGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TIPC_NLA_STATS_MAX_QUEUE,
  TIPC_NLA_STATS_AVG_QUEUE,
  __TIPC_NLA_STATS_MAX,
  TIPC_NLA_STATS_MAX = __TIPC_NLA_STATS_MAX - 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
