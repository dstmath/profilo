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
#ifndef _UAPI_LINUX_VIRTIO_CONSOLE_H
#define _UAPI_LINUX_VIRTIO_CONSOLE_H
#define UAPI_LINUX_VIRTIO_CONSOLE_H
#define UAPI_LINUX_VIRTIO_CONSOLE_H_
#define _LINUX_VIRTIO_CONSOLE_H
#define _LINUX_VIRTIO_CONSOLE_H_
#define _UAPI_LINUX_VIRTIO_CONSOLE_H_
#include <museum/7.1.2/bionic/libc/linux/types.h>
#include <museum/7.1.2/bionic/libc/linux/virtio_types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/7.1.2/bionic/libc/linux/virtio_ids.h>
#include <museum/7.1.2/bionic/libc/linux/virtio_config.h>
#define VIRTIO_CONSOLE_F_SIZE 0
#define VIRTIO_CONSOLE_F_MULTIPORT 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_CONSOLE_F_EMERG_WRITE 2
#define VIRTIO_CONSOLE_BAD_ID (~(__u32) 0)
struct virtio_console_config {
  __u16 cols;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 rows;
  __u32 max_nr_ports;
  __u32 emerg_wr;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct virtio_console_control {
  __virtio32 id;
  __virtio16 event;
  __virtio16 value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define VIRTIO_CONSOLE_DEVICE_READY 0
#define VIRTIO_CONSOLE_PORT_ADD 1
#define VIRTIO_CONSOLE_PORT_REMOVE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_CONSOLE_PORT_READY 3
#define VIRTIO_CONSOLE_CONSOLE_PORT 4
#define VIRTIO_CONSOLE_RESIZE 5
#define VIRTIO_CONSOLE_PORT_OPEN 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_CONSOLE_PORT_NAME 7
#endif
