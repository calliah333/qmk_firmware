/* Copyright 2021 Sleepdealer
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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */




//! This is going to make me kms

#define  XXXXX KC_NO


//?   |<-----SOUTHPAW NUMPAD--->|    |<----------------------------------------REGULAR MATRIX--------------------------------------->|   |<-----ARROWS------>|   |<-EXTRAS->|
 
#define LAYOUT( \
      k0000, k0100, k0001, k0101,    k0002, k0102, k0003, k0103, k0004, k0104, k0005, k0105, k0006, k0106, k0007, k0107, k0008, k0108,    k0009, k0109, k0010,   k0110, k0011,  \
      k0200, k0300, k0201, k0301,    k0202, k0302, k0203, k0303, k0204, k0304, k0205, k0305, k0206, k0306, k0207, k0307, k0208, k0308,    k0209, k0309, k0210,   k0310, k0211,  \
      k0400, k0500, k0401, k0501,    k0402, k0502, k0403, k0503, k0404, k0504, k0405, k0505, k0406, k0506, k0407, k0507, k0408, k0508,    k0409, k0509, k0410,   k0510, k0411,  \
      k0600, k0700, k0601, k0701,    k0602, k0702, k0603, k0703, k0604, k0704, k0605, k0705, k0606, k0706, k0607, k0707, k0608,                                  k0610, k0611,  \
      k0800, k0900, k0801, k0901,    k0802, k0902, k0803, k0903, k0804, k0904, k0805, k0905, k0806, k0906, k0807, k0907, k0808, k0908,           k0909,          k0910, k0811,  \
      k1000, k1100, k1001, k1101,    k1002, k1102,               k1004, k1104,        k1006, k1106,                             k1108,    k1009, k1109, k1010,   k1110, k1011   \
)  { \
    { k0000, k0001, k0002, k0003, k0004, k0005, k0006, k0007, k0008, k0009, k0010, k0011 }, \
    { k0100, k0101, k0102, k0103, k0104, k0105, k0106, k0107, k0108, k0109, k0110, XXXXX }, \
    { k0200, k0201, k0202, k0203, k0204, k0205, k0206, k0207, k0208, k0209, k0210, k0211 }, \
    { k0300, k0301, k0302, k0303, k0304, k0305, k0306, k0307, k0308, k0309, k0310, XXXXX }, \
    { k0400, k0401, k0402, k0403, k0404, k0405, k0406, k0407, k0408, k0409, k0410, k0411 }, \
    { k0500, k0501, k0502, k0503, k0504, k0505, k0506, k0507, k0508, k0509, k0510, XXXXX }, \
    { k0600, k0601, k0602, k0603, k0604, k0605, k0606, k0607, k0608, XXXXX, k0610, k0611 }, \
    { k0700, k0701, k0702, k0703, k0704, k0705, k0706, k0707, XXXXX, XXXXX, XXXXX, XXXXX }, \
    { k0800, k0801, k0802, k0803, k0804, k0805, k0806, k0807, k0808, XXXXX, XXXXX, k0811 }, \
    { k0900, k0901, k0902, k0903, k0904, k0905, k0906, k0907, k0908, k0909, k0910, XXXXX }, \
    { k1000, k1001, k1002, XXXXX, k1004, XXXXX, k1006, XXXXX, XXXXX, k1009, k1010, k1011 }, \
    { k1100, k1101, k1102, XXXXX, k1104, XXXXX, k1106, XXXXX, k1108, k1109, k1110, XXXXX } \
}
