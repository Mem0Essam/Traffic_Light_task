/*
 * LED_program.c
 *
 *  Created on: Mar 25, 2023
 *      Author: moham
 */


#include "STD_TYPES.h"
#include "BIT_MATHS.h"


#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_CFG.h"

#include "LED_interface.h"
#include "LED_private.h"
#include "LED_config.h"



/**************************************************************************/
/***********************Functions_Implementation********************************/
/**************************************************************************/


void LED_voidLED_Init(u8 Copy_u8PortID, u8 Copy_u8Pin)
{
	switch(Copy_u8PortID)
	{
	case DIO_PORTA :
		SET_BIT(DDRA , Copy_u8Pin);
		break;
	case DIO_PORTB :
		SET_BIT(DDRB , Copy_u8Pin);
		break;
	case DIO_PORTC :
		SET_BIT(DDRC , Copy_u8Pin);
		break;
	case DIO_PORTD :
		SET_BIT(DDRD , Copy_u8Pin);
		break;
	}
}

void LED_voidLED_ON(u8 Copy_u8PortID, u8 Copy_u8Pin)
{
     DIO_voidSetPinValue(Copy_u8PortID, Copy_u8Pin, DIO_HIGH_PIN);
}

void LED_voidLED_OFF(u8 Copy_u8PortID, u8 Copy_u8Pin)
{
	 DIO_voidSetPinValue(Copy_u8PortID, Copy_u8Pin, DIO_LOW_PIN);
}

void LED_voidLED_Toggle(u8 Copy_u8PortID, u8 Copy_u8Pin)
{
	 DIO_voidTooglePin(Copy_u8PortID,Copy_u8Pin);
}
