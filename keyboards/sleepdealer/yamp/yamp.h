// Copyright 2021 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

enum keyboard_keycodes {
    MC_00 = SAFE_RANGE,
    NEW_SAFE_RANGE,
};

#define XXX KC_NO

/*
 * ┌───┬───┬───┬───┐
 * │00 │01 │02 │03 │
 * ├───┼───┼───┼───┤ 
 * │10 │11 │12 │13 │
 * ├───┼───┼───┼───┤   ┌───┐
 * │20 │21 │22 │23 │   │   │
 * ├───┼───┼───┼───┤   │23 │ 2u Plus
 * │30 │31 │32 │33 │   │   │
 * ├───┼───┼───┼───┤   ├───┤
 * │40 │41 │42 │43 │   │   │
 * ├───┼───┼───┼───┤   │43 │ 2u Enter
 * │50 │51 │52 │53 │   │   │
 * └───┴───┴───┴───┘   └───┘
 * ┌───────┐
 * │50     │ 2u 0
 * └───────┘
 */


#define LAYOUT_all( \
    K00, K01, K02, K03,  \
    K10, K11, K12, K13,  \
    K20, K21, K22, K23,  \
    K30, K31, K32, K33,  \
    K40, K41, K42, K43,  \
    K50, K51, K52, K53   \
) { \
    { K00, K10, K02, K03 }, \
    { K10, K11, K12, K13 }, \
    { K20, K21, K22, K23 }, \
    { K30, K31, K32, K33 }, \
    { K40, K41, K42, K43 }, \
    { K50, K51, K52, K53 }, \
}

#define LAYOUT_numpad( \
    K00, K01, K02, K03, \
    K10, K11, K12, K13, \
    K20, K21, K22, K23, \
    K30, K31, K32,      \
    K40, K41, K42, K43, \
       K50,   K52       \
) { \
    { K00, K01, K02, K03 }, \
    { K10, K11, K12, K13 }, \
    { K20, K21, K22, K23 }, \
    { K30, K31, K32, XXX }, \
    { K40, K41, K42, K43 }, \
    { K50, XXX, K52, XXX },  \
}
