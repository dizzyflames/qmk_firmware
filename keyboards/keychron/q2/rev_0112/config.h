/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x0112
#define DEVICE_VER      0x0102

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS { C14, C15, A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, A8, A9, H3 }

/* DIP switch */
#define DIP_SWITCH_MATRIX_GRID  { {4, 4} }

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 34
#define DRIVER_2_LED_TOTAL 34
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* Scan phase of led driver set as MSKPHASE_9CHANNEL(defined as 0x03 in CKLED2001.h) */
#define PHASE_CHANNEL MSKPHASE_9CHANNEL

/* EEPROM Driver Configuration */
// #define EXTERNAL_EEPROM_I2C_BASE_ADDRESS 0b10100010
// #define EXTERNAL_EEPROM_BYTE_COUNT 8192
// #define EXTERNAL_EEPROM_PAGE_SIZE 32
// #define EXTERNAL_EEPROM_ADDRESS_SIZE 2
// #define EXTERNAL_EEPROM_WRITE_TIME 5
