/*
Copyright 2020 aureliengmichaud

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

/* LOGIC PRO X CTRL */

#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default layer
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │ FN│
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT(
        KC_, KC_, KC_, KC_,
        KC_, KC_, KC_, KC_,
        KC_, KC_, KC_, KC_,
        KC_, KC_, KC_, MO(FN)
    ),

    /* FN layer
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │RST│   │   │   │
     * └───┴───┴───┴───┘
     */
    [_FN] = LAYOUT(
        KC_,   KC_, KC_, KC_,
        KC_,   KC_, KC_, KC_,
        KC_,   KC_, KC_, KC_,
        RESET, KC_, KC_, KC_
    )
};
