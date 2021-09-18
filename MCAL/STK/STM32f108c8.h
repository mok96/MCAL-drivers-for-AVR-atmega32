/*
 * STM32f108c8.h
 *
 *  Created on: Sep 9, 2021
 *      Author: ahmed mokhtar
 */

#ifndef RCC_STM32F108C8_H_
#define RCC_STM32F108C8_H_


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



#define AFIO_EXTI_U32_BASE        0x40010008
typedef struct
{
	u32 EXTICR1;
	u32 EXTICR2;
	u32 EXTICR3;
	u32 EXTICR4;


}AFIO_RegDef_t;

#define AFIO_EXTI ((volatile AFIO_RegDef_t*)AFIO_EXTI_U32_BASE)

#define EXTI_u32_BASE_ADDRESS     0x40010400

typedef struct
{
	u32 IMR;
	u32 EMR;
	u32 RTSR;
	u32 FTSR;
	u32 SWIER;
	u32 PR;

}EXTI_RegDef_t;

#define EXTI    ((volatile EXTI_RegDef_t*)EXTI_u32_BASE_ADDRESS)

#endif /* COTS_MCAL_RCC_STM32F108C8_H_ */
