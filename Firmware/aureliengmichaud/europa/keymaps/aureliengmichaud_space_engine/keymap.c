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

/* SPACE ENGINE CTRL */

#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default layer
     * ┌───┬───┬───┬───┐
     * │ Q │ W │ E │ R │
     * ├───┼───┼───┼───┤
     * │ A │ S │ D │ F │
     * ├───┼───┼───┼───┤
     * │SFT│ G │ C │ V │
     * ├───┼───┼───┼───┤
     * │CTL│ \ │ H │ FN│
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,
        KC_A,    KC_S,    KC_D,    KC_F,
        KC_LSFT, KC_G,    KC_C,    KC_V,
        KC_RCTL, KC_BSLS, KC_H,    MO(_FN)
    ),

    /* FN layer
     * ┌───┬───┬───┬───┐
     * │ F1│ F2│ F3│ F4│
     * ├───┼───┼───┼───┤
     * │ F5│ F6│ F7│ F8│
     * ├───┼───┼───┼───┤
     * │ F9│F10│F11│F12│
     * ├───┼───┼───┼───┤
     * │RST│ L │ K │ J │
     * └───┴───┴───┴───┘
     */
    [_FN] = LAYOUT(
        KC_F1, KC_F2,  KC_F3,  KC_F4,
        KC_F5, KC_F6,  KC_F7,  KC_F8,
        KC_F9, KC_F10, KC_F11, KC_F12,
        RESET, KC_L,   KC_K,   KC_J
    )
};
