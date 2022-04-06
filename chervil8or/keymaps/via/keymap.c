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

#include QMK_KEYBOARD_H

#include "common/oled_helper.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8, KC_1, KC_2, KC_3, KC_4
    ),
    [1] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D, KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H, KC_A, KC_B, KC_C, KC_D
    ),
    [2] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8, KC_1, KC_2, KC_3, KC_4
    ),
    [3] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8, KC_1, KC_2, KC_3, KC_4
    )
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo_qmk();
    } else {
        render_logo();
    }
    return false;
}
#endif

/* Rotary encoder settings */
bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {

        if (clockwise) {
            tap_code(KC_UP);    //Rotary encoder clockwise
        } else {
            tap_code(KC_DOWN);  //Rotary encoder Reverse clockwise
        }

    } else if (index == 1) {

        if (clockwise) {
            tap_code(KC_LEFT);    //Rotary encoder clockwise
        } else {
            tap_code(KC_RIGHT);  //Rotary encoder Reverse clockwise
        }

    }

    return true;

}
