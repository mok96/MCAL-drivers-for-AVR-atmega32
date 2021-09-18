/*
 * MATH.h
 *
 *  Created on: Aug 9, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_LIB_MATH_H_
#define COTS_LIB_MATH_H_


#define SET_BIT(REG,BITNO) (REG) |=  (1 << (BITNO))
#define CLR_BIT(REG,BITNO) (REG) &= ~(1 << (BITNO))
#define TOG_BIT(REG,BITNO) (REG) ^=  (1 << (BITNO))
#define GET_BIT(REG,BITNO) (((REG) >> (BITNO)) & 0x01)
#define WRITE_VALUE_BIT(REG,BITNO,VALUE)  (REG=(REG &(~(1<<BITNO))) |(VALUE<<BITNO)  )


#endif /* COTS_LIB_MATH_H_ */
