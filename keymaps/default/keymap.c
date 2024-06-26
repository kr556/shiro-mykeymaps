/* Copyright 2019 T.Shinohara
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

enum layer_number { _MODE_A = 0,
  _CURSOL,
  _MOUSE
};

#define MODE_A TO(_NUMBER)
#define CURSOL TO(_CURSOL)
#define MOUSE  TO(_MOUSE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MODE_A] = LAYOUT(MODE_A,   CURSOL,   MOUSE,
    KC_7,     KC_8,     KC_9,
    KC_4,     KC_5,     KC_6,
    KC_1,     KC_2,     KC_3,
    KC_0,     KC_BSPC,  KC_ENT
  ),
  [_CURSOL] = LAYOUT(MODE_A,   CURSOL,   MOUSE,
    KC_HOME,  KC_UP,    KC_PGUP,
    KC_LEFT,  KC_ESC,   KC_RIGHT,
    KC_END,   KC_DOWN,  KC_PGDN,
    KC_DEL,   KC_BSPC,  KC_ENT
  ), 
  [_MOUSE] = LAYOUT(MODE_A,   CURSOL,   MOUSE,
    KC_CUT,   KC_COPY,  KC_PSTE,
    KC_UNDO,  KC_FIND,  KC_AGIN,
    XXXXXXX,  XXXXXXX,  XXXXXXX,
    KC_DEL,   KC_BSPC,  KC_ENT
  ),
};
