/*
 * EXTI_Private.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_PRIVATE_H_
#define COTS_MCAL_INTERUPT_EXTI_PRIVATE_H_

#define ADC_PRESCALER_64   6
#define ADC_PRESCALER_128  7

#define VREF_AREF          0
#define VREF_AVCC          1
#define VREF_INTERNAL      3


#define ADC_CHANNEL0       0
#define ADC_CHANNEL1       1
#define ADC_CHANNEL2       2
#define ADC_CHANNEL3       3
#define ADC_CHANNEL4       4
#define ADC_CHANNEL5       5
#define ADC_CHANNEL6       6
#define ADC_CHANNEL7       7


#define EIGHT_BIT          1
#define TEN_BIT            0

#define PRESCALER_MASK   0b11111000
#define PREMASK_CHANNEL  0b11100000

#define NULL_POINTER   2

#endif /* COTS_MCAL_INTERUPT_EXTI_PRIVATE_H_ */
