/*
 * led_blinky.c
 *
 *  Created on: Oct 13, 2023
 *      Author: ASUS TUF GAMING
 */

#include "led_blinky.h"



void led_blinky(GPIO_TypeDef* port, uint16_t* pins, int time){
	switch (status_led){
	case INIT:
		HAL_GPIO_WritePin(port, pins, RESET);
		setTimer3(time);
		status_led = Toggle;
		break;
	case Toggle:
		if(timer3_flag == 1){
			setTimer3(time);
			HAL_GPIO_TogglePin(port, pins);
		}
		break;
	default:
		break;
	}
}
