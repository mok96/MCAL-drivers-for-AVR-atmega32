/*****************************************/
/** Author: Gerges
* Date: 30/8/2021
* Version 1
* **************Description****************
*      Source Code
*
* Prerequisites : STD_Types.h , BIT_Math.h , Error_State.h , EXTI_reg.h , EXTI_int.h
* ***********************************************************************************/

#include "STD_TB.h"
#include "Math.h"


#include "USART_private.h"
#include "USART_reg.h"
#include "USART_int.h"
#include "USART_config.h"

void USART_voidInit(void)
{
	/* Select 8 Bit Data by 3 Bits */
	CLR_BIT(UCSRB,UCSRB_UCSZ2);
	/* To use UCSRC 0b1...... */
	UCSRC=0b10000110;
	
	/* Baud Rate ---> 9600 bps */
	UBRRL=51; // 8MHZ
	
	/* Receiver Enable */
	SET_BIT(UCSRB,UCSRB_RXEN);
	
	/* Transmitter Enable */
	SET_BIT(UCSRB,UCSRB_TXEN);
}

void USART_voidSendData(u8 Copy_u8Data)
{
	/* Wait Until Data Register is Empty */
	while(GET_BIT(UCSRA,UCSRA_UDRE)==0);
	
	/* Write The Data To The UDR Register To Transmit */
	UDR=Copy_u8Data;
}

u8 USART_voidReceiveData(void)
{
	/* Wait Until Receive is Complete */
	while(GET_BIT(UCSRA,UCSRA_RXC)==0);
	
	/* Return The Received Data */
	return UDR;
	
}

void USART_voidSendString(u8 * Copy_Pu8Data)
{
	u8 Local_u8LoopCounter;
	
	for(Local_u8LoopCounter=0;Copy_Pu8Data[Local_u8LoopCounter]!='\0';Local_u8LoopCounter++)
	{
		USART_voidSendData(Copy_Pu8Data[Local_u8LoopCounter]);
	}
}
