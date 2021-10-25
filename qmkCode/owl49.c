/* Copyright 2021 owl
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

#include "owl49.h"

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = {{// Key Matrix to LED Index
                              {13, 12, 11, 10, 9, 8, 7, 6},
                              {28, 27, 26, 25, 24, 23, 22, 21},
                              {43, 42, 41, 40, 39, 38, 37, 36},
                              {58, 57, 56, 55, 54, 53, 52, 51},
                              {44, 45 ,46, 47, 48, 49, 50,NO_LED},
                              {29,30, 31, 32, 33, 34, 35, NO_LED},
                              {14, 15, 16, 17, 18, 19, 20, NO_LED},
                              {0, 1, 2, 3, 4, 5, NO_LED, NO_LED}},
                             {// LED Index to Physical Position
                              // x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
                              // y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION

                              {224, 64}, {210, 64}, {196, 64}, {182, 64}, {168, 64}, {154, 64}, {133, 64}, {112, 64}, {98, 64}, {84, 64}, {70, 64}, {28, 64}, {14, 64}, {0, 64},
                              {224, 43}, {210, 43}, {196, 43}, {182, 43}, {168, 43}, {154, 43}, {140, 43}, {126, 43}, {112, 43}, {98, 43}, {84, 43}, {70, 43}, {28, 43}, {14, 43}, {0, 43},
                              {224, 21}, {210, 21}, {196, 21}, {182, 21}, {168, 21}, {154, 21}, {140, 21}, {126, 21}, {112, 21}, {98, 21}, {84, 21}, {70, 21}, {28, 21}, {14, 21}, {0, 21},
                              {224, 0}, {210, 0}, {196, 0}, {182, 0}, {168, 0}, {154, 0}, {140, 0}, {126, 0}, {112, 0}, {98, 0}, {84, 0}, {70, 0}, {28, 0}, {14, 0}, {0, 0},
                              {8, 12}, {36, 12}, {66, 12}, {94, 12}, {122, 12}, {150, 12}, {178, 12}, {206, 12}, {220, 12},
                              {220, 55},{206, 55}, {178, 55}, {150, 55}, {122, 55}, {94, 55}, {66, 55}, {36, 55}, {8, 55} 
                             }, {// LED Index to Flag
                                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                                4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,

                                2, 2, 2, 2, 2, 2, 2, 2, 2,
                                2, 2, 2, 2, 2, 2, 2, 2, 2
                             }
                             };



void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
#endif

