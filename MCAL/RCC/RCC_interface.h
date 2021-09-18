/*
 * RCC_interface.h
 *
 *  Created on: Sep 9, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_RCC_RCC_INTERFACE_H_
#define COTS_MCAL_RCC_RCC_INTERFACE_H_

void RCC_IniteSystemClk (void);
u8 RCC_u8EnablePeripheralclk(u8 Copy_u8BusID, u8 Copy_u8PeripheralID);
u8 RCC_u8DisablePeripheralclk(u8 Copy_u8BusID, u8 Copy_u8PeripheralID);

#endif /* COTS_MCAL_RCC_RCC_INTERFACE_H_ */
