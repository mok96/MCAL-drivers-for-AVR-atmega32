/*
 * EXTI_Program.c
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#include"STD_TB.h"
#include"MATH.h"

#include"ADC_Private.h"
#include"ADC_Interface.h"
#include"ADC_Register.h"
#include"ADC_Config.h"
#include "ERROR_STATE.h"



static void (*ADC_CallBack)(void)=NULL_POINTER;

void ADC_voidADCPollingInit(void)
{
#if ADC_REFRANCE_VOLTAGE==VREF_AREF
	CLR_BIT (ADMUX,REFS1);
	CLR_BIT (ADMUX,REFS0);
#elif ADC_REFRANCE_VOLTAGE==VREF_AVCC
	CLR_BIT (ADMUX,REFS1);
	SET_BIT (ADMUX,REFS0);
#elif ADC_REFRANCE_VOLTAGE==VREF_INTERNAL
	SET_BIT (ADMUX,REFS1);
	SET_BIT (ADMUX,REFS0);
#endif



#if ADC_RESLUTION ==EIGHT_BIT
	SET_BIT (ADMUX,ADLAR);
#elif ADC_RESLUTION ==TEN_BIT
	CLR_BIT (ADMUX,ADLAR);
#endif
	/*set Prescaler*/
	ADCSRA&=PRESCALER_MASK;
	ADCSRA|=ADC_PRESCALER;
	/*Enable ADC*/
	SET_BIT (ADCSRA,ADEN);
}

void ADC_voidADCInterruptInit(void)
{
#if ADC_REFRANCE_VOLTAGE==VREF_AREF
	CLR_BIT (ADMUX,REFS1);
	CLR_BIT (ADMUX,REFS0);
#elif ADC_REFRANCE_VOLTAGE==VREF_AVCC
	CLR_BIT (ADMUX,REFS1);
	SET_BIT (ADMUX,REFS0);
#elif ADC_REFRANCE_VOLTAGE==VREF_INTERNAL
	SET_BIT (ADMUX,REFS1);
	SET_BIT (ADMUX,REFS0);
#endif



#if ADC_RESLUTION ==EIGHT_BIT
	SET_BIT (ADMUX,ADLAR);
#elif ADC_RESLUTION ==TEN_BIT
	CLR_BIT (ADMUX,ADLAR);
#endif
	/*set Prescaler*/
	ADCSRA&=PRESCALER_MASK;
	ADCSRA|=ADC_PRESCALER;
	/*Enable ADC*/
	SET_BIT (ADCSRA,ADEN);
	/*Enable INTERRUPT*/
	SET_BIT (ADCSRA,ADIE);

}
u8 ADC_voidStartSingleConversionByPolling (u8 copy_u8channel,u16 *copy_Ptru16Result)
{
	SET_BIT(ADCSRA,ADIF);
	u8 Loc_u8state=ES_NOT_OK;
	if ((copy_u8channel>7)&&(copy_u8channel<0)&&copy_Ptru16Result==0)
	{
		return Loc_u8state;
	}
	else
	{
     ADMUX&=PREMASK_CHANNEL;
     ADMUX|=copy_u8channel;
	}
	SET_BIT(ADCSRA,ADSC);
	while (GET_BIT(ADCSRA,ADIF)==0);
#if ADC_RESLUTION ==EIGHT_BIT
	*copy_Ptru16Result=ADCH;
#elif ADC_RESLUTION ==TEN_BIT
	*copy_Ptru16Result=ADC;
#endif

	return  Loc_u8state=ES_OK;
}


u8 ADC_voidStartSingleConversionByInterrupt (u8 copy_u8channel,void (*PtrToFun)(void))
{
	u8 Loc_u8state=ES_NOT_OK;
		if ((copy_u8channel>7)&&(copy_u8channel<0))
		{
			return Loc_u8state;
		}
		else
		{
	     ADMUX&=PREMASK_CHANNEL;
	     ADMUX|=copy_u8channel;
		}
		SET_BIT(ADCSRA,ADSC);
		ADC_CallBack=PtrToFun;
		return  Loc_u8state=ES_OK;
}
void __vector_16(void) __attribute__((signal));
void __vector_16(void)
{

   ADC_CallBack();

}
