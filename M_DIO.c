#include "stdtypes.h"
#include "utils.h"
#include "M_DIO.h"
#include "M_DIO_config.h"
#include "M_DIO_private.h"



void M_DIO_init (void) {
	#if PIN0_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN0, PORTA);
		#undef PIN0_MODE
		#define PIN0_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN1_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN1, PORTA);
		#undef PIN1_MODE
		#define PIN1_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN2_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN2, PORTA);
		#undef PIN2_MODE
		#define PIN2_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN3_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN3, PORTA);
		#undef PIN3_MODE
		#define PIN3_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN4_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN4, PORTA);
		#undef PIN4_MODE
		#define PIN4_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN5_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN5, PORTA);
		#undef PIN5_MODE
		#define PIN5_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN6_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN6, PORTA);
		#undef PIN6_MODE
		#define PIN6_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN7_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN7, PORTA);
		#undef PIN7_MODE
		#define PIN7_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN8_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN8 % 8, PORTB);
		#undef PIN8_MODE
		#define PIN8_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN9_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN9 % 8, PORTB);
		#undef PIN9_MODE
		#define PIN9_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN0_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN10 % 8, PORTB);
		#undef PIN10_MODE
		#define PIN10_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN11_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN11 % 8, PORTB);
		#undef PIN11_MODE
		#define PIN11_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN012_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN12 % 8, PORTB);
		#undef PIN12_MODE
		#define PIN12_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN13_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN13 % 8, PORTB);
		#undef PIN13_MODE
		#define PIN13_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN14_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN14 % 8, PORTB);
		#undef PIN14_MODE
		#define PIN14_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN15_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN15 % 8, PORTB);
		#undef PIN15_MODE
		#define PIN15_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN16_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN16 % 8, PORTC);
		#undef PIN16_MODE
		#define PIN16_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN17_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN17 % 8, PORTC);
		#undef PIN17_MODE
		#define PIN17_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN18_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN18 % 8, PORTC);
		#undef PIN18_MODE
		#define PIN18_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN19_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN19 % 8, PORTC);
		#undef PIN19_MODE
		#define PIN19_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN20_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN20 % 8, PORTC);
		#undef PIN20_MODE
		#define PIN20_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN21_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN21 % 8, PORTC);
		#undef PIN21_MODE
		#define PIN21_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN22_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN22 % 8, PORTC);
		#undef PIN22_MODE
		#define PIN22_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN23_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN23 % 8, PORTC);
		#undef PIN23_MODE
		#define PIN23_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN24_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN24 % 8, PORTD);
		#undef PIN24_MODE
		#define PIN24_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN25_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN25 % 8, PORTD);
		#undef PIN25_MODE
		#define PIN25_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN26_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN26 % 8, PORTD);
		#undef PIN26_MODE
		#define PIN26_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN27_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN27 % 8, PORTD);
		#undef PIN27_MODE
		#define PIN27_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN28_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN28 % 8, PORTD);
		#undef PIN28_MODE
		#define PIN28_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN29_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN29 % 8, PORTD);
		#undef PIN29_MODE
		#define PIN29_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN30_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN30 % 8, PORTD);
		#undef PIN30_MODE
		#define PIN30_MODE M_DIO_INPUT_FLOAT
	#endif

	#if PIN31_MODE == M_DIO_INPUT_PULLUP
		SET_BIT(M_DIO_PIN31 % 8, PORTD);
		#undef PIN31_MODE
		#define PIN31_MODE M_DIO_INPUT_FLOAT
	#endif

	DDRA =  (PIN0_MODE) 		|
			(PIN1_MODE << 1) 	|
			(PIN2_MODE << 2) 	|
			(PIN3_MODE << 3) 	|
			(PIN4_MODE << 4) 	|
			(PIN5_MODE << 5) 	|
			(PIN6_MODE << 6) 	|
			(PIN7_MODE << 7);

	DDRB =  (PIN8_MODE) 		|
			(PIN9_MODE << 1) 	|
			(PIN10_MODE << 2) 	|
			(PIN11_MODE << 3) 	|
			(PIN12_MODE << 4) 	|
			(PIN13_MODE << 5) 	|
			(PIN14_MODE << 6) 	|
			(PIN15_MODE << 7);

	DDRC =  (PIN16_MODE) 		|
			(PIN17_MODE << 1) 	|
			(PIN18_MODE << 2) 	|
			(PIN19_MODE << 3) 	|
			(PIN20_MODE << 4) 	|
			(PIN21_MODE << 5) 	|
			(PIN22_MODE << 6) 	|
			(PIN23_MODE << 7);

	DDRD =  (PIN24_MODE) 		|
			(PIN25_MODE << 1) 	|
			(PIN26_MODE << 2) 	|
			(PIN27_MODE << 3) 	|
			(PIN28_MODE << 4) 	|
			(PIN29_MODE << 5) 	|
			(PIN30_MODE << 6) 	|
			(PIN31_MODE << 7);
}


