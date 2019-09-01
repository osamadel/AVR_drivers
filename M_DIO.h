/*
 * M_DIO.h
 *
 *  Created on: Aug 31, 2019
 *      Author: osama
 */

#ifndef M_DIO_H_
#define M_DIO_H_

#include "stdtypes.h"

/*LOW and HIGH macros*/
#define LOW						0
#define HIGH					1


/*Pin mode macros*/
#define M_DIO_OUTPUT			1
#define M_DIO_INPUT_FLOAT		0
#define M_DIO_INPUT_PULLUP		2


/*Pin number macros*/
#define M_DIO_PIN0				0
#define M_DIO_PIN1				1
#define M_DIO_PIN2				2
#define M_DIO_PIN3				3
#define M_DIO_PIN4				4
#define M_DIO_PIN5				5
#define M_DIO_PIN6				6
#define M_DIO_PIN7				7
#define M_DIO_PIN8				8
#define M_DIO_PIN9				9
#define M_DIO_PIN10				10
#define M_DIO_PIN11				11
#define M_DIO_PIN12				12
#define M_DIO_PIN13				13
#define M_DIO_PIN14				14
#define M_DIO_PIN15				15
#define M_DIO_PIN16				16
#define M_DIO_PIN17				17
#define M_DIO_PIN18				18
#define M_DIO_PIN19				19
#define M_DIO_PIN20				20
#define M_DIO_PIN21				21
#define M_DIO_PIN22				22
#define M_DIO_PIN23				23
#define M_DIO_PIN24				24
#define M_DIO_PIN25				25
#define M_DIO_PIN26				26
#define M_DIO_PIN27				27
#define M_DIO_PIN28				28
#define M_DIO_PIN29				29
#define M_DIO_PIN30				30
#define M_DIO_PIN31				31



/*Port names macros*/
#define M_DIO_PORTA				0
#define M_DIO_PORTB				1
#define M_DIO_PORTC				2
#define M_DIO_PORTD				3


/*Function Prototypes*/

/******************************************************************************/
/* initialize DIO pin modes as configured in M_DIO_config.h 				  */
/******************************************************************************/
void M_DIO_init			(void);


/******************************************************************************/
/* set (pin_number) pin mode to (mode) which takes one of the pin mode macros */
/******************************************************************************/
void M_DIO_pinMode		(u8 pin_number, u8 mode);


/******************************************************************************/
/* set (port_number) port mode to (mode) at the 1's of (mask) 				  */
/******************************************************************************/
void M_DIO_portMode		(u8 port_number, u8 mode, u8 mask);


/******************************************************************************/
/* set (pin_number) pin to (val) (either HIGH(1) or LOW(0))   				  */
/******************************************************************************/
void M_DIO_pinWrite		(u8 pin_number, u8 val);


/******************************************************************************/
/* set (port_number) port to (val) (either HIGH(1) or LOW(0)) at 1's of mask  */
/******************************************************************************/
void M_DIO_portWrite		(u8 port_number, u8 val, u8 mask);


/******************************************************************************/
/* return val at (pin_number) (either HIGH(1) or LOW(0))   				      */
/******************************************************************************/
u8 M_DIO_pinRead		(u8 pin_number);


/******************************************************************************/
/* return val of (port_number) at 1's of mask  								  */
/******************************************************************************/
u8 M_DIO_portRead		(u8 port_number, u8 mask);



#endif /* M_DIO_H_ */
