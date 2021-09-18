/*
 * GPIO_prog.c
 *
 *  Created on: Sep 11, 2021
 *      Author: ahmed mokhtar
 */

/* Lib Layer */
#include "STD_TB.h"
#include "MATH.h"
#include "STM32f108c8.h"

/* MCAL */
#include "GPIO_int.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

/*create array of pointer to struct*/

static GPIO_RegDef_t*GPIO_Array[3]={GPIOA,GPIOB,GPIOC};

u8 GPIO_u8InitPinMode( GPIO_PIN_CONFIG_t* Copy_PstrPinConfig)
{
u8 Local_u8ErrorState=STD_TB_OK;
u8 Local_u8CopyToInput=Copy_PstrPinConfig->Mode;
/*Check for wild pointer*/
if(Copy_PstrPinConfig!=NULL  && Copy_PstrPinConfig->PortId <= GPIO_U8_GPIOC && Copy_PstrPinConfig->PinId<=GPIO_U8_PIN15 )
{
/*check if the mode is input pull down=>odr bit=0*/
	if(Copy_PstrPinConfig->Mode==GBIO_u8_INPUT_PULL_DOWN )
	{
		GPIO_Array[Copy_PstrPinConfig->PortId]->BRR=(1<<Copy_PstrPinConfig->PinId);

	}
	/*check if the mode is input pull down=>odr bit=1*/
	else if (Copy_PstrPinConfig->Mode==GBIO_u8_INPUT_PULL_UP)
	{
		GPIO_Array[Copy_PstrPinConfig->PortId]->BSRR=(1<<Copy_PstrPinConfig->PinId);
		/*modifi pin mode*/
		CLR_BIT(Local_u8CopyToInput,4);

	}
	else{}
	if (Copy_PstrPinConfig->PinId<=7)
	{
		/*CRL*/
		/*clear the needed bits*/
		GPIO_Array[Copy_PstrPinConfig->PortId]->CRL=GPIO_Array[Copy_PstrPinConfig->PortId]->CRL & (~(0b1111<<Copy_PstrPinConfig->PinId*4));
		/*set the required bits*/
		GPIO_Array[Copy_PstrPinConfig->PortId]->CRL=GPIO_Array[Copy_PstrPinConfig->PortId]->CRL | ((Local_u8CopyToInput<<Copy_PstrPinConfig->PinId*4));
	}
	else if (Copy_PstrPinConfig->PinId>=8  && Copy_PstrPinConfig->PinId<=15)
	{
		/*CRH*/
		/*clear the needed bits*/
		GPIO_Array[Copy_PstrPinConfig->PortId]->CRL=GPIO_Array[Copy_PstrPinConfig->PortId]->CRL & (~(0b1111<<(Copy_PstrPinConfig->PinId-8)*4));
		/*set the required bits*/
		GPIO_Array[Copy_PstrPinConfig->PortId]->CRL=GPIO_Array[Copy_PstrPinConfig->PortId]->CRL | ((Local_u8CopyToInput<<(Copy_PstrPinConfig->PinId-8)*4));

	}
}
else
{
	Local_u8ErrorState=STD_TB_NOK;
}
return Local_u8ErrorState;
}


u8 GPIO_u8SetPinValue (GPIO_PIN_CONFIG_t* Copy_PstrPinConfig,u8 Copy_u8PinValue)
{
	u8 Local_u8ErrorState=STD_TB_OK;
	if(Copy_PstrPinConfig!=NULL  && Copy_PstrPinConfig->PortId <= GPIO_U8_GPIOC && Copy_PstrPinConfig->PinId<=GPIO_U8_PIN15 && (Copy_u8PinValue==GPIO_u8_HIGH ||Copy_u8PinValue==GPIO_u8_LOW) )
	{
		if (Copy_u8PinValue==Copy_u8PinValue==GPIO_u8_HIGH)
		{
			GPIO_Array[Copy_PstrPinConfig->PortId]->BSRR=(1<<Copy_PstrPinConfig->PinId);
		}
		else
		{
			GPIO_Array[Copy_PstrPinConfig->PortId]->BRR=(1<<Copy_PstrPinConfig->PinId);
		}

	}
	else
	{
		Local_u8ErrorState=STD_TB_NOK;
	}
	return Local_u8ErrorState;

}
u8 GPIO_u8GetPinValue (GPIO_PIN_CONFIG_t* Copy_PstrPinConfig,u8* Copy_u8ReturnedPinValue)
{

}
u8 GPIO_u8TogPinValue(GPIO_PIN_CONFIG_t * Copy_pstrPinConfig)
{

}
u8 GPIO_u8LockPin (GPIO_PIN_CONFIG_t * Copy_pstrPinConfig)
{

}
