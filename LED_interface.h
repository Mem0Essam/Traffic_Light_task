/*
 * led_interface.h
 *
 *  Created on: Mar 25, 2023
 *      Author: moham
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


/**************************************************************************/
/***********************Functions prototype********************************/
/**************************************************************************/

/*This Function is to set led Direction*/
void LED_voidLED_Init(u8 Copy_u8PortID, u8 Copy_u8Pin);
/*This Function is to turn on a specific led */
void LED_voidLED_ON(u8 Copy_u8PortID, u8 Copy_u8Pin);
/*This Function is to turn off a specific led */
void LED_voidLED_OFF(u8 Copy_u8PortID, u8 Copy_u8Pin);
/*This Function is to Toggle a specific led */
void LED_voidLED_Toggle(u8 Copy_u8PortID, u8 Copy_u8Pin);



#endif /* LED_INTERFACE_H_ */
