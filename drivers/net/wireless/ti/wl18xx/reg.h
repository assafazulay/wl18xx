/*
 * This file is part of wlcore
 *
 * Copyright (C) 2011 Texas Instruments Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef __REG_H__
#define __REG_H__

#define WL18XX_REGISTERS_BASE      0x00800000
#define WL18XX_CODE_BASE           0x00000000
#define WL18XX_DATA_BASE           0x00400000
#define WL18XX_DOUBLE_BUFFER_BASE  0x00600000
#define WL18XX_MCU_KEY_SEARCH_BASE 0x00700000
#define WL18XX_PHY_BASE            0x00900000
#define WL18XX_TOP_OCP_BASE        0x00A00000
#define WL18XX_PACKET_RAM_BASE     0x00B00000
#define WL18XX_HOST_BASE           0x00C00000

#define WL18XX_REGISTERS_DOWN_SIZE 0x0000B000

#define WL18XX_REG_BOOT_PART_START 0x00802000
#define WL18XX_REG_BOOT_PART_SIZE  0x00014578

#define WL18XX_PHY_INIT_MEM_ADDR   0x80926000

#define WL18XX_SDIO_WSPI_BASE	(WL18XX_REGISTERS_BASE)
#define WL18XX_REG_CONFIG_BASE	(WL18XX_REGISTERS_BASE + 0x02000)
#define WL18XX_WGCM_REGS_BASE	(WL18XX_REGISTERS_BASE + 0x03000)
#define WL18XX_ENC_BASE			(WL18XX_REGISTERS_BASE + 0x04000)
#define WL18XX_INTERRUPT_BASE	(WL18XX_REGISTERS_BASE + 0x05000)
#define WL18XX_UART_BASE		(WL18XX_REGISTERS_BASE + 0x06000)
#define WL18XX_WELP_BASE		(WL18XX_REGISTERS_BASE + 0x07000)
#define WL18XX_TCP_CKSM_BASE	(WL18XX_REGISTERS_BASE + 0x08000)
#define WL18XX_FIFO_BASE		(WL18XX_REGISTERS_BASE + 0x09000)
#define WL18XX_OCP_BRIDGE_BASE	(WL18XX_REGISTERS_BASE + 0x0A000)
#define WL18XX_PMAC_RX_BASE		(WL18XX_REGISTERS_BASE + 0x14800)
#define WL18XX_PMAC_ACM_BASE	(WL18XX_REGISTERS_BASE + 0x14C00)
#define WL18XX_PMAC_TX_BASE		(WL18XX_REGISTERS_BASE + 0x15000)
#define WL18XX_PMAC_CSR_BASE	(WL18XX_REGISTERS_BASE + 0x15400)

#define WL18XX_REG_ECPU_CONTROL		(WL18XX_REGISTERS_BASE + 0x02004)
#define WL18XX_REG_INTERRUPT_NO_CLEAR	(WL18XX_REGISTERS_BASE + 0x050E8)
#define WL18XX_REG_INTERRUPT_ACK	(WL18XX_REGISTERS_BASE + 0x050F0)
#define WL18XX_REG_INTERRUPT_TRIG	(WL18XX_REGISTERS_BASE + 0x5074)
#define WL18XX_REG_INTERRUPT_TRIG_H	(WL18XX_REGISTERS_BASE + 0x5078)
#define WL18XX_REG_INTERRUPT_MASK	(WL18XX_REGISTERS_BASE + 0x0050DC)

#define WL18XX_REG_CHIP_ID_B		(WL18XX_REGISTERS_BASE + 0x01542C)

#define WL18XX_SLV_MEM_DATA		(WL18XX_HOST_BASE + 0x0018)
#define WL18XX_SLV_REG_DATA		(WL18XX_HOST_BASE + 0x0008)

/* Scratch Pad registers*/
#define WL18XX_SCR_PAD0			(WL18XX_REGISTERS_BASE + 0x0154EC)
#define WL18XX_SCR_PAD1			(WL18XX_REGISTERS_BASE + 0x0154F0)
#define WL18XX_SCR_PAD2			(WL18XX_REGISTERS_BASE + 0x0154F4)
#define WL18XX_SCR_PAD3			(WL18XX_REGISTERS_BASE + 0x0154F8)
#define WL18XX_SCR_PAD4			(WL18XX_REGISTERS_BASE + 0x0154FC)
#define WL18XX_SCR_PAD4_SET		(WL18XX_REGISTERS_BASE + 0x015504)
#define WL18XX_SCR_PAD4_CLR		(WL18XX_REGISTERS_BASE + 0x015500)
#define WL18XX_SCR_PAD5			(WL18XX_REGISTERS_BASE + 0x015508)
#define WL18XX_SCR_PAD5_SET		(WL18XX_REGISTERS_BASE + 0x015510)
#define WL18XX_SCR_PAD5_CLR		(WL18XX_REGISTERS_BASE + 0x01550C)
#define WL18XX_SCR_PAD6			(WL18XX_REGISTERS_BASE + 0x015514)
#define WL18XX_SCR_PAD7			(WL18XX_REGISTERS_BASE + 0x015518)
#define WL18XX_SCR_PAD8			(WL18XX_REGISTERS_BASE + 0x01551C)
#define WL18XX_SCR_PAD9			(WL18XX_REGISTERS_BASE + 0x015520)

