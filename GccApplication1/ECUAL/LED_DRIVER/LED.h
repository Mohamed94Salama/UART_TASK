/*****************************************************************************
* Task: Car Project
* File Name: BTN.c
* Description: functions for the control buttons driver
* Author: TEAM2
* Date: 12/7/2021
******************************************************************************/

#ifndef ECUAL_LED_LED_H_
#define ECUAL_LED_LED_H_

/*- INCLUDES -----------------------------------------------*/
#include "../../library/BIT_MANIPULATE.h"
#include "../../MCAL/DIO_DRIVER/DIO.h"
#include "../../MCAL/DIO_DRIVER/DIO_Cfg.h"
#include "../../library/Register.h"
#include "../../library/STD_TYPES.h"
#include "LED_cfg.h"

/*- FUNCTION DECLARATIONS ----------------------------------*/

/*************************************************************************************************
* Parameters (in) : None
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to initialize the led
*************************************************************************************************/
enuErrorStatus_t	LED_Init(void);

/*************************************************************************************************
* Parameters (in) : u8_LedNum(index to the led pin)
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to turn the led on
*************************************************************************************************/
enuErrorStatus_t	LED_ON(uint8_t u8LedNum);

/*************************************************************************************************
* Parameters (in) : u8_LedNum(index to the led pin)
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to turn the led off
*************************************************************************************************/
enuErrorStatus_t	LED_OFF(uint8_t u8LedNum);

/*************************************************************************************************
* Parameters (in) : u8_LedNum(index to the led pin)
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to toggle the led
*************************************************************************************************/
enuErrorStatus_t	LED_toggle(uint8_t u8LedNum);

#endif /* ECUAL_LED_LED_H_ */
