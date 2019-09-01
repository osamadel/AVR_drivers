/*
 * H_LCD.c
 *
 *  Created on: Sep 1, 2019
 *      Author: osama
 */

#include <util/delay.h>
#include "M_DIO.h"
#include "H_LCD_config.h"
#include "H_LCD_private.h"
#include "H_LCD.h"

void H_LCD_init(void) {
	M_DIO_pinWrite(H_LCD_E, LOW);
	_delay_ms(50);
	H_LCD_sendInstruction(INSTR_FUNCTION_SET);
	_delay_ms(1);
	H_LCD_sendInstruction(INSTR_DISPLAY_CTRL);
	_delay_ms(1);
	H_LCD_sendInstruction(INSTR_DISPLAY_CLR);
	_delay_ms(2);
	H_LCD_sendInstruction(INSTR_ENTRY_MODE);
}

void H_LCD_sendInstruction(u8 instr) {
#if H_LCD_MODE == H_LCD_4BIT
	M_DIO_pinWrite(H_LCD_RS, LOW);
	M_DIO_pinWrite(H_LCD_RW, LOW);
	M_DIO_pinWrite(H_LCD_D7, instr & (0x80));
	M_DIO_pinWrite(H_LCD_D6, instr & (0x40));
	M_DIO_pinWrite(H_LCD_D5, instr & (0x20));
	M_DIO_pinWrite(H_LCD_D4, instr & (0x10));
	M_DIO_pinWrite(H_LCD_E, HIGH);
	_delay_ms(2);
	M_DIO_pinWrite(H_LCD_E, LOW);

	M_DIO_pinWrite(H_LCD_RS, LOW);
	M_DIO_pinWrite(H_LCD_RW, LOW);
	M_DIO_pinWrite(H_LCD_D7, instr & (0x08));
	M_DIO_pinWrite(H_LCD_D6, instr & (0x04));
	M_DIO_pinWrite(H_LCD_D5, instr & (0x02));
	M_DIO_pinWrite(H_LCD_D4, instr & (0x01));
	M_DIO_pinWrite(H_LCD_E, HIGH);
	_delay_ms(2);
	M_DIO_pinWrite(H_LCD_E, LOW);


#elif H_LCD_MODE == H_LCD_8BIT
	M_DIO_pinWrite(H_LCD_RS, LOW);
	M_DIO_pinWrite(H_LCD_RW, LOW);
	M_DIO_pinWrite(H_LCD_D7, instr & (0x80));
	M_DIO_pinWrite(H_LCD_D6, instr & (0x40));
	M_DIO_pinWrite(H_LCD_D5, instr & (0x20));
	M_DIO_pinWrite(H_LCD_D4, instr & (0x10));
	M_DIO_pinWrite(H_LCD_D3, instr & (0x08));
	M_DIO_pinWrite(H_LCD_D2, instr & (0x04));
	M_DIO_pinWrite(H_LCD_D1, instr & (0x02));
	M_DIO_pinWrite(H_LCD_D0, instr & (0x01));
	M_DIO_pinWrite(H_LCD_E, HIGH);
	_delay_ms(2);
	M_DIO_pinWrite(H_LCD_E, LOW);

#endif
}

void H_LCD_sendData(u8 data) {
#if H_LCD_MODE == H_LCD_4BIT
	M_DIO_pinWrite(H_LCD_RS, HIGH);
	M_DIO_pinWrite(H_LCD_RW, LOW);
	M_DIO_pinWrite(H_LCD_D7, data & (0x80));
	M_DIO_pinWrite(H_LCD_D6, data & (0x40));
	M_DIO_pinWrite(H_LCD_D5, data & (0x20));
	M_DIO_pinWrite(H_LCD_D4, data & (0x10));
	M_DIO_pinWrite(H_LCD_E, HIGH);
	_delay_ms(2);
	M_DIO_pinWrite(H_LCD_E, LOW);

	M_DIO_pinWrite(H_LCD_RS, LOW);
	M_DIO_pinWrite(H_LCD_RW, LOW);
	M_DIO_pinWrite(H_LCD_D7, data & (0x08));
	M_DIO_pinWrite(H_LCD_D6, data & (0x04));
	M_DIO_pinWrite(H_LCD_D5, data & (0x02));
	M_DIO_pinWrite(H_LCD_D4, data & (0x01));
	M_DIO_pinWrite(H_LCD_E, HIGH);
	_delay_ms(2);
	M_DIO_pinWrite(H_LCD_E, LOW);


#elif H_LCD_MODE == H_LCD_8BIT
	M_DIO_pinWrite(H_LCD_RS, LOW);
	M_DIO_pinWrite(H_LCD_RW, LOW);
	M_DIO_pinWrite(H_LCD_D7, data & (0x80));
	M_DIO_pinWrite(H_LCD_D6, data & (0x40));
	M_DIO_pinWrite(H_LCD_D5, data & (0x20));
	M_DIO_pinWrite(H_LCD_D4, data & (0x10));
	M_DIO_pinWrite(H_LCD_D3, data & (0x08));
	M_DIO_pinWrite(H_LCD_D2, data & (0x04));
	M_DIO_pinWrite(H_LCD_D1, data & (0x02));
	M_DIO_pinWrite(H_LCD_D0, data & (0x01));
	M_DIO_pinWrite(H_LCD_E, HIGH);
	_delay_ms(2);
	M_DIO_pinWrite(H_LCD_E, LOW);

#endif
}
