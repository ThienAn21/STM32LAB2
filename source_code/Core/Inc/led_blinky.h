/*
 * led_blinky.h
 *
 *  Created on: Oct 13, 2023
 *      Author: ASUS TUF GAMING
 */

#ifndef INC_LED_BLINKY_H_
#define INC_LED_BLINKY_H_
#include "main.h"
#include "software_timer.h"
#include "global.h"
void led_blinky(GPIO_TypeDef* port, uint16_t* pins, int time);


#endif /* INC_LED_BLINKY_H_ */
