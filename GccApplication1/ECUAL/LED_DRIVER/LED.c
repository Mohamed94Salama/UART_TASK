/*
 * LED.c
 *
 * Created: 7/15/2021 2:11:24 AM
 *  Author: DELLL
 */ 

#include "LED.h"

enuErrorStatus_t	LED_Init(void)
{
	DIO_Init();
	return E_OK;
}

enuErrorStatus_t	LED_ON(uint8_t u8LedNum)
{
	DIO_Write(u8LedNum,HIGH);
	return E_OK;
}

enuErrorStatus_t	LED_OFF(uint8_t u8LedNum)
{
	DIO_Write(u8LedNum,LOW);
	return E_OK;	
}

enuErrorStatus_t	LED_toggle(uint8_t u8LedNum)
{
	DIO_Toogle(u8LedNum);
	return E_OK;
}
