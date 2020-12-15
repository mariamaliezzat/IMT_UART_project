#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H
void DIO_VidSetPinValue(u8 Loc_U8Port,u8 Loc_U8Pin,u8 Loc_U8Value);
void DIO_VidSetPinDirection(u8 Loc_U8Port,u8 Loc_U8Pin, u8 Loc_U8Dir);
void DIO_VidTogglePin(u8 Loc_U8Port,u8 Loc_U8Pin);
u8 DIO_u8GetPinValue(u8 Loc_U8Port,u8 Loc_U8Pin);
void DIO_VidSetPortValue(u8 Loc_U8Port,u8 Loc_U8Value);
void DIO_VidSetPortDirection(u8 Loc_U8Port, u8 Loc_U8Dir);


#endif
