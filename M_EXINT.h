/*
 * M_EXINT.h
 *
 *  Created on: Sep 2, 2019
 *      Author: osama
 */

#ifndef M_EXINT_H_
#define M_EXINT_H_

#define M_EXINT_ENABLE		1
#define M_EXINT_DISABLE		0

#define M_EXINT_LOW			0x0
#define M_EXINT_CHANGE		0x1
#define M_EXINT_FALLING		0x2
#define M_EXINT_RISING		0x3

#include "stdtypes.h"

void M_EXINT_init(void);
void M_EXINT_addCallback(void(*)(void), u8 int_number);
void M_EXINT_enable(u8 int_number);
void M_EXINT_disable(u8 int_number);

#endif /* M_EXINT_H_ */
