/*
 * main.c
 *
 *  Created on: Mar 26, 2023
 *      Author: moham
 */

#include "STD_TYPES.h"
#include "BIT_MATHS.h"
#include <util/delay.h>
#include "Seven_Segment_Interface.h"
#include "LED_interface.h"
#include "DIO_interface.h"

void main (void)
{
	SSD_voidSSD_Init(Common_Cathode,DIO_PORTB,DIO_PORTD,DIO_PIN6);
	LED_voidLED_Init(DIO_PORTA,DIO_PIN0);
	LED_voidLED_Init(DIO_PORTA,DIO_PIN1);
	LED_voidLED_Init(DIO_PORTA,DIO_PIN2);
	SSD_voidSSD_ON(Common_Cathode,DIO_PORTD,DIO_PIN6);
	while(1)
	{
		LED_voidLED_ON(DIO_PORTA,DIO_PIN0);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg9_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg8_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg7_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg6_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg5_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg4_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg3_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg2_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg1_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg0_Cathode);
		_delay_ms(1000);
		LED_voidLED_OFF(DIO_PORTA,DIO_PIN0);
		LED_voidLED_ON(DIO_PORTA,DIO_PIN1);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg3_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg2_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg1_Cathode);
		_delay_ms(1000);
		LED_voidLED_OFF(DIO_PORTA,DIO_PIN1);
		LED_voidLED_ON(DIO_PORTA,DIO_PIN2);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg9_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg8_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg7_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg6_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg5_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg4_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg3_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg2_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg1_Cathode);
		_delay_ms(1000);
		SSD_voidSSD_DisplayNumber(Common_Cathode,DIO_PORTB,Seg0_Cathode);
		_delay_ms(1000);
		LED_voidLED_OFF(DIO_PORTA,DIO_PIN2);
	};
}
