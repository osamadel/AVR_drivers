/*
 * H_LCD.h
 *
 *  Created on: Sep 1, 2019
 *      Author: osama
 */

#ifndef H_LCD_H_
#define H_LCD_H_

#define INSTR_FUNCTION_SET 0x20|(H_LCD_MODE<<4)|(H_LCD_LINE_DISPLAY<<3)|(H_LCD_FONT<<2)
#define INSTR_DISPLAY_CTRL 0x08|(H_LCD_DISPLAY<<2)|(H_LCD_CURSOR<<1)|(H_LCD_CURSOR_BLINK)
#define INSTR_DISPLAY_CLR  0x01
#define INSTR_ENTRY_MODE 0x04|(H_LCD_INCREMENT_MODE<<1)|(H_LCD_DISPLAY_SHIFT)

void H_LCD_init(void);
void H_LCD_sendData(u8 data);

#endif /* H_LCD_H_ */
