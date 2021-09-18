/*
 * STM32f108c8.h
 *
 *  Created on: Sep 9, 2021
 *      Author: ahmed mokhtar
 */

#ifndef COTS_MCAL_RCC_STM32F108C8_H_
#define COTS_MCAL_RCC_STM32F108C8_H_


#define RCC_u32_BASE_ADDRESS    0X40021000

typedef struct
{
volatile u32 CR;
volatile u32 CFGR;
volatile u32 CIR;
volatile u32 APB2RSTR;
volatile u32 APB1RSTR;
volatile u32 AHBENR;
volatile u32 APB2ENR;
volatile u32 APB1ENR;
volatile u32 BDCR;
} RCC_RegDef_t;
#define RCC  ((RCC_RegDef_t*)RCC_u32_BASE_ADDRESS)

#define GPIOA_U32_BASE_ADDRESS   0x40010800
#define GPIOB_U32_BASE_ADDRESS   0x40010c00
#define GPIOC_U32_BASE_ADDRESS   0x40011000

typedef struct {

	volatile u32 CRL;
	volatile u32 CRH;
	volatile u32 IDR;
	volatile u32 ODR;
	volatile u32 BSRR;
	volatile u32 BRR;
	volatile u32 LCKR;
}GPIO_RegDef_t;

#define GPIOA   ((GPIO_RegDef_t*)GPIOA_U32_BASE_ADDRESS)
#define GPIOB   ((GPIO_RegDef_t*)GPIOB_U32_BASE_ADDRESS)
#define GPIOC   ((GPIO_RegDef_t*)GPIOC_U32_BASE_ADDRESS)


typedef struct
{
	volatile u32 CTRL:
	volatile u32 LOAD;
	volatile u32 VAL;
	volatile u32 CALTB;

}STK_REG_T;

#endif /* COTS_MCAL_RCC_STM32F108C8_H_ */
