/*
 * linux/arch/arm/mach-ccep/ccep_soc/sdp1202_gpio.c 
 *
 * Copyright (C) 2010 Samsung Electronics.co
 * Author : sssol.lee@samsung.com 	06/28/2012
 *
 */

#include <plat/sdp_gpio.h>

struct _sdp_gpio_pull sdp_gpio_pull_list[] =
{
	{ 0, 0, 0x2C, 0},//GPIO0
	{ 0, 1, 0x2C, 2},
	{ 0, 2, 0x2C, 4},
	{ 0, 3, 0x2C, 6},
	{ 0, 4, 0x2C, 8},
	{ 0, 5, 0x2C, 10},
	{ 0, 6, 0x2C, 12},
	{ 0, 7, 0x2C, 14},//GPIO7
	
	{ 1, 0, 0x2C, 16},
	{ 1, 1, 0x2C, 18},
	{ 1, 2, 0x2C, 20},
	{ 1, 3, 0x2C, 22},
	{ 1, 4, 0x2C, 24},
	{ 1, 5, 0x2C, 26},
	{ 1, 6, 0x2C, 28},
	{ 1, 7, 0x2C, 30},//GPIO15
	
	{ 2, 0, 0x38, 0 },//TTL_MP_CLK
	{ 2, 1, 0x38, 2 },//TTL_MP_SYNC 
	{ 2, 2, 0x38, 4 },
	{ 2, 3, 0x38, 6 },//TTL_ARGB_B7
	{ 2, 4, 0x38, 8},
	{ 2, 5, 0x38, 10 },
	{ 2, 6, 0x38, 12 },
	{ 2, 7, 0x38, 14 },//TTL_ARGB_B3
	
	{ 3, 0, 0x38, 16 },//TTL_ARGB_B2
	{ 3, 1, 0x38, 18 },
	{ 3, 2, 0x38, 20},//TTL_ARGB_B0
	{ 3, 3, 0x38, 22},//TTL_ARGB_G7
	{ 3, 4, 0x38, 24},
	{ 3, 5, 0x38, 26},
	{ 3, 6, 0x38, 28},
	{ 3, 7, 0x38, 30},//TTL_ARGB_G3	
	
	{ 4, 0, 0x3C, 0 },//TTL_ARGB_G2
	{ 4, 1, 0x3C, 2 },
	{ 4, 2, 0x3C, 4 },//TTL_ARGB_G0
	{ 4, 3, 0x3C, 6 },//TTL_ARGB_R7
	{ 4, 4, 0x3C, 8},
	{ 4, 5, 0x3C, 10},
	{ 4, 6, 0x3C, 12},
	{ 4, 7, 0x3C, 14 },//TTL_ARGB_R3
	
	{ 5, 0, 0x3C, 16},//TTL_ARGB_R2
	{ 5, 1, 0x3C, 18},
	{ 5, 2, 0x3C, 20},//TTL_ARGB_R0
	{ 5, 3, 0x3C, 22},//TTL_ARGB_A7
	{ 5, 4, 0x3C, 24},
	{ 5, 5, 0x3C, 26}, 
	{ 5, 6, 0x3C, 28}, 
	{ 5, 7, 0x3C, 30},//TTL_ARGB_A3
	
	{ 6, 0, 0x40, 0},//TTL_ARGB_A2
	{ 6, 1, 0x40, 2},
	{ 6, 2, 0x40, 4}, //TTL_ARGB_A0
	{ 6, 3, 0x40, 6},//TTL_CLK_PULL 
	
	{ 7, 0, 0x34, 0},//MSPI_CD
	{ 7, 1, 0x34, 2 },
	{ 7, 2, 0x34, 4 },
	{ 7, 3, 0x34, 6},//IRRX
	{ 7, 4, 0x34, 8 },//EXTINT[0]
	{ 7, 5, 0x34, 10 },
	{ 7, 6, 0x34, 12}, 
	{ 7, 7, 0x34, 14},//EXTINT[3]
	
	{ 8, 0, 0x34, 16},//CI_RESET
	{ 8, 1, 0x34, 18 },
	{ 8, 2, 0x34, 20 },
	{ 8, 3, 0x34, 22},//NIOWR
		
	{ 9, 0, 0x20, 16 },//SCRESET
	{ 9, 1, 0x20, 18 },
	{ 9, 2, 0x20, 20 },
	{ 9, 3, 0x20, 22 },
	{ 9, 3, 0x20, 24 },//SCDATA
	
	{ 10, 0, 0x14, 0},//IRQ_CLOCK
	{ 10, 1, 0x14, 2},
	{ 10, 2, 0x14, 4},
	{ 10, 3, 0x14, 6},//IRQ_DATA1
	
