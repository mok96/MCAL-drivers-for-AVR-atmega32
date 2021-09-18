/*
 * GIE_Register.h
 *
 *  Created on: Aug 16, 2021
 *      Author: gerges
 */

#ifndef GIE_REGISTER_H_
#define GIE_REGISTER_H_

/*Status Register*/
#define SREG  *((volatile u8*)0x5f)

/*Global Interrupt Enable Bit*/

#define SREG_I 7

#endif /* GIE_REGISTER_H_ */
