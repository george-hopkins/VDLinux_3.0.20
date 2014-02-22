/*
 * linux/arch/arm/mach-sdp/sdp1002_gpio.c
 *
 * Copyright (C) 2010 Samsung Electronics.co
 * Author : seungjun.heo@samsung.com 	07/30/2010
 *
 */

#include <plat/sdp_gpio.h>

struct _sdp_gpio_pull sdp_gpio_pull_list[] =
{
	{ 0, 0, 0x00, 12 },
	{ 0, 1, 0x00, 14 },
	{ 0, 2, 0x00, 16 },
	{ 0, 3, 0x00, 18 },
	{ 0, 4, 0x00, 20 },
	{ 0, 5, 0x00, 22 },
	{ 0, 6, 0x00, 24 },
	{ 0, 7, 0x00, 26 },
	{ 1, 0, 0x00, 28 },
	{ 1, 1, 0x00, 30 },
	{ 1, 2, 0x04,  0 },
	{ 1, 3, 0x04,  2 },
	{ 1, 4, 0x04,  4 },
	{ 1, 5, 0x04,  6 },
	{ 1, 6, 0x04,  8 },
	{ 2, 0, 0x04, 12 },
	{ 2, 1, 0x04, 14 },
	{ 2, 2, 0x04, 16 },
	{ 2, 3, 0x04, 18 },
	{ 2, 4, 0x04, 20 },
	{ 2, 5, 0x04, 22 },
	{ 2, 6, 0x04, 24 },
	{ 2, 7, 0x04, 26 },
	{ 3, 0, 0x04, 28 },
	{ 3, 1, 0x04, 30 },
	{ 3, 2, 0x08,  0 },
	{ 3, 3, 0x08,  2 },
	{ 3, 4, 0x08,  4 },
	{ 3, 5, 0x08,  6 },
	{ 3, 6, 0x08,  8 },
	{ 3, 7, 0x08, 10 },
	{ 4, 0, 0x08, 12 },
	{ 4, 1, 0x08, 14 },
	{ 4, 2, 0x08, 16 },
	{ 4, 3, 0x08, 18 },
	{ 4, 4, 0x08, 20 },
	{ 4, 5, 0x08, 22 },
	{ 4, 6, 0x08, 24 },
	{ 4, 7, 0x08, 26 },
	{ 5, 0, 0x08, 28 },
	{ 5, 1, 0x08, 30 },
	{ 5, 2, 0x0C,  0 },
	{ 5, 3, 0x0C,  2 },
	{ 5, 4, 0x0C,  4 },
	{ 5, 5, 0x0C, 26 },
	{ 5, 6, 0x0C, 28 },
	{ 5, 7, 0x0C, 30 },
	{ 6, 0, 0x10,  0 },
	{ 6, 1, 0x10,  2 },
	{ 6, 2, 0x10,  4 },
	{ 6, 3, 0x10,  6 },
	{ 6, 4, 0x10,  8 },
	{ 6, 5, 0x10, 10 },
	{ 6, 6, 0x10, 12 },
	{ 6, 7, 0x10, 14 },
	{ 7, 0, 0x10, 16 },
	{ 7, 1, 0x10, 18 },
	{ 7, 2, 0x10, 20 },
	{ 7, 3, 0x10, 28 },
	{ 7, 4, 0x10, 30 },
	{ 7, 5, 0x14,  0 },
	{ 7, 6, 0x14,  2 },
	{ 7, 7, 0x14, 12 },
	{ 8, 0, 0x14, 14 },
	{ 8, 1, 0x14, 26 },
	{ 8, 2, 0x14, 28 },
	{ 8, 3, 0x18,  4 },
	{ 8, 4, 0x18,  6 },
	{ 8, 5, 0x18,  8 },
	{ 8, 6, 0x18, 10 },
	{ 8, 7, 0x1C, 12 },
	{ 9, 0, 0x1C, 14 },
	{ 9, 1, 0x1C, 16 },
	{ 9, 2, 0x1C, 18 },
	{ 9, 3, 0x1C, 20 },
	{ 9, 4, 0x1C, 22 },
	{ 9, 5, 0x1C, 24 },
	{ 9, 6, 0x1C, 26 },
	{ 9, 7, 0x1C, 28 },
	{ 10, 0, 0x1C, 30 },
	{ 10, 1, 0x28, 28 },
	{ 10, 2, 0x28, 30 },
	{ 10, 3, 0x2C, 20 },
	{ 10, 4, 0x2C, 22 },
	{ 10, 5, 0x30, 12 },
	{ 10, 6, 0x30, 14 },
	{ 10, 7, 0x00, 10 },
	{ 11, 0, 0x10, 26 },
	{ 11, 1, 0x34, 12 },
	{ 11, 2, 0x34, 14 }
};

int sdp_gpio_pull_size = sizeof(sdp_gpio_pull_list) / sizeof(struct _sdp_gpio_pull);

struct _sdp_gpio_pull sdp_mgpio_pull_list[] =
{
	{ 0, 0, 0x00,  0 },
	{ 0, 1, 0x00,  2 },
	{ 0, 2, 0x00,  4 },
	{ 0, 3, 0x00,  6 },
	{ 0, 4, 0x00,  8 },
	{ 0, 5, 0x00, 10 },
	{ 0, 6, 0x00, 12 },
	{ 0, 7, 0x00, 14 },
	{ 1, 0, 0x00, 16 },
	{ 1, 1, 0x00, 18 },
	{ 1, 2, 0x00, 20 },
	{ 1, 3, 0x00, 22 },
	{ 1, 4, 0x00, 24 },
	{ 1, 5, 0x00, 26 },
	{ 1, 6, 0x00, 28 },
	{ 1, 7, 0x00, 30 },
	{ 2, 0, 0x04,  0 },
	{ 2, 1, 0x04,  2 },
	{ 2, 2, 0x04,  4 },
	{ 2, 3, 0x04,  6 },
	{ 2, 4, 0x04,  8 },
	{ 2, 5, 0x04, 10 },
	{ 2, 6, 0x04, 12 },
	{ 2, 7, 0x04, 14 },
	{ 3, 0, 0x04, 16 },
	{ 3, 1, 0x04, 18 },
	{ 3, 2, 0x04, 20 },
	{ 3, 3, 0x04, 22 },
	{ 3, 4, 0x04, 24 },
	{ 3, 5, 0x04, 26 },
	{ 3, 6, 0x04, 28 },
	{ 3, 7, 0x04, 30 },
	{ 4, 0, 0x08,  0 },
	{ 4, 1, 0x08,  2 },
	{ 4, 3, 0x08,  6 },
	{ 4, 4, 0x08,  8 },
	{ 4, 5, 0x08, 10 },
	{ 4, 6, 0x08, 12 },
	{ 4, 7, 0x08, 14 }
};

int sdp_mgpio_pull_size = sizeof(sdp_mgpio_pull_list) / sizeof(struct _sdp_gpio_pull);

