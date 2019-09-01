/*
 * H_LCD_private.h
 *
 *  Created on: Sep 1, 2019
 *      Author: osama
 */

#ifndef H_LCD_PRIVATE_H_
#define H_LCD_PRIVATE_H_

#define H_LCD_4BIT				0
#define H_LCD_8BIT				1
#define H_LCD_1LINE 			0
#define H_LCD_2LINE				1
#define H_LCD_5x7				0
#define H_LCD_8x10				1
#define H_LCD_DISPLAY_OFF		0
#define H_LCD_DISPLAY_ON		1
#define H_LCD_CURSOR_OFF		0
#define H_LCD_CURSOR_ON			1
#define H_LCD_BLINK_OFF			0
#define H_LCD_BLINK_ON			1
#define H_LCD_DECREMENT			0
#define H_LCD_INCREMENT			1
#define H_LCD_NO_SHIFT			0
#define H_LCD_SHIFT				1

void H_LCD_sendInstruction(u8 instr);

#endif /* H_LCD_PRIVATE_H_ */
