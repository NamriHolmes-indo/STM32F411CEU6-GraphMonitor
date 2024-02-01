/*
 * lcd.h
 *
 *  Created on: Dec 15, 2023
 *      Author: NAMRI
 */

#define INC_LCD_H_

#ifndef LCD_H
#define LCD_H

#include "main.h"

#define LCD_DELAY 10  // Delay in microseconds

// Pin konfigurasi
#define RD_PORT GPIOA
#define RD_PIN  GPIO_PIN_0
#define WR_PORT GPIOA
#define WR_PIN  GPIO_PIN_1
#define CD_PORT GPIOA          // RS PORT
#define CD_PIN  GPIO_PIN_2     // RS PIN
#define CS_PORT GPIOA
#define CS_PIN  GPIO_PIN_3
#define RESET_PORT GPIOA
#define RESET_PIN  GPIO_PIN_4

#define D0_PORT GPIOB
#define D0_PIN GPIO_PIN_0
#define D1_PORT GPIOB
#define D1_PIN GPIO_PIN_1
#define D2_PORT GPIOA
#define D2_PIN GPIO_PIN_15
#define D3_PORT GPIOB
#define D3_PIN GPIO_PIN_3
#define D4_PORT GPIOB
#define D4_PIN GPIO_PIN_4
#define D5_PORT GPIOB
#define D5_PIN GPIO_PIN_5
#define D6_PORT GPIOB
#define D6_PIN GPIO_PIN_6
#define D7_PORT GPIOA
#define D7_PIN GPIO_PIN_5

void lcd_write_data(uint8_t data);
void lcd_write_command(uint8_t command);
void lcd_init(void);
void lcd_write_string(char *str);

#endif /* INC_LCD_H_ */
