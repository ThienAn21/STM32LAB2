/*
 * display7seg.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ASUS TUF GAMING
 */
#include "main.h"
#include "display7seg.h"

void display7seg(int num){
	  switch(num){
	  case 0:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		  break;
	  default:
		  break;
	  }

}
void seg1_on(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
}
void seg2_on(){
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
}
void seg3_on(){
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
}
void seg4_on(){
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
}
void seg1_off(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
}
void seg2_off(){
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
}
void seg3_off(){
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
}
void seg4_off(){
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}