/* Spare registers*/
#define WL18XX_SPARE_A1			(WL18XX_REGISTERS_BASE + 0x002194)
#define WL18XX_SPARE_A2			(WL18XX_REGISTERS_BASE + 0x002198)
#define WL18XX_SPARE_A3			(WL18XX_REGISTERS_BASE + 0x00219C)
#define WL18XX_SPARE_A4			(WL18XX_REGISTERS_BASE + 0x0021A0)
#define WL18XX_SPARE_A5			(WL18XX_REGISTERS_BASE + 0x0021A4)
#define WL18XX_SPARE_A6			(WL18XX_REGISTERS_BASE + 0x0021A8)
#define WL18XX_SPARE_A7			(WL18XX_REGISTERS_BASE + 0x0021AC)
#define WL18XX_SPARE_A8			(WL18XX_REGISTERS_BASE + 0x0021B0)
#define WL18XX_SPARE_B1			(WL18XX_REGISTERS_BASE + 0x015524)
#define WL18XX_SPARE_B2			(WL18XX_REGISTERS_BASE + 0x015528)
#define WL18XX_SPARE_B3			(WL18XX_REGISTERS_BASE + 0x01552C)
#define WL18XX_SPARE_B4			(WL18XX_REGISTERS_BASE + 0x015530)
#define WL18XX_SPARE_B5			(WL18XX_REGISTERS_BASE + 0x015534)
#define WL18XX_SPARE_B6			(WL18XX_REGISTERS_BASE + 0x015538)
#define WL18XX_SPARE_B7			(WL18XX_REGISTERS_BASE + 0x01553C)
#define WL18XX_SPARE_B8			(WL18XX_REGISTERS_BASE + 0x015540)

#define WL18XX_REG_COMMAND_MAILBOX_PTR	(WL18XX_SCR_PAD0)
#define WL18XX_REG_EVENT_MAILBOX_PTR	(WL18XX_SCR_PAD1)
#define WL18XX_EEPROMLESS_IND		(WL18XX_SCR_PAD4)

#define WL18XX_WELP_ARM_COMMAND		(WL18XX_REGISTERS_BASE + 0x7100)
#define WL18XX_ENABLE			(WL18XX_REGISTERS_BASE + 0x01543C)

/* PRCM registers */
#define PLATFORM_DETECTION		0xA0E3E0
#define OCS_EN				0xA02080
#define PRIMARY_CLK_DETECT		0xA020A6
#define PLLSH_WCS_PLL_N			0xA02362
#define PLLSH_WCS_PLL_M			0xA02360
#define PLLSH_WCS_PLL_Q_FACTOR_CFG_1	0xA02364
#define PLLSH_WCS_PLL_Q_FACTOR_CFG_2	0xA02366
#define PLLSH_WCS_PLL_P_FACTOR_CFG_1	0xA02368
#define PLLSH_WCS_PLL_P_FACTOR_CFG_2	0xA0236A
#define PLLSH_WCS_PLL_SWALLOW_EN	0xA0236C
#define PLLSH_WL_PLL_EN			0xA02392

#define PLLSH_WCS_PLL_Q_FACTOR_CFG_1_MASK	0xFFFF
#define PLLSH_WCS_PLL_Q_FACTOR_CFG_2_MASK	0x007F
#define PLLSH_WCS_PLL_P_FACTOR_CFG_1_MASK	0xFFFF
#define PLLSH_WCS_PLL_P_FACTOR_CFG_2_MASK	0x000F

#define PLLSH_WCS_PLL_SWALLOW_EN_VAL1	0x1
#define PLLSH_WCS_PLL_SWALLOW_EN_VAL2	0x12

#define WL18XX_REG_FUSE_DATA_1_3	0xA0260C
#define WL18XX_PG_VER_MASK		0x70
#define WL18XX_PG_VER_OFFSET		4

#define WL18XX_REG_FUSE_BD_ADDR_1	0xA02602
#define WL18XX_REG_FUSE_BD_ADDR_2	0xA02606

#define WL18XX_CMD_MBOX_ADDRESS		0xB007B4

#define WL18XX_FW_STATUS_ADDR		0x50F8

#define CHIP_ID_185x_PG10              (0x06030101)
#define CHIP_ID_185x_PG20		(0x06030111)

