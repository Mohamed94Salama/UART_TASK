/*
 * GccApplication1.c
 *
 * Created: 7/15/2021 3:40:09 AM
 * Author : DELLL
 */ 

#include "../ECUAL/LED_DRIVER/LED.h"
#include "../MCAL/DIO_DRIVER/DIO.h"
#include "../MCAL/UART_DRIVER/UART.h"
#include <string.h>
int main(void)
{
    LED_Init();
	UART_Init();
	DIO_Init();
	uint8_t arr1[16]="Green LED is on\r";
	uint8_t arr2[17]="Yellow LED is on\r";
	uint8_t arr3[14]="Red LED is on\r";
	uint8_t arr4[3]="OK\r";
	uint8_t x[6];
	uint8_t c;

    while (1) 
    {
		
		UART_ReceiveString(x,MAX_LEN);
		//UART_ReceiveData(&c);
		if(strcmp(x,"START\r")==0)
		{
			LED_ON(LED_1);
			LED_OFF(LED_2);
			LED_OFF(LED_3);
			UART_SendString(arr1);
		}else if(strcmp(x,"WAIT\r")==0)
		{
			LED_OFF(LED_1);
			LED_ON(LED_2);
			LED_OFF(LED_3);
			UART_SendString(arr2);			
		}else if(strcmp(x,"STOP\r")==0)
		{
			LED_OFF(LED_1);
			LED_OFF(LED_2);
			LED_ON(LED_3);			
			UART_SendString(arr3);			
		}else if(strcmp(x,"AT\r")==0)
		{
			UART_SendString(arr4);
		}
}
		}

