/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Caret
#define PRODUCT         \
#define DESCRIPTION     q.m.k. keyboard firmware for Yampad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* 9Key PCB default pin-out */
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 } // These were both reversed because of swapping the diode direction
#define MATRIX_COL_PINS { B1, B3, B2, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL // This was not default!

#define DEBOUNCING_DELAY 5