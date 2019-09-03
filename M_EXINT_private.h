/*
 * M_EXINT_private.h
 *
 *  Created on: Sep 2, 2019
 *      Author: osama
 */

#ifndef M_EXINT_PRIVATE_H_
#define M_EXINT_PRIVATE_H_

#define INT0_PIN 		M_DIO_PIN26
#define INT1_PIN 		M_DIO_PIN27
#define INT2_PIN 		M_DIO_PIN10

#define MCUCR			*((volatile u8 *)0x55)
#define MCUCSR			*((volatile u8 *)0x54)

#ifndef SREG
#define SREG			*((volatile u8 *)0x5F)
#endif

#ifndef GICR
#define GICR			*((volatile u8 *)0x5B)
#endif

#ifndef GIFR
#define GIFR			*((volatile u8 *)0x5A)
#endif

void __vector_1(void) __attribute__ ((signal, used));
void __vector_2(void) __attribute__ ((signal, used));
void __vector_3(void) __attribute__ ((signal, used));

void (* int0Ptr) (void);
void (* int1Ptr) (void);
void (* int2Ptr) (void);

#endif /* M_EXINT_PRIVATE_H_ */
