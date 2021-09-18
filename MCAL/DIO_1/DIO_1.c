/*
 * DIO_1.c
 *
 *  Created on: Aug 10, 2021
 *      Author: ahmed mokhtar
 */
#include "DIO1_int.h"
#include "MATH.h"
#include "STD_TB.h"
u8 DIO_u8SetPinDirection (u8 Copy_PinId,u8 Copy_PinDirection)
{
	if (Copy_PinDirection==DIO_U8_OUTPUT)
	{
	if ((Copy_PinId>=0) && (Copy_PinId<=7))
	{
		SET_BIT(*((volatile  u8*) 0x3A),Copy_PinId);
	}
	else if ((Copy_PinId>=8) && (Copy_PinId<=15))
	{
		Copy_PinId=Copy_PinId-8;
		SET_BIT(*((volatile  u8*) 0x37),Copy_PinId);
	}
	else if ((Copy_PinId>=16) && (Copy_PinId<=23))
	{
		Copy_PinId=Copy_PinId-16;
		SET_BIT(*((volatile  u8*) 0x34),Copy_PinId);
	}
	else if ((Copy_PinId>=24) && (Copy_PinId<=31))
	{
		Copy_PinId=Copy_PinId-24;
		SET_BIT(*((volatile  u8*) 0x31),Copy_PinId);
	}


	}
	else if (Copy_PinDirection==DIO_U8_INPUT)
	{
		if ((Copy_PinId>=0) && (Copy_PinId<=7))
			{
			CLR_BIT(*((volatile  u8*) 0x3A),Copy_PinId);
			}
			else if ((Copy_PinId>=8) && (Copy_PinId<=15))
			{
				Copy_PinId=Copy_PinId-8;
				CLR_BIT(*((volatile  u8*) 0x37),Copy_PinId);
			}
			else if ((Copy_PinId>=16) && (Copy_PinId<=23))
			{
				Copy_PinId=Copy_PinId-16;
				CLR_BIT(*((volatile  u8*) 0x34),Copy_PinId);
			}
			else if ((Copy_PinId>=24) && (Copy_PinId<=31))
			{
				Copy_PinId=Copy_PinId-24;
				CLR_BIT(*((volatile  u8*) 0x31),Copy_PinId);
			}

	}
}




u8 DIO_u8SetPinValue (u8 Copy_PinId,u8 Copy_PinValue)
{
	if (Copy_PinValue==DIO_U8_HIGH)
	{
	if ((Copy_PinId>=0) && (Copy_PinId<=7))
	{
		SET_BIT(*((volatile  u8*) 0x3B),Copy_PinId);
	}
	else if ((Copy_PinId>=8) && (Copy_PinId<=15))
	{
		Copy_PinId=Copy_PinId-8;
		SET_BIT(*((volatile  u8*) 0x38),Copy_PinId);
	}
	else if ((Copy_PinId>=16) && (Copy_PinId<=23))
	{
		Copy_PinId=Copy_PinId-16;
		SET_BIT(*((volatile  u8*) 0x35),Copy_PinId);
	}
	else if ((Copy_PinId>=24) && (Copy_PinId<=31))
	{
		Copy_PinId=Copy_PinId-24;
		SET_BIT(*((volatile  u8*) 0x32),Copy_PinId);
	}


	}
	else if (Copy_PinValue==DIO_U8_LOW )
	{
		if ((Copy_PinId>=0) && (Copy_PinId<=7))
			{
			CLR_BIT(*((volatile  u8*) 0x3B),Copy_PinId);
			}
			else if ((Copy_PinId>=8) && (Copy_PinId<=15))
			{
				Copy_PinId=Copy_PinId-8;
				CLR_BIT(*((volatile  u8*) 0x38),Copy_PinId);
			}
			else if ((Copy_PinId>=16) && (Copy_PinId<=23))
			{
				Copy_PinId=Copy_PinId-16;
				CLR_BIT(*((volatile  u8*) 0x35),Copy_PinId);
			}
			else if ((Copy_PinId>=24) && (Copy_PinId<=31))
			{
				Copy_PinId=Copy_PinId-24;
				CLR_BIT(*((volatile  u8*) 0x32),Copy_PinId);
			}

	}
}



u8 DIO_u8GetPinValue (u8 Copy_PinId)
{
	u8 Local_u8PinValue = 0;

	if ((Copy_PinId>=0) && (Copy_PinId<=7))
	{
		Local_u8PinValue=GET_BIT(*((volatile  u8*) 0x39),Copy_PinId);
	}
	else if ((Copy_PinId>=8) && (Copy_PinId<=15))
	{
		Copy_PinId=Copy_PinId-8;
		Local_u8PinValue=GET_BIT(*((volatile  u8*) 0x36),Copy_PinId);
	}
	else if ((Copy_PinId>=16) && (Copy_PinId<=23))
	{
		Copy_PinId=Copy_PinId-16;
		Local_u8PinValue=GET_BIT(*((volatile  u8*) 0x33),Copy_PinId);
	}
	else if ((Copy_PinId>=24) && (Copy_PinId<=31))
	{
		Copy_PinId=Copy_PinId-24;
		Local_u8PinValue=GET_BIT(*((volatile  u8*) 0x30),Copy_PinId);
	}


	return Local_u8PinValue;



}



u8 DIO_u8ToggelPinValue (u8 Copy_PinId)
{


	if ((Copy_PinId>=0) && (Copy_PinId<=7))
		{
		TOG_BIT(*((volatile  u8*) 0x3B),Copy_PinId);
		}
		else if ((Copy_PinId>=8) && (Copy_PinId<=15))
		{
			Copy_PinId=Copy_PinId-8;
			TOG_BIT(*((volatile  u8*) 0x38),Copy_PinId);
		}
		else if ((Copy_PinId>=16) && (Copy_PinId<=23))
		{
			Copy_PinId=Copy_PinId-16;
			TOG_BIT(*((volatile  u8*) 0x35),Copy_PinId);
		}
		else if ((Copy_PinId>=24) && (Copy_PinId<=31))
		{
			Copy_PinId=Copy_PinId-24;
			TOG_BIT(*((volatile  u8*) 0x32),Copy_PinId);
		}


}
