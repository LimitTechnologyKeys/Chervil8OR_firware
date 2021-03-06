/* Copyright 2022 LimitTechnologyKeys (@LimitTechnologyKeys)
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

#define LAYOUT( \
    L00, L01,     R00, R01, \
    L10, L11,     R10, R11, \
    L20, L21,     R20, R21, \
    L30, L31,     R30, R31  \
){ \
    { KC_NO, L00,   KC_NO, L01   }, \
    { L10,   KC_NO, L11,   KC_NO }, \
    { KC_NO, L20,   KC_NO, L21   }, \
    { L30,   KC_NO, L31,   KC_NO }, \
    { KC_NO, R00,   KC_NO, R01   }, \
    { R10,   KC_NO, R11,   KC_NO }, \
    { KC_NO, R20,   KC_NO, R21   }, \
    { R30,   KC_NO, R31,   KC_NO }  \
}
