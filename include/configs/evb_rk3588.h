/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef __EVB_RK3588_H
#define __EVB_RK3588_H

#include <configs/rk3588_common.h>

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0"

#endif

#define BOARD_EXTRA_ENV_SETTINGS \
	"bootcmd=bootmenu\0" \
	"bootmenu_0=boot mmc0=setenv boot_targets mmc0; bootflow scan -lGb; bootmenu\0" \
	"bootmenu_1=boot nvme0=setenv boot_targets nvme0; bootflow scan -lGb; bootmenu\0" \
	"bootmenu_2=boot mmc1=setenv boot_targets mmc1; bootflow scan -lGb; bootmenu\0" \
	"bootmenu_3=reboot=reset\0" \
	"bootmenu_4=power off=poweroff\0" \
	"bootmenu_delay=5\0"
