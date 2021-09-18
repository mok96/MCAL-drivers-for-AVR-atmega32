/*
 * GPIO_int.h
 *
 *  Created on: Sep 11, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_GPIO_GPIO_INT_H_
#define COTS_MCAL_GPIO_GPIO_INT_H_

#define GPIO_U8_GPIOA  0
#define GPIO_U8_GPIOB  1
#define GPIO_U8_GPIOC  2

#define GPIO_U8_PIN0  0
#define GPIO_U8_PIN1  1
#define GPIO_U8_PIN2  2
#define GPIO_U8_PIN3  3
#define GPIO_U8_PIN4  4
#define GPIO_U8_PIN5  5
#define GPIO_U8_PIN6  6
#define GPIO_U8_PIN7  7
#define GPIO_U8_PIN8  8
#define GPIO_U8_PIN9  9
#define GPIO_U8_PIN10 10
#define GPIO_U8_PIN11 11
#define GPIO_U8_PIN12 12
#define GPIO_U8_PIN13 13
#define GPIO_U8_PIN14 14
#define GPIO_U8_PIN15 15
/*input modes*/
#define GBIO_U8_INPUT_ANALOGE            0b0000
#define GBIO_U8_INPUT_FLOATING           0b0100
#define GBIO_u8_INPUT_PULL_DOWN          0b1000
#define GBIO_u8_INPUT_PULL_UP            0b11000
/*output modes*/

#define GBIO_U8_OUTPUT_GP_PP_10MHZ    0b0001
#define GBIO_U8_OUTPUT_GP_OD_10MHZ    0b0101
#define GBIO_U8_OUTPUT_AL_PP_10MHZ    0b1001
#define GBIO_U8_OUTPUT_AL_OD_10MHZ    0b1101



#define GBIO_U8_OUTPUT_GP_PP_5MHZ    0b0011
#define GBIO_U8_OUTPUT_GP_OD_5MHZ    0b0111
#define GBIO_U8_OUTPUT_AL_PP_5MHZ    0b1011
#define GBIO_U8_OUTPUT_AL_OD_5MHZ    0b1111


#define GPIO_u8_HIGH                1
#define GPIO_u8_LOW                 0

typedef struct
{
	u8 PortId;
	u8 PinId;
	u8 Mode;
}GPIO_PIN_CONFIG_t;


u8 GPIO_u8InitPinMode(GPIO_PIN_CONFIG_t* Copy_PstrPinConfig);
u8 GPIO_u8SetPinValue (GPIO_PIN_CONFIG_t* Copy_PstrPinConfig,u8 Copy_u8PinValue);
u8 GPIO_u8GetPinValue (GPIO_PIN_CONFIG_t* Copy_PstrPinConfig,u8* Copy_u8ReturnedPinValue);
u8 GPIO_u8TogPinValue(GPIO_PIN_CONFIG_t * Copy_pstrPinConfig);
u8 GPIO_u8LockPin (GPIO_PIN_CONFIG_t * Copy_pstrPinConfig);

#endif /* COTS_MCAL_GPIO_GPIO_INT_H_ */
