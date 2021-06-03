/*
Copyright 2021 Sleepdealer

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x5344
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER Sleepdealer
#define PRODUCT      Tiny40

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

//                        0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11
#define MATRIX_ROW_PINS { C4, B7, C7, C6}
#define MATRIX_COL_PINS { B6, D2, B5, B4, B3, B2, B1, B0, D6, D5, D4, D3 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

//Cut down on firmware size
#define LAYER_STATE_8BIT
#define DISABLE_LEADER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_USB_STARTUP_CHECK
