/*
 * STK_prog.c
 *
 *  Created on: Sep 12, 2021
 *      Author: ahmed mokhtar
 */
#include "STD_TB.h"
#include  "MATH.h"
#include  "STK_int.h"
#include  "STK_private.h"
#include  "STK_config.h"

void  STK_voidInit(void)
{
#if STK_U8_CLK_SRC == STK_U8_AHB
	STK->
#elif STK_U8_CLK_SRC == STK_U8_AHB_8
#else
#error"Wrong Choice"
#endif
}
void STK_voidSetBusyWaitDelay(u32 NumberOfTicks);
u8 STK_u8SetIntervaleSingle (u32 NumberOfTickes,void (*copy_ptrfNotifcation)(void));
u8 STK_u8SetIntervalePeriodic (u32 NumberOfTickes,void (*copy_ptrfNotifcation)(void));
void STK_voidStopTimer (void);
u8 STK_u8GEtElapsedTime (u32* copy_pu32ElapsidTime);
u8 STK_u8GEtRemaningTime (u32* copy_pu32RemaningTime);

