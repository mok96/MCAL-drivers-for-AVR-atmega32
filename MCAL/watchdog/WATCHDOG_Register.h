/*
 * EXTI_Register.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_REGISTER_H_
#define COTS_MCAL_INTERUPT_EXTI_REGISTER_H_

/*MODE Register */
#define WDTCR   (*(volatile u8*)0x41)
#define WDTCR_WDTOE  4
#define WDTCR_WDE    3
#define WDTCR_WDP2   2
#define WDTCR_WDP1   1
#define WDTCR_WDP0   0


#endif /* COTS_MCAL_INTERUPT_EXTI_REGISTER_H_ */
