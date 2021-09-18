/*
 * STK_int.h
 *
 *  Created on: Sep 12, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_STK_STK_INT_H_
#define COTS_MCAL_STK_STK_INT_H_

void  STK_voidInit(void);
void STK_voidSetBusyWaitDelay(u32 NumberOfTicks);
u8 STK_u8SetIntervaleSingle (u32 NumberOfTickes,void (*copy_ptrfNotifcation)(void));
u8 STK_u8SetIntervalePeriodic (u32 NumberOfTickes,void (*copy_ptrfNotifcation)(void));
void STK_voidStopTimer (void);
u8 STK_u8GEtElapsedTime (u32* copy_pu32ElapsidTime);
u8 STK_u8GEtRemaningTime (u32* copy_pu32RemaningTime);
#endif /* COTS_MCAL_STK_STK_INT_H_ */
