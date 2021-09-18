/*
 * EXTI_Config.h
 *
 *  Created on: Aug 19, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_INTERUPT_EXTI_CONFIG_H_
#define COTS_MCAL_INTERUPT_EXTI_CONFIG_H_

/*set the required sense control for EXTI INT0 Pin
 Options: 1- EXTI_u8_RISING_EDGE
 	 	  2- EXTI_u8_FALLING_EDGE
 	 	  3- EXTI_u8_ON_CHANGE
 	 	  4- EXTI_u8_LOW_LEVEL
 */

#define EXIT_U8_INT0_SENSE  EXTI_u8_FALLING_EDGE


/*set the required initial state for EXTI INT0 Pin
 Options: 1- ENABLED
 	 	  2- DISABLED
 */
#define EXIT_U8_INT0_INITIAL_STATE ENABLED


/*=======================================================================
 ========================================================================*/

/*set the required sense control for EXTI INT1 Pin
 Options: 1- EXTI_u8_RISING_EDGE
 	 	  2- EXTI_u8_FALLING_EDGE
 	 	  3- EXTI_u8_ON_CHANGE
 	 	  4- EXTI_u8_LOW_LEVEL
 */

#define EXIT_U8_INT1_SENSE  EXTI_u8_FALLING_EDGE


/*set the required initial state for EXTI INT1 Pin
 Options: 1- ENABLED
 	 	  2- DISABLED
 */
#define EXIT_U8_INT1_INITIAL_STATE DISABLED

/*=======================================================================
 ========================================================================*/


/*set the required sense control for EXTI INT2 Pin
 Options: 1- EXTI_u8_RISING_EDGE
 	 	  2- EXTI_u8_FALLING_EDGE
 */

#define EXIT_U8_INT2_SENSE  EXTI_u8_FALLING_EDGE


/*set the required initial state for EXTI INT2 Pin
 Options: 1- ENABLED
 	 	  2- DISABLED
 */
#define EXIT_U8_INT2_INITIAL_STATE DISABLED


#endif /* COTS_MCAL_INTERUPT_EXTI_CONFIG_H_ */
