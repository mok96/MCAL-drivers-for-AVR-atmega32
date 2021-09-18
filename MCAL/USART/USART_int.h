/* Gaurd */
#ifndef UASART_INTERFACE_H_
#define UASART_INTERFACE_H_

void USART_voidInit(void);

void USART_voidSendData(u8 Copy_u8Data);

u8 USART_voidReceiveData(void);

void USART_voidSendString(u8 * Copy_Pu8Data);

#endif /* UASART_INTERFACE_H_ */
