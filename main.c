/*
 * main.c
 *
 *  Created on: Dec 15, 2020
 *      Author: Mariam
 */

#include <util/delay.h>
#include <string.h>
#include "Bit_math.h"
#include "STD_types.h"
#include "DIO_Interface.h"
#include "USART_config.h"
#include "USART_interface.h"



/*struct user
{
	char name[10];
	u8 password;
};
struct user users[10];*/



int main()
{
	u8 l;
	DIO_VidSetPinDirection(0,0,1);//LED
		DIO_VidSetPinDirection(3,1,1);//transmit
		DIO_VidSetPinDirection(3,0,0);//recieve
	l=USART_u8SendData('A');
	DIO_VidSetPinDirection(0,0,0);//LED PIN
	/*///DIO_VidSetPinValue(0,0,1);//trun on led
	char user_name[10];
	u8 user_password;
	u8 safty=0;
	u8 trials=0;
	u8 control;
	u8 compare=0;
	u8 indcator=0;
	void USART_voidInit(void);
	u8 i;
	for(i=0;i<10;i++)
	{

		USART_u8SendStringSynchronous("Enter data");
		USART_u8SendStringSynchronous("Enter name of the user ");
		USART_u8ReceiveBufferSynchronous(&users[i].name,10);

		USART_u8SendStringSynchronous("Enter password of the user ");
		USART_u8RecieveData(&indcator);
		while(indcator!='P')
		{
		users[i].password*= 10;
	indcator = indcator-48;
		users[i].password = users[i].password+indcator;
		USART_u8RecieveData(&indcator);
		}
	}
	try_agian:
	USART_u8SendStringSynchronous("Enter name of the user ");
	USART_u8ReceiveBufferSynchronous(&user_name,10);
	USART_u8SendStringSynchronous("Enter password of the user ");
	USART_u8RecieveData(&indcator);
	while(indcator!='P')
	{
		user_password*= 10;
		indcator = indcator-48;
		user_password = user_password+indcator;
		USART_u8RecieveData(&indcator);
	}
	trials++;
	for(i=0;i<10;i++)
	{
		compare=strcmp(user_name,users[i].name);
		if((compare==0)&&(user_password==users[i].password))
		{
			safty=1;
			break;
		}
	}
	if(trials<3&&safty==0)
	{
		goto try_agian;
	}
	else if(safty==1&&trials<=3)
	{
		USART_u8SendStringSynchronous("welcome to our system press 1 to trun on the ligt , 0 to turn off");
		USART_u8RecieveData(&control);
		switch(control)
		{
			case '0':
			DIO_VidSetPinValue(0,0,0);//trun off led
			break;
			case '1':
			DIO_VidSetPinValue(0,0,1);//trun on led
			break;
		}

	}
	else{
		USART_u8SendStringSynchronous("ERROR alarm///// ");
	}*/
	return 0;

}

