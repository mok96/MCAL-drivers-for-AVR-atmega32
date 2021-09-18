/*
 * EXTI_Program.c
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#include"STD_TB.h"
#include"MATH.h"

#include"EXTI_Private.h"
#include"EXTI_Interface.h"
#include"EXTI_Register.h"
#include"EXTI_Config.h"




void EXTI_voidINT0Init(void)
{
	/*1- Set the sense control configuration*/
#if EXIT_U8_INT0_SENSE ==EXTI_u8_RISING_EDGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);

#elif EXIT_U8_INT0_SENSE ==EXTI_u8_FALLING_EDGE
	CLR_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
#elif EXIT_U8_INT0_SENSE ==EXTI_u8_ON_CHANGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	CLR_BIT(MCUCR,MCUCR_ISC01);

#elif EXIT_U8_INT0_SENSE ==EXTI_u8_LOW_LEVEL
	CLR_BIT(MCUCR,MCUCR_ISC00);
	CLR_BIT(MCUCR,MCUCR_ISC01);
#else
		#error"Wrong EXTI_U8_INT0_SENSE Configuration option"
#endif
	/*2- Set The Initial State Configuration*/

#if EXIT_U8_INT0_INITIAL_STATE ==ENABLED
	SET_BIT(GICR,GICR_INT0);
#elif EXIT_U8_INT0_INITIAL_STATE ==DISABLED
	CLR_BIT(GICR,GICR_INT0);
#else
		#error"Wrong EXTI_U8_INT0_INITAL_STATE Configuration option"
	#endif
}
void EXTI_voidINT1Init(void)
{
	/*1- Set the sense control configuration*/
	#if EXIT_U8_INT1_SENSE ==EXTI_u8_RISING_EDGE
		SET_BIT(MCUCR,MCUCR_ISC10);
		SET_BIT(MCUCR,MCUCR_ISC11);

	#elif EXIT_U8_INT1_SENSE ==EXTI_u8_FALLING_EDGE
		CLR_BIT(MCUCR,MCUCR_ISC10);
		SET_BIT(MCUCR,MCUCR_ISC11);
	#elif EXIT_U8_INT1_SENSE ==EXTI_u8_ON_CHANGE
		SET_BIT(MCUCR,MCUCR_ISC10);
		CLR_BIT(MCUCR,MCUCR_ISC11);

	#elif EXIT_U8_INT1_SENSE ==EXTI_u8_LOW_LEVEL
		CLR_BIT(MCUCR,MCUCR_ISC10);
		CLR_BIT(MCUCR,MCUCR_ISC11);
	#else
			#error"Wrong EXTI_U8_INT0_SENSE Configuration option"
	#endif
		/*2- Set The Initial State Configuration*/

	#if EXIT_U8_INT1_INITIAL_STATE ==ENABLED
		SET_BIT(GICR,GICR_INT1);
	#elif EXIT_U8_INT1_INITIAL_STATE ==DISABLED
		CLR_BIT(GICR,GICR_INT1);
	#else
			#error"Wrong EXTI_U8_INT0_INITAL_STATE Configuration option"
		#endif


}
void EXTI_voidINT2Init(void)
{/*1- Set the sense control configuration*/
#if EXIT_U8_INT2_SENSE ==EXTI_u8_RISING_EDGE
	SET_BIT(MCUCSR,MCUCSR_ISC2);


#elif EXIT_U8_INT2_SENSE ==EXTI_u8_FALLING_EDGE
	CLR_BIT(MCUCR,MCUCSR_ISC2);


#else
		#error"Wrong EXTI_U8_INT0_SENSE Configuration option"
#endif
	/*2- Set The Initial State Configuration*/

#if EXIT_U8_INT2_INITIAL_STATE ==ENABLED
	SET_BIT(GICR,GICR_INT2);
#elif EXIT_U8_INT2_INITIAL_STATE ==DISABLED
	CLR_BIT(GICR,GICR_INT2);
#else
		#error"Wrong EXTI_U8_INT0_INITAL_STATE Configuration option"
	#endif

}

u8 EXTI_u8SetSenseControle(u8 Copy_u8IntNumber,u8 Copy_u8Sense)
{
	switch(Copy_u8IntNumber)
		{
			/*Set INT0 Required Sense Control*/
			case EXTI_U8_INT0:
				if(Copy_u8Sense==EXTI_u8_RISING_EDGE)
				{
					SET_BIT(MCUCR,MCUCR_ISC00);
					SET_BIT(MCUCR,MCUCR_ISC01);
				}
				else if(Copy_u8Sense==EXTI_u8_FALLING_EDGE)
				{
					CLR_BIT(MCUCR,MCUCR_ISC00);
					SET_BIT(MCUCR,MCUCR_ISC01);
				}
				else if(Copy_u8Sense==EXTI_u8_ON_CHANGE)
				{
					SET_BIT(MCUCR,MCUCR_ISC00);
					CLR_BIT(MCUCR,MCUCR_ISC01);
				}

				else if(Copy_u8Sense==EXTI_u8_LOW_LEVEL)
				{
					CLR_BIT(MCUCR,MCUCR_ISC00);
					CLR_BIT(MCUCR,MCUCR_ISC01);
				}

				break;
			/*Set INT1 Required Sense Control*/
			case EXTI_U8_INT1:
				if(Copy_u8Sense==EXTI_u8_RISING_EDGE)
				{
					SET_BIT(MCUCR,MCUCR_ISC10);
					SET_BIT(MCUCR,MCUCR_ISC11);
				}
				else if(Copy_u8Sense==EXTI_u8_FALLING_EDGE)
				{
					CLR_BIT(MCUCR,MCUCR_ISC10);
					SET_BIT(MCUCR,MCUCR_ISC11);
				}
				else if(Copy_u8Sense==EXTI_u8_ON_CHANGE)
				{
					SET_BIT(MCUCR,MCUCR_ISC10);
					CLR_BIT(MCUCR,MCUCR_ISC11);
				}

				else if(Copy_u8Sense==EXTI_u8_LOW_LEVEL)
				{
					CLR_BIT(MCUCR,MCUCR_ISC10);
					CLR_BIT(MCUCR,MCUCR_ISC11);
				}

				break;

			case EXTI_U8_INT2:
				if(Copy_u8Sense==EXTI_u8_RISING_EDGE)
				{
					SET_BIT(MCUCSR,MCUCSR_ISC2);
				}
				else if(Copy_u8Sense==EXTI_u8_FALLING_EDGE)
				{
					CLR_BIT(MCUCSR,MCUCSR_ISC2);
				}
				break;


		}

}

u8 EXTI_u8EnableInt(u8 Copy_u8IntNum)
{

		switch(Copy_u8IntNum)
		{
		case EXTI_U8_INT0:
			SET_BIT(GICR,GICR_INT0);
			break;
		case EXTI_U8_INT1:
			SET_BIT(GICR,GICR_INT1);
			break;
		case EXTI_U8_INT2:
			SET_BIT(GICR,GICR_INT2);
			break;

		}
}
u8 EXTI_u8DisableInt(u8 Copy_u8IntNum)
{
	switch(Copy_u8IntNum)
		{
		case EXTI_U8_INT0:
			CLR_BIT(GICR,GICR_INT0);
			break;
		case EXTI_U8_INT1:
			CLR_BIT(GICR,GICR_INT1);
			break;
		case EXTI_U8_INT2:
			CLR_BIT(GICR,GICR_INT2);
			break;

		}
}
