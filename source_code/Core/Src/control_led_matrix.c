/*
 * control_led_matrix.c
 *
 *  Created on: Oct 1, 2023
 *      Author: ASUS TUF GAMING
 */

#include "control_led_matrix.h"
int index_led = 0;
int trans = 7;

void controlLedMatrix(){
	switch (status_matrix) {
		case INIT:
			displayLedMatrix(0,7);
			status_matrix = Matrix_on;
			setTimer5(10);
			setTimer6(50);
			break;
		case Matrix_on:
			  if (timer5_flag == 1){
				  setTimer5(1);
				  displayLedMatrix(trans, index_led);
				  index_led++;
				  if (index_led >=8){
					  index_led = 0;
				  }
			  }
			  if(timer6_flag == 1){
				  trans++;
				  setTimer6(50);
				  if(trans >= 14){
					  trans = 1;
				  }
			  }
			break;
		case 2:

			break;
		case 3:

			break;
		default:
			break;
	}
}
