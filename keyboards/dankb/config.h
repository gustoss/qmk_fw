// Copyright 2024 Augusto (@gustoss)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

// HANDEDNESS SPLIT PIN
#define SPLIT_HAND_PIN GP0

// COMMUNICATION OPTIONS
// #define USE_I2C
#define I2C_DRIVER I2CD1
// #define SERIAL_PIO_USE_PIO1         // Force to use I2C0
// #define SPLIT_USB_DETECT            // USB detected is master
// #define SERIAL_USART_FULL_DUPLEX    // Enable full duplex operation mode
// #define SERIAL_USART_TX_PIN GP10      // USART TX pin
// #define SERIAL_USART_RX_PIN GP11
#define I2C1_SDA_PIN GP10           // USART RX pin
#define I2C1_SCL_PIN GP11           // USART TX pin
// #define SERIAL_USART_PIN_SWAP       // In master swap I2C pin (TX, RX)
// #define SELECT_SOFT_SERIAL_SPEED 0  // Change baudrate to 460800 in Full-Duplex

// #define SERIAL_DEBUG                // DEBUG SERIAL

// OLED OPTIONS
// #define OLED_DISPLAY_128X64
// #define I2C0_SDA_PIN GP8            // USART RX pin
// #define I2C0_SCL_PIN GP9            // USART TX pin