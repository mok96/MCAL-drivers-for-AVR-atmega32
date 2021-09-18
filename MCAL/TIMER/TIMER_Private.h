/*
 * EXTI_Private.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_PRIVATE_H_
#define COTS_MCAL_INTERUPT_EXTI_PRIVATE_H_

#define PRESCALER_MASK 0b11111000
#define DIVIDE_BY_1      1
#define DIVIDE_BY_8      2
#define DIVIDE_BY_62     3
#define DIVIDE_BY_256    4
#define DIVIDE_BY_1024   5


#define EXTRNALE_SRC_FALLING_EDGE   6
#define EXTRNALE_SRC_RAISING_EDGE   7

#define TIMER0_OVERFLOW_MOD    1
#define TIMER0_CTC_MOD         2
#define TIMER0_PWM_FAST        3
#define TIMER0_PWM_PHASE_CORRECT   4


#define  OVERFLOW_INTERRUPT_ENABLE   1
#define CTC_INTERRUPT_ENABLE         2


#define PWM_INVERTING       0
#define PWM_NON_INVERTING   1



#endif /* COTS_MCAL_INTERUPT_EXTI_PRIVATE_H_ */
