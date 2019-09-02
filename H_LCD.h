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

#define H_LCD_SHIFT_RIGHT 1
#define H_LCD_SHIFT_LEFT  0

void H_LCD_init(void);
void H_LCD_printChar(u8 data);
void H_LCD_clearDisplay(void);
void H_LCD_cursorPosition(u8 line, u8 column);
void H_LCD_printText(u8 *string);
void H_LCD_shiftDisplay(u8 shift_direction);
void H_LCD_printInt(u32 integer);
void H_LCD_printFloat(f32 fnumber, u8 decimalDigits);

#endif /* H_LCD_H_ */
