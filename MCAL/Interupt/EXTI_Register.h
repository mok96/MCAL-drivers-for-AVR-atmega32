/*
 * EXTI_Register.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_REGISTER_H_
#define COTS_MCAL_INTERUPT_EXTI_REGISTER_H_

/*General Interrupt Control Register*/
#define GICR  (*(volatile u8*)0x5B)


#define GICR_INT0  6
#define GICR_INT1  7
#define GICR_INT2  8

/*MCU Control Register*/
#define MCUCR  (*(volatile u8*)0x55)

/*INT0_Sense control*/
#define MCUCR_ISC00  0
#define MCUCR_ISC01  1

/*INT1_Sense control*/
#define MCUCR_ISC10  2
#define MCUCR_ISC11  3


#define MCUCSR  (*(volatile u8*)0x54)

#define MCUCSR_ISC2  6





#endif /* COTS_MCAL_INTERUPT_EXTI_REGISTER_H_ */