void M_DIO_pinMode (u8 pin_number, u8 mode) {
	u8 local_u8PortNumber = pin_number / 8;
	u8 local_u8PinNumber = pin_number % 8;
	switch (local_u8PortNumber) {
		case M_DIO_PORTA:
			if (mode == M_DIO_INPUT_PULLUP) {
				SET_BIT(local_u8PinNumber, PORTA);
				mode = M_DIO_INPUT_FLOAT;
			}
			ASSIGN_BIT(local_u8PinNumber, DDRA, mode);
			break;
		case M_DIO_PORTB:
			if (mode == M_DIO_INPUT_PULLUP) {
				SET_BIT(local_u8PinNumber, PORTB);
				mode = M_DIO_INPUT_FLOAT;
			}
			ASSIGN_BIT(local_u8PinNumber, DDRB, mode);
			break;
		case M_DIO_PORTC:
			if (mode == M_DIO_INPUT_PULLUP) {
				SET_BIT(local_u8PinNumber, PORTC);
				mode = M_DIO_INPUT_FLOAT;
			}
			ASSIGN_BIT(local_u8PinNumber, DDRC, mode);
			break;
		case M_DIO_PORTD:
			if (mode == M_DIO_INPUT_PULLUP) {
				SET_BIT(local_u8PinNumber, PORTD);
				mode = M_DIO_INPUT_FLOAT;
			}
			ASSIGN_BIT(local_u8PinNumber, DDRD, mode);
			break;
		default:
			/*report error*/
			break;
	}

}


void M_DIO_portMode (u8 port_number, u8 mode, u8 mask) {
	switch (port_number) {
		case M_DIO_PORTA:
			if (mode == M_DIO_INPUT_PULLUP) {
				PORTA |= mask;
				mode = M_DIO_INPUT_FLOAT;
			}
			DDRA = mode? DDRA|mask : DDRA & ~mask;
			break;
		case M_DIO_PORTB:
			if (mode == M_DIO_INPUT_PULLUP) {
				PORTB |= mask;
				mode = M_DIO_INPUT_FLOAT;
			}
			DDRB = mode? DDRB|mask : DDRB & ~mask;
			break;
		case M_DIO_PORTC:
			if (mode == M_DIO_INPUT_PULLUP) {
				PORTC |= mask;
				mode = M_DIO_INPUT_FLOAT;
			}
			DDRC = mode? DDRC|mask : DDRC & ~mask;
			break;
		case M_DIO_PORTD:
			if (mode == M_DIO_INPUT_PULLUP) {
				PORTD |= mask;
				mode = M_DIO_INPUT_FLOAT;
			}
			DDRD = mode? DDRD|mask : DDRD & ~mask;
			break;
		default:
			/*report error*/
			break;
	}
}


void M_DIO_pinWrite (u8 pin_number, u8 val) {
	u8 local_u8PinNumber = pin_number % 8;
	u8 local_u8PortNumber = pin_number / 8;

	switch (local_u8PortNumber) {
		case M_DIO_PORTA:
			ASSIGN_BIT(local_u8PinNumber, PORTA, val);
			break;
		case M_DIO_PORTB:
			ASSIGN_BIT(local_u8PinNumber, PORTB, val);
			break;
		case M_DIO_PORTC:
			ASSIGN_BIT(local_u8PinNumber, PORTC, val);
			break;
		case M_DIO_PORTD:
			ASSIGN_BIT(local_u8PinNumber, PORTD, val);
			break;
		default:
			/*report error*/
			break;
	}
}


void M_DIO_portWrite (u8 port_number, u8 val, u8 mask) {
	switch (port_number) {
		case M_DIO_PORTA:
			PORTA = val ? PORTA | mask : PORTA & ~mask;
			break;
		case M_DIO_PORTB:
			PORTB = val ? PORTB | mask : PORTB & ~mask;
			break;
		case M_DIO_PORTC:
			PORTC = val ? PORTC | mask : PORTC & ~mask;
			break;
		case M_DIO_PORTD:
			PORTD = val ? PORTD | mask : PORTD & ~mask;
			break;
		default:
			/*report error*/
			break;
	}
}


u8 M_DIO_pinRead (u8 pin_number) {
	u8 local_u8PinNumber = pin_number % 8;
	u8 local_u8PortNumber = pin_number / 8;
	u8 local_u8ReturnValue = 255;
	switch (local_u8PortNumber) {
		case M_DIO_PORTA:
			local_u8ReturnValue = GET_BIT(local_u8PinNumber, PINA);
			break;
		case M_DIO_PORTB:
			local_u8ReturnValue = GET_BIT(local_u8PinNumber, PINB);
			break;
		case M_DIO_PORTC:
			local_u8ReturnValue = GET_BIT(local_u8PinNumber, PINC);
			break;
		case M_DIO_PORTD:
			local_u8ReturnValue = GET_BIT(local_u8PinNumber, PIND);
			break;
		default:
			/*report error*/
			break;
	}
	return local_u8ReturnValue;
}


u8 M_DIO_portRead (u8 port_number, u8 mask) {
	u8 local_u8ReturnValue = 255;
	switch (port_number) {
		case M_DIO_PORTA:
			local_u8ReturnValue = PINA & mask;
			break;
		case M_DIO_PORTB:
			local_u8ReturnValue = PINB & mask;
			break;
		case M_DIO_PORTC:
			local_u8ReturnValue = PINC & mask;
			break;
		case M_DIO_PORTD:
			local_u8ReturnValue = PIND & mask;
			break;
		default:
			/*report error*/
			break;
	}
	return local_u8ReturnValue;
}
