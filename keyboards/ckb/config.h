// Copyright 2022 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x1F5C // SHA256 of Rafco
#define PRODUCT_ID   0xD2DD // SHA256 of CKB499
#define DEVICE_VER   0x0001
#define MANUFACTURER RafCo
#define PRODUCT      CKB499

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

//                         0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11
#define MATRIX_ROW_PINS { B1, F7, F4, F5, B2, B6, D5, B7, C6, D4, D2, D3  }
#define MATRIX_COL_PINS { B5, B4, E6, D7, F0, F1, C7, B3, F6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Degounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// Trackpoint is upside down and backwards for some reason
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y

#define PIMORONI_TRACKBALL_SCALE 7 // Sensitivity

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define UNICODE_SELECTED_MODES UC_WINC , UC_MAC, UC_LNX

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define DEBUG_MATRIX_SCAN_RATE

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
