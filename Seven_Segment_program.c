/*
 * Seven_Segment_program.c
 *
 *  Created on: Mar 26, 2023
 *      Author: moham
 */

#include "STD_TYPES.h"
#include "BIT_MATHS.h"


#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_CFG.h"

#include "Seven_Segment_Interface.h"
#include "Seven_Segment_private.h"
#include "Seven_Segment_config.h"


/**************************************************************************/
/***********************Functions_Implementation********************************/
/**************************************************************************/
void SSD_voidSSD_Init(u8 SSD_u8Type,u8 Copy_u8PortID,u8 Copy_u8CommonPortID, u8 Copy_u8CommonPin)
{
	switch(SSD_u8Type)
	{
	case Common_Cathode :
		switch(Copy_u8PortID)
		{
		case DIO_PORTA :
			DIO_voidSetPortDirection(DIO_PORTA,DIO_OUTPUT_PORT);
			break;
		case DIO_PORTB :
			DIO_voidSetPortDirection(DIO_PORTB,DIO_OUTPUT_PORT);
			break;
		case DIO_PORTC :
			DIO_voidSetPortDirection(DIO_PORTC,DIO_OUTPUT_PORT);
			break;
		case DIO_PORTD :
			DIO_voidSetPortDirection(DIO_PORTD,DIO_OUTPUT_PORT);
			break;
		}
		switch(Copy_u8CommonPortID)
		{
		case DIO_PORTA :
			DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
			break;
		case DIO_PORTB :
			DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
			break;
		case DIO_PORTC :
			DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
			break;
		case DIO_PORTD :
			DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
			break;
		}

		break;
		case Common_Anode :
			switch(Copy_u8PortID)
			{
			case DIO_PORTA :
				DIO_voidSetPortDirection(DIO_PORTA,DIO_OUTPUT_PORT);
				break;
			case DIO_PORTB :
				DIO_voidSetPortDirection(DIO_PORTA,DIO_OUTPUT_PORT);
				break;
			case DIO_PORTC :
				DIO_voidSetPortDirection(DIO_PORTA,DIO_OUTPUT_PORT);
				break;
			case DIO_PORTD :
				DIO_voidSetPortDirection(DIO_PORTA,DIO_OUTPUT_PORT);
				break;
			}
			switch(Copy_u8CommonPortID)
			{
			case DIO_PORTA :
				DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
				break;
			case DIO_PORTB :
				DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
				break;
			case DIO_PORTC :
				DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
				break;
			case DIO_PORTD :
				DIO_voidSetPinDircetion(Copy_u8CommonPortID,Copy_u8CommonPin,DIO_PIN_OUTPUT);
				break;
			}
			break;
	}
}
void SSD_voidSSD_ON(u8 SSD_u8Type,u8 Copy_u8CommonPortID, u8 Copy_u8CommonPin)
{
	switch(SSD_u8Type)
	{
	case Common_Cathode :
		switch(Copy_u8CommonPortID)
		{
		case DIO_PORTA :
			DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_LOW_PIN);
			break;
		case DIO_PORTB :
			DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_LOW_PIN);
			break;
		case DIO_PORTC :
			DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_LOW_PIN);
			break;
		case DIO_PORTD :
			DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_LOW_PIN);
			break;
		}
		break;
		case Common_Anode :
			switch(Copy_u8CommonPortID)
			{
			case DIO_PORTA :
				DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_HIGH_PIN);
				break;
			case DIO_PORTB :
				DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_HIGH_PIN);
				break;
			case DIO_PORTC :
				DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_HIGH_PIN);
				break;
			case DIO_PORTD :
				DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_HIGH_PIN);
				break;
			}
			break;
	}

}
void SSD_voidSSD_DisplayNumber(u8 SSD_u8Type, u8 Copy_u8PortID , u8 Copy_u8DisplayedNumber)
{
	switch(SSD_u8Type)
	{
	case Common_Cathode :
		switch (Copy_u8PortID)
		{
		case DIO_PORTA :
			DIO_u8SetPortValue(DIO_PORTA, Copy_u8DisplayedNumber);
			break;
		case DIO_PORTB :
			DIO_u8SetPortValue(DIO_PORTB, Copy_u8DisplayedNumber);
			break;
		case DIO_PORTC :
			DIO_u8SetPortValue(DIO_PORTC, Copy_u8DisplayedNumber);
			break;
		case DIO_PORTD :
			DIO_u8SetPortValue(DIO_PORTD, Copy_u8DisplayedNumber);
			break;
		}
		break;
		case Common_Anode :
			switch (Copy_u8PortID)
			{
			case DIO_PORTA :
				DIO_u8SetPortValue(DIO_PORTA, Copy_u8DisplayedNumber);
				break;
			case DIO_PORTB :
				DIO_u8SetPortValue(DIO_PORTB, Copy_u8DisplayedNumber);
				break;
			case DIO_PORTC :
				DIO_u8SetPortValue(DIO_PORTC, Copy_u8DisplayedNumber);
				break;
			case DIO_PORTD :
				DIO_u8SetPortValue(DIO_PORTD, Copy_u8DisplayedNumber);
				break;
			}
			break;
	}
}
void SSD_voidSSD_OFF(u8 SSD_u8Type,u8 Copy_u8CommonPortID, u8 Copy_u8CommonPin)
{
   switch(SSD_u8Type)
   {
   case Common_Cathode :
	   switch(Copy_u8CommonPortID)
	   {
	   case DIO_PORTA :
		   DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_HIGH_PIN);
		   break;
	   case DIO_PORTB :
		   DIO_voidSetPinValue(DIO_PORTB,Copy_u8CommonPin,DIO_HIGH_PIN);
		   break;
	   case DIO_PORTC :
		   DIO_voidSetPinValue(DIO_PORTC,Copy_u8CommonPin,DIO_HIGH_PIN);
		   break;
	   case DIO_PORTD :
		   DIO_voidSetPinValue(DIO_PORTD,Copy_u8CommonPin,DIO_HIGH_PIN);
		   break;
	   }
	   break;
	   case Common_Anode :
		   switch(Copy_u8CommonPortID)
		   {
		   case DIO_PORTA :
			   DIO_voidSetPinValue(DIO_PORTA,Copy_u8CommonPin,DIO_LOW_PIN);
			   break;
		   case DIO_PORTB :
			   DIO_voidSetPinValue(DIO_PORTB,Copy_u8CommonPin,DIO_LOW_PIN);
			   break;
		   case DIO_PORTC :
			   DIO_voidSetPinValue(DIO_PORTC,Copy_u8CommonPin,DIO_LOW_PIN);
			   break;
		   case DIO_PORTD :
			   DIO_voidSetPinValue(DIO_PORTD,Copy_u8CommonPin,DIO_LOW_PIN);
			   break;
		   }
		   break;
   }
}
