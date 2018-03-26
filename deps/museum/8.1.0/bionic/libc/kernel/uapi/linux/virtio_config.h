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
#ifndef _UAPI_LINUX_VIRTIO_CONFIG_H
#define _UAPI_LINUX_VIRTIO_CONFIG_H
#define UAPI_LINUX_VIRTIO_CONFIG_H
#define UAPI_LINUX_VIRTIO_CONFIG_H_
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_VIRTIO_CONFIG_H
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_VIRTIO_CONFIG_H_
#define NDK_ANDROID_SUPPORT_LINUX_VIRTIO_CONFIG_H
#define NDK_ANDROID_SUPPORT_LINUX_VIRTIO_CONFIG_H_
#define _LINUX_VIRTIO_CONFIG_H
#define _LINUX_VIRTIO_CONFIG_H_
#define _UAPI_LINUX_VIRTIO_CONFIG_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
#define VIRTIO_CONFIG_S_ACKNOWLEDGE 1
#define VIRTIO_CONFIG_S_DRIVER 2
#define VIRTIO_CONFIG_S_DRIVER_OK 4
#define VIRTIO_CONFIG_S_FEATURES_OK 8
#define VIRTIO_CONFIG_S_NEEDS_RESET 0x40
#define VIRTIO_CONFIG_S_FAILED 0x80
#define VIRTIO_TRANSPORT_F_START 28
#define VIRTIO_TRANSPORT_F_END 34
#ifndef VIRTIO_CONFIG_NO_LEGACY
#define VIRTIO_F_NOTIFY_ON_EMPTY 24
#define VIRTIO_F_ANY_LAYOUT 27
#endif
#define VIRTIO_F_VERSION_1 32
#define VIRTIO_F_IOMMU_PLATFORM 33
#endif
