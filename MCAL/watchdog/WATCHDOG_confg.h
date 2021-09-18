/*
 * EXTI_Config.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_CONFIG_H_
#define COTS_MCAL_INTERUPT_EXTI_CONFIG_H_

/* Choose your prescaler division factor
 * OPTION:
 * 1-TIME_TO_RESET_16MS
 * 1-TIME_TO_RESET_32MS
 * 1-TIME_TO_RESET_65MS
 * 1-TIME_TO_RESET_130MS
 * 1-TIME_TO_RESET_260MS
 * 1-TIME_TO_RESET_520MS
 * 1-TIME_TO_RESET_1S
 * 1-TIME_TO_RESET_2S
 */
#define WATCHDOG_u8_PRESCALER   TIME_TO_RESET_2S
/*  Choose Your WATCHDOG state
 *  OPTION:
 *  1-WATCHDOG_ENABLED
 *  2-WATCHDOG_DISABLED
 *  */
#define WATCHDOG_u8_STATE  WATCHDOG_ENABLED





#endif /* COTS_MCAL_INTERUPT_EXTI_CONFIG_H_ */
