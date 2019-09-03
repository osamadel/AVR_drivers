/*
 * M_EXINT.c
 *
 *  Created on: Sep 2, 2019
 *      Author: osama
 */

#include "M_EXINT_config.h"
#include "M_EXINT_private.h"
#include "M_EXINT.h"
#include "utils.h"

void M_EXINT_init(void) {

	SET_BIT(7, SREG);

#if M_EXINT_INT0 == M_EXINT_ENABLE
	SET_BIT(6, GICR);
#endif

#if M_EXINT_INT1 == M_EXINT_ENABLE
	SET_BIT(7, GICR);
#endif

#if M_EXINT_INT2 == M_EXINT_ENABLE
	SET_BIT(5, GICR);
#endif

	/*add interrupt mode of int0 and int1*/
	MCUCR = (MCUCR & 0xF0) | M_EXINT_INT0_MODE | (M_EXINT_INT1_MODE << 2);

#if M_EXINT_INT2_MODE == M_EXINT_FALLING
	CLR_BIT(6, MCUCSR);
#elif M_EXINT_INT2_MODE == M_EXINT_RISING
	SET_BIT(6, MCUCSR);
#endif

}

void M_EXINT_addCallback(void(*f)(void), u8 int_number) {
	switch (int_number) {
		case 0:
			int0Ptr = f;
			break;
		case 1:
			int1Ptr = f;
			break;
		case 2:
			int2Ptr = f;
			break;
		default:
			break;
	}
}

void M_EXINT_enable(u8 int_number) {
	switch(int_number) {
		case 0:
			SET_BIT(6, GICR);
			break;
		case 1:
			SET_BIT(7, GICR);
			break;
		case 2:
			SET_BIT(5, GICR);
			break;
		default:
			break;
		}
}

void M_EXINT_disable(u8 int_number) {
	switch(int_number) {
		case 0:
			CLR_BIT(6, GICR);
			break;
		case 1:
			CLR_BIT(7, GICR);
			break;
		case 2:
			CLR_BIT(5, GICR);
			break;
		default:
			break;
	}
}

/*INT0 ISR*/
void __vector_1 (void) {
	int0Ptr();
}

/*INT1 ISR*/
void __vector_2 (void) {
	int1Ptr();
}

/*INT2 ISR*/
void __vector_3 (void) {
	int2Ptr();
}
