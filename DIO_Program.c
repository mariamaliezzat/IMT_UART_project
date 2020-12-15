#include"STD_types.h"
#include"Bit_math.h"
#include "DIO_Interface.h"
#include "DIO_Register.h"


void DIO_VidSetPinDirection(u8 Loc_U8Port,u8 Loc_U8Pin, u8 Loc_U8Dir)
{
	if(Loc_U8Dir==1)
	{
		switch(Loc_U8Port)
		{
			case 0:
			SET_BIT(DDRA,Loc_U8Pin);
			break;
			case 1:
			SET_BIT(DDRB,Loc_U8Pin);
			break;
			case 2:
			SET_BIT(DDRC,Loc_U8Pin);
			break;
			case 3:
			SET_BIT(DDRD,Loc_U8Pin);
			break;
		}
		
	}
	else if(Loc_U8Dir==0)
	{
		switch(Loc_U8Port)
		{
			case 0:
			CLEAR_BIT(DDRA,Loc_U8Pin);
			break;
			case 1:
			CLEAR_BIT(DDRB,Loc_U8Pin);
			break;
			case 2:
			CLEAR_BIT(DDRC,Loc_U8Pin);
			break;
			case 3:
			CLEAR_BIT(DDRD,Loc_U8Pin);
			break;
		}
	}
}
void DIO_VidSetPinValue(u8 Loc_U8Port,u8 Loc_U8Pin,u8 Loc_U8Value)
{
	if(Loc_U8Value==1)
	{
		switch(Loc_U8Port)
		{
			case 0:
			SET_BIT(PORTA,Loc_U8Pin);
			break;
			case 1:
			SET_BIT(PORTB,Loc_U8Pin);
			break;
			case 2:
			SET_BIT(PORTC,Loc_U8Pin);
			break;
			case 3:
			SET_BIT(PORTD,Loc_U8Pin);
			break;
		}
		
	}
	else if(Loc_U8Value==0)
	{
		switch(Loc_U8Port)
		{
			case 0:
			CLEAR_BIT(PORTA,Loc_U8Pin);
			break;
			case 1:
			CLEAR_BIT(PORTB,Loc_U8Pin);
			break;
			case 2:
			CLEAR_BIT(PORTC,Loc_U8Pin);
			break;
			case 3:
			CLEAR_BIT(PORTD,Loc_U8Pin);
			break;
		}
	}
}
void DIO_VidSetPortValue(u8 Loc_U8Port,u8 Loc_U8Value)
{
		switch(Loc_U8Port)
		{
			case 0:PORTA=Loc_U8Value;break;
			case 1:PORTB=Loc_U8Value;break;
			case 2:PORTC=Loc_U8Value;break;
			case 3:PORTD=Loc_U8Value;break;
			
		}
}
void DIO_VidSetPortDirection(u8 Loc_U8Port, u8 Loc_U8Dir)
{
	  switch(Loc_U8Port)
		{
			case 0:DDRA=Loc_U8Dir;break;
			case 1:DDRB=Loc_U8Dir;break;
			case 2:DDRC=Loc_U8Dir;break;
			case 3:DDRD=Loc_U8Dir;break;
			
		}
	
}
void DIO_VidTogglePin(u8 Loc_U8Port,u8 Loc_U8Pin)
{
	switch(Loc_U8Port)
		{
			case 0:Toggle_BIT(PORTA,Loc_U8Pin);break;
			case 1:Toggle_BIT(PORTB,Loc_U8Pin);break;
			case 2:Toggle_BIT(PORTC,Loc_U8Pin);break;
			case 3:Toggle_BIT(PORTD,Loc_U8Pin);break;
			
		}
}
u8 DIO_u8GetPinValue(u8 Loc_U8Port,u8 Loc_U8Pin)
{
	u8 Pin_Value;
	switch(Loc_U8Port)
		{
			case 0:Pin_Value=GET_BIT(PINA,Loc_U8Pin);break;
			case 1:Pin_Value=GET_BIT(PINB,Loc_U8Pin);break;
			case 2:Pin_Value=GET_BIT(PINC,Loc_U8Pin);break;
			case 3:Pin_Value=GET_BIT(PIND,Loc_U8Pin);break;
			
		}
	return Pin_Value;
}
