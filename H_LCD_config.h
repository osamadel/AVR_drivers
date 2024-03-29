/*
 * H_LCD_config.h
 *
 *  Created on: Sep 1, 2019
 *      Author: osama
 */

#ifndef H_LCD_CONFIG_H_
#define H_LCD_CONFIG_H_


/*LCD initialization configuration*/
#define H_LCD_MODE								H_LCD_4BIT
#define H_LCD_LINE_DISPLAY						H_LCD_2LINE
#define H_LCD_FONT								H_LCD_5x7
#define H_LCD_DISPLAY							H_LCD_DISPLAY_ON
#define H_LCD_CURSOR							H_LCD_CURSOR_ON
#define H_LCD_CURSOR_BLINK						H_LCD_BLINK_ON
#define H_LCD_INCREMENT_MODE					H_LCD_INCREMENT
#define H_LCD_DISPLAY_SHIFT						H_LCD_NO_SHIFT

/*LCD pin configuration*/

/*control pins*/
#define H_LCD_RS 								M_DIO_PIN26
#define H_LCD_RW 								M_DIO_PIN25
#define H_LCD_E 								M_DIO_PIN24

/*data or instruction pins*/
#if H_LCD_MODE == H_LCD_8BIT
#define H_LCD_D0								M_DIO_PIN16
#define H_LCD_D1								M_DIO_PIN17
#define H_LCD_D2								M_DIO_PIN18
#define H_LCD_D3								M_DIO_PIN19
#endif
#define H_LCD_D4 								M_DIO_PIN20
#define H_LCD_D5 								M_DIO_PIN21
#define H_LCD_D6 								M_DIO_PIN22
#define H_LCD_D7 								M_DIO_PIN23



#endif /* H_LCD_CONFIG_H_ */
