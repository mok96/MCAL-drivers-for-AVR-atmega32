/* Gaurd */
#ifndef UASART_PRIVATE_H_
#define UASART_PRIVATE_H_

#define	DIVIDE_BY_1		1
#define	DIVIDE_BY_8		2
#define	DIVIDE_BY_64	3
#define	DIVIDE_BY_256	4
#define	DIVIDE_BY_1024	5

#define EXTERNAL_SRC_FALLING_EDGE	6
#define EXTERNAL_SRC_RISING_EDGE	7

#define TIMER0_OVERFLOW_MODE	1
#define TIMER0_CTC_MODE			2

#define TIMER0_OVERFLOW_INTERRUPT_ENABLE	1
#define TIMER0_CTC_INTERRUPT_ENABLE			2

#define PRESCALLER_MASK 0b11111000

#endif /* UASART_PRIVATE_H_ */
