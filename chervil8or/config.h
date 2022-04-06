// Copyright 2022 LimitTechnologyKeys (@LimitTechnologyKeys)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xECE0
#define PRODUCT_ID   0xECE0
#define DEVICE_VER   0x0001
#define MANUFACTURER LimitTechnologyKeys
#define PRODUCT      chervil8or
#define DESCRIPTION  awesome macropad

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 4

// キーのピン設定
// UNUSED_PINSには何も書かなくてOK
#define MATRIX_ROW_PINS { B4, E6, D7, C6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1 }

#define UNUSED_PINS

// ダイオードの向き
/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#ifndef RGBLED_NUM
  #define RGBLED_NUM 8   //LEDの数。任意の値に変更。
#endif

/* Rotary encoder define*/
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { B5 }
#define TAP_CODE_DELAY 100

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D2
#define MASTER_LEFT

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define OLED_FONT_H "./common/glcdfont.c"
