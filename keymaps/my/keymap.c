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
#include "kmutils.h"

enum custom_keycodes  {
    DUMMY = SAFE_RANGE,
    MC_A1,
    MC_A2,
    MC_A3,
    MC_B1,
    MC_B2,
    MC_B3,
    MC_C1,
    MC_C2,
    MC_C3,
    MC_D1,
    MC_D2,
    MC_D3,
    MC_E1,
    MC_E2,
    MC_E3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MC_A1,      MC_A2,      MC_A3,
        MC_B1,      MC_B2,      MC_B3,
        MC_C1,      MC_C2,      MC_C3,
        MC_D1,      MC_D2,      MC_D3,
        MC_E1,      MC_E2,      MC_E3
        ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DUMMY : break;
        case MC_A1: {
            if(record->event.pressed) {
                SEND_STRING("A1");
            }
            break;
        }
        case MC_A2: {
            if(record->event.pressed) {
                SEND_STRING("A2");
            }
            break;
        }
        case MC_A3: {
            if(record->event.pressed) {}
            break;
        }
        case MC_B1: {
            if(record->event.pressed) {}
            break;
        }
        case MC_B2: {
            if(record->event.pressed) {}
            break;
        }
        case MC_B3: {
            if(record->event.pressed) {}
            break;
        }
        case MC_C1: {
            if(record->event.pressed) {}
            break;
        }
        case MC_C2: {
            if(record->event.pressed) {}
            break;
        }
        case MC_C3: {
            if(record->event.pressed) {}
            break;
        }
        case MC_D1: {
            if(record->event.pressed) {}
            break;
        }
        case MC_D2: {
            if(record->event.pressed) {}
            break;
        }
        case MC_D3: {
            if(record->event.pressed) {}
            break;
        }
        case MC_E1: {
            if(record->event.pressed) {}
            break;
        }
        case MC_E2: {
            if(record->event.pressed) {}
            break;
        }
        case MC_E3: {
            if(record->event.pressed) {}
            break;
        }
    }
    return true;
}

void typing(keyrecord_t *record, uint16_t key) {
    if(record->event.pressed) {
        register_code(key);
    } else {
        unregister_code(key);
    }
}
