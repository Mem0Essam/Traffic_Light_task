/*
 * Seven_Segment_Interface.h
 *
 *  Created on: Mar 26, 2023
 *      Author: moham
 */

#ifndef SEVEN_SEGMENT_INTERFACE_H_
#define SEVEN_SEGMENT_INTERFACE_H_

/*Type of Seven Segment*/
#define Common_Cathode     0
#define Common_Anode       1


/*Value from 0 to 9 in case of common Cathode*/

#define Seg0_Cathode  0b00111111
#define Seg1_Cathode  0b00000110
#define Seg2_Cathode  0b01011011
#define Seg3_Cathode  0b01001111
#define Seg4_Cathode  0b01100110
#define Seg5_Cathode  0b01101101
#define Seg6_Cathode  0b01111101
#define Seg7_Cathode  0b00000111
#define Seg8_Cathode  0b01111111
#define Seg9_Cathode  0b01101111

/*Value from 0 to 9 in case of common Anode*/

#define Seg0_Anode    0b11000000
#define Seg1_Anode    0b11111001
#define Seg2_Anode    0b10100100
#define Seg3_Anode    0b10110000
#define Seg4_Anode    0b10011001
#define Seg5_Anode    0b10010010
#define Seg6_Anode    0b10000010
#define Seg7_Anode    0b11111000
#define Seg8_Anode    0b10000000
#define Seg9_Anode    0b10010000

/**************************************************************************/
/***********************Functions_Implementation***************************/
/**************************************************************************/

/*This Function is to Initialize the SSD*/
void SSD_voidSSD_Init(u8 SSD_u8Type,u8 Copy_u8PortID,u8 Copy_u8CommonPortID, u8 Copy_u8CommonPin);
/*This Function is to turn on  SSD */
void SSD_voidSSD_ON(u8 SSD_u8Type,u8 Copy_u8CommonPortID, u8 Copy_u8CommonPin);
/*This Function is to Display Number on  SSD */
void SSD_voidSSD_DisplayNumber(u8 SSD_u8Type, u8 Copy_u8PortID , u8 Copy_u8DisplayedNumber);
/*This Function is to turn off SSD */
void SSD_voidSSD_OFF(u8 SSD_u8Type,u8 Copy_u8CommonPortID, u8 Copy_u8CommonPin);


#endif /* SEVEN_SEGMENT_INTERFACE_H_ */