	{ 11, 0, 0x20, 0 },//UART0_RX
	{ 11, 1, 0x20, 2 },
	{ 11, 2, 0x20, 4 },
	{ 11, 3, 0x20, 6},
	{ 11, 4, 0x20, 8},
	{ 11, 5, 0x20, 10},
	{ 11, 6, 0x20, 12},
	{ 11, 7, 0x20, 14},//UART3_TX 

	{ 12, 0, 0x24, 0},//I2C0_CLK
	{ 12, 1, 0x24, 2},
	{ 12, 2, 0x24, 4},
	{ 12, 3, 0x24, 6},
	{ 12, 4, 0x24, 8},
	{ 12, 5, 0x24, 10},
	{ 12, 6, 0x24, 12},
	{ 12, 7, 0x24, 14},//I2C3_DATA

	{ 13, 0, 0x24, 16 },//I2C4_CLK
	{ 13, 1, 0x24, 18 },
	{ 13, 2, 0x24, 20},
	{ 13, 3, 0x24, 22},//I2C5_DATA

	{ 14, 0, 0x28, 0},//EMAC_PHY_CLK_125M
	{ 14, 1, 0x28, 2 },
	{ 14, 2, 0x28, 4 },
	{ 14, 3, 0x28, 6 },
	{ 14, 4, 0x28, 8},
	{ 14, 5, 0x28, 10},
	{ 14, 6, 0x28, 12},
	{ 14, 7, 0x28, 14 },//EMAC_PHY_RXCLK

	{ 15, 0, 0x28, 16},//EMAC_PHY_CRSDV
	{ 15, 1, 0x28, 18},
	{ 15, 2, 0x28, 20},
	{ 15, 3, 0x28, 22},
	{ 15, 4, 0x28, 24},
	{ 15, 5, 0x28, 26},
	{ 15, 6, 0x28, 28}, 
	{ 15, 7, 0x28, 30}, //DSP_VSYNC 

	{ 16, 0, 0x04, 0},//TRACECTL 
	{ 16, 1, 0x04, 2},
	{ 16, 2, 0x04, 4},
	{ 16, 3, 0x04, 6},
	{ 16, 4, 0x04, 8},
	{ 16, 5, 0x04, 10},
	{ 16, 6, 0x04, 12}, 
	{ 16, 7, 0x04, 14}, //TRACEDATA5 

	{ 17, 0, 0x04, 16},//TRACEDATA6 
	{ 17, 1, 0x04, 18},
	{ 17, 2, 0x04, 20},
	{ 17, 3, 0x04, 22},
	{ 17, 4, 0x04, 24},
	{ 17, 5, 0x04, 26},//TRACEDATA11

	{ 18, 0, 0x30, 0},//GPIO_P0
	{ 18, 1, 0x30, 2},
	{ 18, 2, 0x30, 4},
	{ 18, 3, 0x30, 6},
	{ 18, 4, 0x30, 8},
	{ 18, 5, 0x30, 10},
	{ 18, 6, 0x30, 12}, //GPIO_P6

	{ 19, 0, 0x18, 0},//ADDR0
	{ 19, 1, 0x18, 2},
	{ 19, 2, 0x18, 4},
	{ 19, 3, 0x18, 6},
	{ 19, 4, 0x18, 8},
	{ 19, 5, 0x18, 10},
	{ 19, 6, 0x18, 12}, 
	{ 19, 7, 0x18, 14}, //ADDR7 

	{ 20, 0, 0x18, 16},//ADDR8
	{ 20, 1, 0x18, 18},
	{ 20, 2, 0x18, 20},
	{ 20, 3, 0x18, 22},
	{ 20, 4, 0x18, 24},
	{ 20, 5, 0x18, 26},
	{ 20, 6, 0x18, 28}, //ADDR14
	{ 20, 7, 0x1c, 0}, //SM_WAIT 

	{ 21, 0, 0x1c, 2},//CANCELWAIT
	{ 21, 1, 0x1c, 4},//OEN
	{ 21, 2, 0x1c, 6},
	{ 21, 3, 0x1c, 8},
	{ 21, 4, 0x1c, 10},
	{ 21, 5, 0x1c, 12},
	{ 21, 6, 0x1c, 14}, 
	{ 21, 7, 0x1c, 16}, //DATA4 

	{ 22, 0, 0x1c, 18},//DATA5
	{ 22, 1, 0x1c, 20},
	{ 22, 2, 0x1c, 22},
	{ 22, 3, 0x1c, 24},
	{ 22, 4, 0x1c, 26},
	{ 22, 5, 0x1c, 28},
	{ 22, 6, 0x1c, 30}, //CS3
	
};

int sdp_gpio_pull_size = sizeof(sdp_gpio_pull_list) / sizeof(struct _sdp_gpio_pull);

