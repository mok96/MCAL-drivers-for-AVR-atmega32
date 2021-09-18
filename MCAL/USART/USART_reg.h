/* Gaurd */
#ifndef UASART_REGISTER_H_
#define UASART_REGISTER_H_

/* USART I/O Data Register ( UDR )*/
#define UDR 		*((volatile u8*)0x2C)

/* USART Control and Status Register A */
#define UCSRA 		*((volatile u8*)0x2B)

/*  */
#define UCSRA_RXC	7

/*  */
#define	UCSRA_TXC	6

/*  */
#define UCSRA_UDRE	5

/*  */
#define UCSRA_FE	4

/*  */
#define UCSRA_DOR	3

/*  */
#define UCSRA_PE	2

/*  */
#define UCSRA_U2X	1

/*  */
#define UCSRA_MPCM	0

/* USART Control and Status Register B */
#define UCSRB 		*((volatile u8*)0x2A)

/*  */
#define UCSRB_RXCIE		7

/*  */
#define UCSRB_TXCIE		6

/*  */
#define UCSRB_UDRIE		5

/*  */
#define UCSRB_RXEN		4

/*  */
#define UCSRB_TXEN		3

/*  */
#define UCSRB_UCSZ2		2

/*  */
#define UCSRB_RXB8		1

/*  */
#define UCSRB_TXB8		0

/* USART Control and Status Register C */
#define UCSRC 		*((volatile u8*)0x40) // Same Address Of UBRRH

/*  */
#define UCSRC_URSEL		7

/*  */
#define UCSRC_UMSEL		6

/*  */
#define UCSRC_UPM1		5

/*  */
#define UCSRC_UPM0		4

/*  */
#define UCSRC_USBS		3

/*  */
#define UCSRC_UCSZ1		2

/*  */
#define UCSRC_UCSZ0		1

/*  */
#define UCSRC_UCPOL		0

/* USART Baud Rate Registers H */
#define UBRRH 		*((volatile u8*)0x40) // Same Address Of UCSRC

/*  */
#define UBRRH_URSEL		7

/* USART Baud Rate Registers L */
#define UBRRL 		*((volatile u8*)0x29)

#endif /* UASART_REGISTER_H_ */