/* wl18xx OCP bridge */
#define WL18XX_PHY_HRAM_RD_EN_PER_RAM	0x0095380C
#define WL18XX_PDSP_CONTROL_REG_PG1	0x00964400
#define WL18XX_PDSP_CONTROL_REG_PG2	0x00968400
#define WL18XX_FDSP_RAM		0x00940100
#define WL18XX_PRCM_BT_PWR_RST		0xA0240A
#define WL18XX_IP_SEL_OV_EN		0xA021FE
#define WL18XX_IP_OV_EN			0xA021FC

#define WL18XX_FDSP_RAM_VAL		0xA5A5A5A5
#define WL18XX_WL_PHY_PWR_REQ		0x400
#define WL18XX_BT_PWR_REQ		0x7800
#define WL18XX_BT_WL_PHY_PWR_REQ	0x7C00

#define WL18XX_RM_OVERRIDE		0
#define WL18XX_H_RAM_ENABLED		0x3F
#define WL18XX_PDSP_ENABLE		0x00000007
#define WL18XX_PDSP_DISABLE		0
#define WL18XX_PDSP_DISABLE		0
#define WL18XX_ACCESS_OCP_MAX_RETRIES	10

/*
 * Host Command Interrupt. Setting this bit masks
 * the interrupt that the host issues to inform
 * the FW that it has sent a command
 * to the Wlan hardware Command Mailbox.
 */
#define WL18XX_INTR_TRIG_CMD       BIT(28)

/*
 * Host Event Acknowlegde Interrupt. The host
 * sets this bit to acknowledge that it received
 * the unsolicited information from the event
 * mailbox.
 */
#define WL18XX_INTR_TRIG_EVENT_ACK BIT(29)

/*
 * To boot the firmware in PLT mode we need to write this value in
 * SCR_PAD8 before starting.
 */
#define WL18XX_SCR_PAD8_PLT	0xBABABEBE

/* TODO: maybe move elsewhere? */
#define NUM_OF_CHANNELS_11_ABG 150
#define NUM_OF_CHANNELS_11_P 7
#define WL18XX_NUM_OF_SUB_BANDS 9
#define SRF_TABLE_LEN 16
#define PIN_MUXING_SIZE 2

enum {
	COMPONENT_NO_SWITCH	= 0x0,
	COMPONENT_2_WAY_SWITCH	= 0x1,
	COMPONENT_3_WAY_SWITCH	= 0x2,
	COMPONENT_MATCHING	= 0x3,
};

enum {
	FEM_NONE	= 0x0,
	FEM_VENDOR_1	= 0x1,
	FEM_VENDOR_2	= 0x2,
	FEM_VENDOR_3	= 0x3,
};

enum {
	BOARD_TYPE_EVB_18XX     = 0,
	BOARD_TYPE_DVP_18XX     = 1,
	BOARD_TYPE_HDK_18XX     = 2,
	BOARD_TYPE_FPGA_18XX    = 3,
	BOARD_TYPE_COM8_18XX    = 4,

	NUM_BOARD_TYPES,
};

struct wl18xx_mac_and_phy_params {
	u8 phy_standalone;
	u8 rdl;
	u8 enable_clpc;
	u8 enable_tx_low_pwr_on_siso_rdl;
	u8 auto_detect;
	u8 dedicated_fem;

	u8 low_band_component;

	/* Bit 0: One Hot, Bit 1: Control Enable, Bit 2: 1.8V, Bit 3: 3V */
	u8 low_band_component_type;

	u8 high_band_component;

	/* Bit 0: One Hot, Bit 1: Control Enable, Bit 2: 1.8V, Bit 3: 3V */
	u8 high_band_component_type;
	u8 number_of_assembled_ant2_4;
	u8 number_of_assembled_ant5;
	u8 pin_muxing_platform_options[PIN_MUXING_SIZE];
	u8 external_pa_dc2dc;
	u8 tcxo_ldo_voltage;
	u8 xtal_itrim_val;
	u8 srf_state;
	u8 srf1[SRF_TABLE_LEN];
	u8 srf2[SRF_TABLE_LEN];
	u8 srf3[SRF_TABLE_LEN];
	u8 io_configuration;
	u8 sdio_configuration;
	u8 settings;
	u8 rx_profile;
	u8 per_chan_pwr_limit_arr_11abg[NUM_OF_CHANNELS_11_ABG];
	u8 pwr_limit_reference_11_abg;
	u8 per_chan_pwr_limit_arr_11p[NUM_OF_CHANNELS_11_P];
	u8 pwr_limit_reference_11p;
	u8 per_sub_band_tx_trace_loss[WL18XX_NUM_OF_SUB_BANDS];
	u8 per_sub_band_rx_trace_loss[WL18XX_NUM_OF_SUB_BANDS];
	u8 primary_clock_setting_time;
	u8 clock_valid_on_wake_up;
	u8 secondary_clock_setting_time;
	u8 board_type;
	u8 Psat;
	s8 low_power_val;
	s8 med_power_val;
	s8 high_power_val;
	u8 padding[1];
} __packed;

#endif /* __REG_H__ */
