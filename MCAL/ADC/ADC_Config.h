/*
 * EXTI_Config.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_CONFIG_H_
#define COTS_MCAL_INTERUPT_EXTI_CONFIG_H_

/*otions of refrence voltage
 * 1-VREF_AREF
 * 2-VREF_AVCC
 * 3-VREF_INTERNAL */
#define ADC_REFRANCE_VOLTAGE    VREF_AVCC

/*options of prescaler
 * 1-ADC_PRESCALER_64
 * 2-ADC_PRESCALER_128*/
#define ADC_PRESCALER  ADC_PRESCALER_64


/*analoge channel mode
 * 1-ADC_SINGLE_ENDED_INPUT
 * 2-ADC_DEFFERENTIAL_INPUT*/
#define ANALOGE_CHANNEL_MODE  ADC_SINGLE_ENDED_INPUT

/*options of ADC_SIGNALE_ENDED_INPUT channel
 * 1-ADC_CHANNEL0
 * 2-ADC_CHANNEL1
 * 3-ADC_CHANNEL2
 * 4-ADC_CHANNEL3
 * 5-ADC_CHANNEL4
 * 6-ADC_CHANNEL5
 * 7-ADC_CHANNEL6
 * 8-ADC_CHANNEL7*/
#define ADC_SIGNALE_ENDED_INPUT_CHANNEL   ADC_CHANNEL0

/*options ADC reslution
 * 1-EIGHT_BIT
 * 2-TEN_BIT
 */
#define ADC_RESLUTION   EIGHT_BIT

#endif /* COTS_MCAL_INTERUPT_EXTI_CONFIG_H_ */
