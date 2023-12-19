/* Copyright 2021 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

// #define ROTATIONAL_TRANSFORM_ANGLE 0
// #define POINTING_DEVICE_INVERT_Y

// If board has a debug LED, you can enable it by defining this
#define DEBUG_LED_PIN GP17

/* PMW3360 Settings */
/* #define UNUSABLE_PINS \ */
/*     { GP0, GP1, /\* GP2, GP3, GP4, GP5, *\/ GP6, GP7, GP8, GP9, GP12, GP13, GP14, GP15, GP16, GP10, GP11, GP18, /\* GP20, GP21, *\/ GP22, /\* GP23, *\/ GP24, GP26, GP27, GP28, GP29 } */

#undef DIRECT_PINS
//                  KC_BTN1, KC_BTN3, KC_BTN2),

#define DIRECT_PINS          \
    {                        \
        { GP21, GP23, GP20 } \
    }
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP2
#define SPI_MOSI_PIN GP3
#define SPI_MISO_PIN GP0
#define PMW33XX_CS_PIN GP5 // SPI CS pin.

/* #define SPI_DRIVER SPID1 */
/* #define SPI_SCK_PIN GP22 */
/* #define SPI_MOSI_PIN GP23 */
/* #define SPI_MISO_PIN GP20 */
/* #define PMW33XX_CS_PIN GP21 // SPI CS pin. */

/* Optional. */
// #define PMW33XX_CPI 300 // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
// #define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127.
// #define POINTING_DEVICE_TASK_THROTTLE_MS 10

/* RP2040 Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define POINTING_DEVICE_INVERT_X

/* #define POINTING_DEVICE_CS_PIN GP5 */
/* #define POINTING_DEVICE_DEBUG 1 */
/* /\* spi config for eeprom and pmw3360 sensor *\/ */
/* #define SPI_SCK_PIN GP6 */
/* #define SPI_SCK_PAL_MODE 5 */
/* #define SPI_MOSI_PIN GP3 */
/* #define SPI_MOSI_PAL_MODE 5 */
/* #define SPI_MISO_PIN GP4 */
/* #define SPI_MISO_PAL_MODE 5 */
/* left middle right */
/* right left middle */
