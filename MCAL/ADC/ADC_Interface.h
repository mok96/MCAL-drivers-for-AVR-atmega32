/*
 * EXTI_Interface.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_INTERFACE_H_
#define COTS_MCAL_INTERUPT_EXTI_INTERFACE_H_



void ADC_voidADCPollingInit(void);
void ADC_voidADCInterruptInit(void);
u8 ADC_voidStartSingleConversionByPolling (u8 copy_u8channel,u16 *copy_Ptru16Result);
u8 ADC_voidStartSingleConversionByInterrupt (u8 copy_u8channel,void (*PtrToFun)(void));



#endif /* COTS_MCAL_INTERUPT_EXTI_INTERFACE_H_ */
