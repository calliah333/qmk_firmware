// Copyright 2022 Sleepdealer (@Sleepdealr)
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

#define LAYOUT( \
    K00, K10, K01, K11,   K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07, K17, K08, K18,       K19, K09, \
    K20, K30, K21, K31,   K22, K32, K23, K33, K24, K34, K25, K35, K26, K36, K27, K37, K28, K38,       K39, K29, \
         K50, K41, K51,   K42, K52, K43, K53, K44, K54, K45, K55, K46, K56, K47,      K58, K48,       K59, K49, \
    K60, K70, K61, K71,   K62,      K63, K73, K64, K74, K65, K75, K66, K76, K67, K77, K68, K78,       K79, K69, \
         K90, K81,        K82,           K93,           K85,                     K97, K88,            K99, K89  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09}, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19}, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29}, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39}, \
    { KC_NO, K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49}, \
    { K50,   K51,   K52,   K53,   K54,   K55,   K56,   KC_NO, K58,   K59}, \
    { K60,   K61,   K62,   K63,   K64,   K65,   K66,   K67,   K68,   K69}, \
    { K70,   K71,   KC_NO, K73,   K74,   K75,   K76,   K77,   K78,   K79}, \
    { KC_NO, K81,   K82,   KC_NO, KC_NO, K85,   KC_NO, KC_NO, K88,   K89}, \
    { K90,   KC_NO, KC_NO, K93,   KC_NO, KC_NO, KC_NO, K97,   KC_NO, K99}, \
}
