/*
 * EXTI_Register.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_REGISTER_H_
#define COTS_MCAL_INTERUPT_EXTI_REGISTER_H_

#define ADMUX   (*(volatile u8*)0x27)
#define REFS1   7
#define REFS0   6
#define ADLAR   5
#define ADCSRA  (*(volatile u8*)0x26)
#define ADEN    7
#define ADSC    6
#define ADATE   5
#define ADIF    4
#define ADIE    3
#define ADCH    (*(volatile u8*)0x25)
#define ADC     (*(volatile u8*)0x24)
#define SFIOR   (*(volatile u8*)0x50)

#endif /* COTS_MCAL_INTERUPT_EXTI_REGISTER_H_ */
