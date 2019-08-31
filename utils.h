/*
 * utils.h
 *
 *  Created on: Aug 31, 2019
 *      Author: osama
 */

#ifndef UTILS_H_
#define UTILS_H_

#define MASK(bit)					(1 << bit)
#define SET_BIT(bit, var)			var = var | MASK(bit)
#define CLR_BIT(bit, var)			var = var & ~MASK(bit)
#define TOGGLE_BIT(bit, var)		var = var ^ MASK(bit)
#define ASSIGN_BIT(bit, var, val)	var = val?(var | MASK(bit)):(var = var & ~MASK(bit))
#define GET_BIT(bit, var)			((var >> bit) & 1)

#endif /* UTILS_H_ */
