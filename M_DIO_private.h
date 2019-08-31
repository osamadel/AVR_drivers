/*
 * M_DIO_private.h
 *
 *  Created on: Aug 31, 2019
 *      Author: osama
 */

#ifndef M_DIO_PRIVATE_H_
#define M_DIO_PRIVATE_H_

/* PORTA I/O Registers */
#define PORTA	*((volatile u8 *)0x3B)
#define DDRA	*((volatile u8 *)0x3A)
#define PINA	*((volatile u8 *)0x39)
/* PORTB I/O Registers */
#define PORTB	*((volatile u8 *)0x38)
#define DDRB	*((volatile u8 *)0x37)
#define PINB	*((volatile u8 *)0x36)
/* PORTC I/O Registers */
#define PORTC	*((volatile u8 *)0x35)
#define DDRC	*((volatile u8 *)0x34)
#define PINC	*((volatile u8 *)0x33)
/* PORTD I/O Registers */
#define PORTD	*((volatile u8 *)0x32)
#define DDRD	*((volatile u8 *)0x31)
#define PIND	*((volatile u8 *)0x30)

#endif /* INCLUDE_M_DIO_PRIVATE_H_ */
