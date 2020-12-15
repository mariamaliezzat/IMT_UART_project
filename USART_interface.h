/*********************************************************/
/*********************************************************/
/***********		Author: mariam 	**************/
/***********		Layer: MCAL			 	**************/
/***********		Component: USART 		**************/
/**********			Date: 5-10-2020         **************/            
/***********		Version: 1.00		 	**************/
/*********************************************************/
/*********************************************************/


#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_




#define NULL 0
#define  NULLPOINTER 0
#define TIMEOUT_STATE 2
#define OK 1

void USART_voidInit(void);

u8 USART_u8SendData(u8 Copy_u8Data);

u8 USART_u8RecieveData(u8 * Copy_pu8Data);

u8 USART_u8SendStringSynchronous(const char * Copy_pchString);

u8 USART_u8SendStringAsynchronous(const char * Copy_pchString, void(*Copy_pvNotificationFunction)(void));

u8 USART_u8ReceiveBufferSynchronous(u8 * Copy_pu8Data, u8 Copy_u8BufferSize);

u8 USART_u8ReceiveBufferAsynchronous(u8 * Copy_pu8Data, u8 Copy_u8BufferSize, void(*Copy_pvNotificationFunction)(void));


#endif
