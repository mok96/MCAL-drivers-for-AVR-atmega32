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
 * 1-DIVIDE_BY_1
 * 2-DIVIDE_BY_8
 * 3-DIVIDE_BY_64
 * 4-DIVIDE_BY_256
 * 5-DIVIDE_BY_1024
 */
#define TIMER0_u8_PRESCALER   DIVIDE_BY_8
/*  Choose Your Timer0 Mood
 *  OPTION:
 *  1-TIMER0_OVERFLOW_MOD
 *  2-TIMER0_CTC_MOD
 *  3-TIMER0_PWM_FAST
 *  4-TIMER0_PWM_PHASE_CORRECT
 *  */
#define TIMER0_u8_MOD  TIMER0_PWM_FAST


/*Choose Your Timer0 PRELOAD*/
#define TIMER0_u8_PRELOAD  0

/*Choose Your Timer0 CTC*/
#define TIMER0_u8_CTC 6

/*TIMER0 INTERRUPT OVERFLOW_INTERRUPT_ENABLE or CTC_INTERRUPT_ENABLE */
#define TIMER0_u8_INTERRUPT   CTC_INTERRUPT_ENABLE


/*Choose Your PWM MODE
 * 1-PWM_INVERTING
 * 1-PWM_NON_INVERTING
 */
#define PWM_INVERTING_MODE  PWM_NON_INVERTING


#endif /* COTS_MCAL_INTERUPT_EXTI_CONFIG_H_ */
