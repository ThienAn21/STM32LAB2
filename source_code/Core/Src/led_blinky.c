/*
 * led_blinky.c
 *
 *  Created on: Oct 13, 2023
 *      Author: ASUS TUF GAMING
 */

#include "led_blinky.h"



void led_blinky(int time){
	switch (status_led){
	case INIT:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		setTimer2(time);
		status_led = Toggle;
		break;
	case Toggle:
		if(timer2_flag == 1){
			setTimer2(time);
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		}
		break;
	default:
		break;
	}
}
