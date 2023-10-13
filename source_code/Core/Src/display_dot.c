/*
 * display_dot.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ASUS TUF GAMING
 */

#include "main.h"
#include "display_dot.h"

void dot_on(){
	HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, RESET);
}

void dot_off(){
	HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, SET);
}
