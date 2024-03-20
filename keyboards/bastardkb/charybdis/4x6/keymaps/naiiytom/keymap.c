/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_LOWER,
    LAYER_RAISE,
};

#define LOWER MO(LAYER_LOWER)
#define RAISE MO(LAYER_RAISE)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
       KC_ESC,  KC_1, KC_2,  KC_3,    KC_4,      KC_5,       KC_6,  KC_7,    KC_8,     KC_9,   KC_0,    KC_GRV,
       KC_TAB,  KC_Q, KC_W,  KC_E,    KC_R,      KC_T,       KC_Y,  KC_U,    KC_I,     KC_O,   KC_P,    KC_MINS,
       KC_RALT, KC_A, KC_S,  KC_D,    KC_F,      KC_G,       KC_H,  KC_J,    KC_K,     KC_L,   KC_SCLN, KC_QUOT,
       KC_LSFT, KC_Z, KC_X,  KC_C,    KC_V,      KC_B,       KC_N,  KC_M,    KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                             KC_LCTL, KC_LBRC,   LOWER,      RAISE, KC_RBRC,
                                      KC_DEL,    KC_SPC,     KC_ENT
  ),

  [LAYER_LOWER] = LAYOUT(
       KC_MUTE, KC_MPRV,   KC_MPLY, KC_MNXT,  KC_VOLD, KC_VOLU,    KC_BRID, KC_BRIU, _______, _______, _______, KC_BSPC,
       KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11, KC_F12,
       _______, _______, _______, KC_WH_U, KC_WH_L, KC_WH_R,       _______,   _______,   _______,   _______, _______, KC_BSLS,
       _______, _______, _______, KC_WH_D,  KC_MS_L, KC_MS_R,      _______,   _______,   _______,   _______, _______, KC_PIPE,
                                  _______, _______, _______,       _______, _______,
                                           _______, _______,       _______
  ),

  [LAYER_RAISE] = LAYOUT(
       _______,   _______,   _______,   _______,   _______,   _______,      _______,   _______,   _______,   _______,  _______,  KC_HOME,
       _______, _______, _______, _______, _______, _______,    _______, _______, _______, KC_UP, _______, KC_END,
       _______, _______,   _______, _______, _______, _______,    _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP,
       _______, _______, _______, _______,  _______, _______,    KC_EQL,  KC_PMNS, KC_PLUS, KC_ASTR, KC_PSLS, KC_PGDN,
                                  _______, _______, _______,    _______, _______,
                                           _______, _______,    _______
  ),
};
// clang-format on
