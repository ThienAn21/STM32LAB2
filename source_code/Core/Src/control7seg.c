/*
 * control7seg.c
 *
 *  Created on: Sep 29, 2023
 *      Author: ASUS TUF GAMING
 */
#include "software_timer.h"
#include "global.h"
#include "display7seg.h"

void control_7_seg(){
	switch(status){
	case INIT:
		status = SEG1_ON;
		setTimer1(50);
		break;
	case SEG1_ON:
		seg1_on();
		seg2_off();
		display7seg(1);
		if(timer1_flag == 1){
			status = SEG2_ON;
			setTimer1(50);
		}
		break;
	case SEG2_ON:
		seg1_off();
		seg2_on();
		display7seg(2);
		if(timer1_flag == 1){
			status = SEG1_ON;
			setTimer1(50);
		}
		break;
	default:
		break;
	}
}

