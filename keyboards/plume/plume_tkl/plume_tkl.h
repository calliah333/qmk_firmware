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


#define LAYOUT( \
	K000,   K010, K011, K002, K012,    K003, K013, K004, K014,    K015, K006, K016, K007,    K017, K008, K018,  \
	K020, K030, K021, K031, K022, K032, K023, K033, K024, K034, K025, K035, K026, K027,          K037, K028, K038,  \
	K040, K050, K041, K051, K042, K052, K043, K053, K044, K054, K045, K055, K046, K056,          K057, K048, K058,  \
	K060, K070, K061, K071, K062, K072, K063, K073, K064, K074, K065, K075,  K076,                                  \
 	K080,     K081, K091, K082, K092, K083, K093, K084, K094, K085, K095,      K086,                   K088,        \
	K100,       K101,                   K103,                         K115,       K107,          K117, K108, K118   \
) { \
    { k000,   KC_NO,  k002,   k003,   k004,   k005,   k006,   k007,   k008 }, \
    { k010,   k011,   k012,   k013,   k014,   k015,   k016,   k017,   k018 }, \
    { k020,   k021,   k022,   k023,   k024,   k025,   k026,   k027,   k028 }, \
    { k030,   k031,   k032,   k033,   k034,   k035,   k036,   k037,   k038 }, \
    { k040,   k041,   k042,   k043,   k044,   k045,   k046,   k047,   k048 }, \
    { k050,   k051,   k052,   k053,   k054,   k055,   K0C_NO, k057,   k058 }, \
    { k060,   k061,   k062,   k063,   k064,   k065,   k066,   KC_NO,  KC_NO }, \
    { k070,   k071,   k072,   k073,   k074,   k075,   k076,   KC_NO,  KC_NO }, \
    { k080,   k081,   k082,   k083,   k084,   k085,   k086,   KC_NO,  KC_NO}, \
    { k090,   k091,   k092,   k093,   k094,   k095,   KC_NO,  KC_NO,  k099 }, \
    { k0101,  KC_NO,  KC_NO,  k103,   KC_NO,  KC_NO,  KC_NO,  k107,   k100}, \
    { KC_NO,  k111,   KC_NO,  KC_NO,  KC_NO,  k115,   KC_NO,  k117,   k118 } \
}
