/*
 * RCC_prog.c
 *
 *  Created on: Sep 9, 2021
 *      Author: ahmed mokhtar
 */
#include"STD_TB.h"
#include"MATH.h"

#include"RCC_privet.h"
#include"RCC_interface.h"
#include"STM32f108c8.h"
#include"RCC_config.h"

;
void RCC_IniteSystemClk (void)
{
#if   RCC_u8_SYSCLK==RCC_u8_HSI

	RCC->CR  =0x00000081;
	RCC->CFGR=0x00000000;
	while (GET_BIT(RCC->CFGR,2)==0&&GET_BIT(RCC->CFGR,3)==0);

#elif RCC_u8_SYSCLK==RCC_u8_HSE
	RCC->CR  =0x00010080;
	RCC->CFGR=0x00000001;
	while (GET_BIT(RCC->CFGR,2)==1 && GET_BIT(RCC->CFGR,3)==0);
#elif RCC_u8_SYSCLK==RCC_u8_PLL
	RCC->CR  =0x01000080;
	RCC->CFGR=0x00000001;
	while (GET_BIT(RCC->CFGR,2)==0 && GET_BIT(RCC->CFGR,3)==1);
#else
#error "wrong choice"
#endif

}
u8 RCC_u8EnablePeripheralclk(u8 Copy_u8BusID, u8 Copy_u8PeripheralID)
{


}
u8 RCC_u8DisablePeripheralclk(u8 Copy_u8BusID, u8 Copy_u8PeripheralID)
{

}
