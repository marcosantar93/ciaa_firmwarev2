/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ernesto Gigliotti <ernestogigliotti@gmail.com>
 * Copyright (c) 2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __MICROPY_INCLUDED_EDUCIAANXP_MODPYB_H__
#define __MICROPY_INCLUDED_EDUCIAANXP_MODPYB_H__

extern const mp_obj_type_t pyb_led_type;
extern const mp_obj_type_t pyb_switch_type;
extern const mp_obj_type_t pyb_uart_type;
extern const mp_obj_type_t pyb_gpio_type;
extern const mp_obj_type_t pyb_extint_type;
extern const mp_obj_type_t pyb_dac_type;
extern const mp_obj_type_t pyb_timer_type;
extern const mp_obj_type_t pyb_pwm_type;
extern const mp_obj_type_t pyb_adc_type;
extern const mp_obj_type_t pyb_keyboard_type;
extern const mp_obj_type_t pyb_lcd_type;
extern const mp_obj_type_t pyb_eeprom_type;
extern const mp_obj_type_t pyb_spi_type;
extern const mp_obj_type_t pyb_rtc_type;
extern const mp_obj_type_t pyb_i2c_type;

extern const mp_obj_module_t pyb_module;

#endif