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
#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default layer
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │C+C│
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │C+V│
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │C+P│
     * ├───┼───┼───┼───┤
     * │ 0 │ . │ENT│ FN│
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT(
        KC_P7,    KC_P8,    KC_P9,    KC_COPY,
        KC_P4,    KC_P5,    KC_P6,    KC_PASTE,
        KC_P1,    KC_P2,    KC_P3,    KC_CUT,
        KC_P0,    KC_PDOT,  KC_PENT,  MO(_FN)
    ),

    /* FN layer
     * ┌───┬───┬───┬───┐
     * │ + │ - │ * │ / │
     * ├───┼───┼───┼───┤
     * │   │   │ , │ = │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │RST│   │   │   │
     * └───┴───┴───┴───┘
     */
    [_FN] = LAYOUT(
        KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS,
        _______, _______, KC_PCMM, KC_PEQL,
        _______, _______, _______, _______,
          RESET, _______, _______, _______
    )
};
