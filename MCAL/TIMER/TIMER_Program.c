/*
 * EXTI_Program.c
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#include"STD_TB.h"
#include"MATH.h"

#include"TIMER_Private.h"
#include"TIMER_Interface.h"
#include"TIMER_Register.h"
#include"TIMER_Config.h"

void TIMER_voidTIMER0Init(void)
{
#if TIMER0_u8_MOD==TIMER0_OVERFLOW_MOD
	/*Choos Normal Mode*/
	CLR_BIT(TCCR0,TCCR0_WGM00);
	CLR_BIT(TCCR0,TCCR0_WGM01);
   /*Choose Prescaler */
	TCCR0&=PRESCALER_MASK;
	TCCR0|=TIMER0_u8_PRESCALER;

    /*OVERFLOW interupt enable*/
	SET_BIT(TIMSK,TIMSK_TOIE0);

	/*Preload setting*/
	TCNT0=TIMER0_u8_PRELOAD;

#elif TIMER0_u8_MOD==TIMER0_CTC_MOD
	/*Choos CTC Mode*/
		CLR_BIT(TCCR0,TCCR0_WGM00);
		SET_BIT(TCCR0,TCCR0_WGM01);
	/*Choose Prescaler */
		TCCR0&=PRESCALER_MASK;
		TCCR0|=TIMER0_u8_PRESCALER;
		/*CTC interupt enable*/
		SET_BIT(TIMSK,TIMSK_OCIE0);
		/*CTC Register setting*/
		OCR0=TIMER0_u8_CTC;

#elif TIMER0_u8_MOD==TIMER0_PWM_FAST
		/*Choos PWM FAST Mode*/
		SET_BIT(TCCR0,TCCR0_WGM01);
		SET_BIT(TCCR0,TCCR0_WGM00);
		/*Choose Prescaler */
		TCCR0&=PRESCALER_MASK;
		TCCR0|=TIMER0_u8_PRESCALER;
		/*CTC Register setting*/
		OCR0=TIMER0_u8_CTC;

#elif TIMER0_u8_MOD==TIMER0_PWM_PHASE_CORRECT
		/*Choos PWM FAST Mode*/
		CLR_BIT(TCCR0,TCCR0_WGM01);
		SET_BIT(TCCR0,TCCR0_WGM00);
		/*Choose Prescaler */
		TCCR0&=PRESCALER_MASK;
		TCCR0|=TIMER0_u8_PRESCALER;
		/*CTC Register setting*/
		OCR0=TIMER0_u8_CTC;

#endif

#if PWM_INVERTING_MODE==PWM_INVERTING
		SET_BIT(TCCR0,TCCR0_COM01);
		SET_BIT(TCCR0,TCCR0_COM00);
#else if PWM_INVERTING_MODE==PWM_NON_INVERTING
		SET_BIT(TCCR0,TCCR0_COM01);
		CLR_BIT(TCCR0,TCCR0_COM00);
#endif
}


void TIMER_voidSetPreloadValue(u8 Copy_u8PreLoadValue)
{
	TCNT0=Copy_u8PreLoadValue;
}

void TIMER_voidSetCTCValue(u8 Copy_u8TCTValue)
{
	OCR0=Copy_u8TCTValue;
}
