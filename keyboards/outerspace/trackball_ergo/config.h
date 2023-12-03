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
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

// #define ROTATIONAL_TRANSFORM_ANGLE 0
// #define POINTING_DEVICE_INVERT_Y

// If board has a debug LED, you can enable it by defining this
// #define DEBUG_LED_PIN F7

/* PMW3360 Settings */
// #define UNUSABLE_PINS
//    { GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9 }

#define POINTING_DEVICE_CS_PIN GP13
// #define RP_SPI_USE_SPI1 1
#define SPI_DRIVER SPID1
/* spi config for eeprom and pmw3360 sensor */
#define SPI_SCK_PIN GP10
#define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PIN GP11
#define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PIN GP12
#define SPI_MISO_PAL_MODE 5
// LCLICK D20
// RCLICK D19
// MCLICK D18
// D15
// D14
// D16
