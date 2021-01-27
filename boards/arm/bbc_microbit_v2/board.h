/*
 * Copyright (c) 2016 Nordic Semiconductor ASA.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

/* External edge connector pin mappings to nRF51 GPIO pin numbers.
 * More information:
 * https://www.microbit.co.uk/device/pins
 * https://github.com/microbit-foundation/microbit-reference-design/tree/master/PDF/Schematic%20Print
 */
#define EXT_P0_GPIO_PIN     2   /* P0, RING0 */
#define EXT_P1_GPIO_PIN     3   /* P1, RING1 */
#define EXT_P2_GPIO_PIN     4   /* P2, RING2 */
#define EXT_P3_GPIO_PIN     31  /* P3, LED Col 3 */
#define EXT_P4_GPIO_PIN     28  /* P4, LED Col 1 */
#define EXT_P5_GPIO_PIN     14  /* P5, Button A */
#define EXT_P6_GPIO_PIN     37  /* P6, LED Col 4 */
#define EXT_P7_GPIO_PIN     11  /* P7, LED Col 2 */
#define EXT_P8_GPIO_PIN     10  /* P8, GPIO 1 */
#define EXT_P9_GPIO_PIN     9   /* P9, GPIO 2 */
#define EXT_P10_GPIO_PIN    30  /* P10, LED Col 5 */
#define EXT_P11_GPIO_PIN    23  /* P11, Button B */
#define EXT_P12_GPIO_PIN    12  /* P12, GPIO 4 */
#define EXT_P13_GPIO_PIN    17  /* P13, SPI1 SCK */
#define EXT_P14_GPIO_PIN    1   /* P14, SPI1 MISO */
#define EXT_P15_GPIO_PIN    13  /* P15, SPI1 MOSI */
#define EXT_P16_GPIO_PIN    34  /* P16, GPIO 3 */
/* 17 and 18 are just 3.3V pins */
#define EXT_P19_GPIO_PIN    26  /* P19, I2C1 SCL */
#define EXT_P20_GPIO_PIN    32  /* P20, I2C1 SDA */

#endif /* __INC_BOARD_H */
