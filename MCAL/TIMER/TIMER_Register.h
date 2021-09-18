/*
 * EXTI_Register.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_REGISTER_H_
#define COTS_MCAL_INTERUPT_EXTI_REGISTER_H_

/*MODE Register */
#define TCCR0   (*(volatile u8*)0x53)
#define TCCR0_WGM00   6
#define TCCR0_WGM01   3
#define TCCR0_COM01   5
#define TCCR0_COM00   4


/*Time Register */
#define TCNT0   (*(volatile u8*)0x52)
/*Timer0 Interrupt Register */
#define TIMSK   (*(volatile u8*)0x59)
#define TIMSK_TOIE0   0
#define TIMSK_OCIE0   1

#define OCR0   (*(volatile u8*)0x5c)
#endif /* COTS_MCAL_INTERUPT_EXTI_REGISTER_H_ */
