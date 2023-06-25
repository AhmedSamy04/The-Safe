/*
 * Keypad_Driver.h
 *
 * Created: 8/26/2022 1:00:37 AM
 *  Author: Ahmed Sami
 */ 


#ifndef KEYPAD_DRIVER_H_
#define KEYPAD_DRIVER_H_
#define NOTPRESSED 0xff
#include "DIO.h"
void keypad_vInit();
char keypad_u8check_press();



#endif /* KEYPAD_DRIVER_H_ */