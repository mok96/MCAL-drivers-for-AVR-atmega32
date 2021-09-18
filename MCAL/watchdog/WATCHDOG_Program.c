/*
 * EXTI_Program.c
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#include"STD_TB.h"
#include"MATH.h"

#include"WATCHDOG_Private.h"
#include"WATCHDOG_Interface.h"
#include"WATCHDOG_Register.h"
#include"WATCHDOG_Confg.h"

void WATCHDOG_voidWATCHDOGInit(void)
{
#if WATCHDOG_u8_STATE== WATCHDOG_ENABLED
	/*ENABLE WATCHDOG*/
	SET_BIT(WDTCR,WDTCR_WDE);
   /*Choose Prescaler */
	WDTCR&=PRESCALER_MASK;
	WDTCR&=WATCHDOG_u8_PRESCALER;

#endif

}


void WATCHDOG_voidWatchdogDisable(void)
{
	WDTCR = (1<<WDTCR_WDTOE) | (1<<WDTCR_WDE);
	WDTCR = 0x00;


}

