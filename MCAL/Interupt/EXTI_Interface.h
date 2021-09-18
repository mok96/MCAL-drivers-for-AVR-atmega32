/*
 * EXTI_Interface.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_INTERFACE_H_
#define COTS_MCAL_INTERUPT_EXTI_INTERFACE_H_

#define EXTI_U8_INT0   0
#define EXTI_U8_INT1   1
#define EXTI_U8_INT2   2

#define EXTI_u8_RISING_EDGE   1
#define EXTI_u8_FALLING_EDGE  2
#define EXTI_u8_ON_CHANGE     3
#define EXTI_u8_LOW_LEVEL     4


void EXTI_voidINT0Init(void);
void EXTI_voidINT1Init(void);
void EXTI_voidINT2Init(void);

u8 EXTI_u8SetSenseControle(u8 Copy_u8IntNumber,u8 Copy_u8Sense);

u8 EXTI_u8EnableInt(u8 Copy_IntNum);
u8 EXTI_u8DisableInt(u8 Copy_IntNum);

#endif /* COTS_MCAL_INTERUPT_EXTI_INTERFACE_H_ */
