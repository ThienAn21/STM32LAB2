/*
 * control7seg_dot.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ASUS TUF GAMING
 */


#include "software_timer.h"
#include "global.h"
#include "display7seg.h"
#include "display_dot.h"

void control_7_seg(){
	switch(status_seg){
	case INIT:
		status_seg = SEG1_ON;
		setTimer1(50);
		break;
	case SEG1_ON:
		seg1_on();
		seg2_off();
		seg3_off();
		seg4_off();
		display7seg(1);
		if(timer1_flag == 1){
			status_seg = SEG2_ON;
			setTimer1(50);
		}
		break;
	case SEG2_ON:
		seg1_off();
		seg2_on();
		seg3_off();
		seg4_off();
		display7seg(2);
		if(timer1_flag == 1){
			status_seg = SEG3_ON;
			setTimer1(50);
		}
		break;
	case SEG3_ON:
		seg1_off();
		seg2_off();
		seg3_on();
		seg4_off();
		display7seg(3);
		if(timer1_flag == 1){
			status_seg = SEG4_ON;
			setTimer1(50);
		}
		break;
	case SEG4_ON:
		seg1_off();
		seg2_off();
		seg3_off();
		seg4_on();
		display7seg(0);
		if(timer1_flag == 1){
			status_seg = SEG1_ON;
			setTimer1(50);
		}
		break;
	default:
		break;
	}
}
void control_dot(){
	switch(status_dot){
	case INIT:
		status_dot = DOT_ON;
		setTimer2(50);
		break;
	case DOT_ON:
		dot_on();
		if(timer2_flag == 1){
			status_dot = DOT_OFF;
			setTimer2(50);
		}
		break;
	case DOT_OFF:
		dot_off();
		if(timer2_flag == 1){
			status_dot = DOT_ON;
			setTimer2(50);
		}
		break;
	default:
		break;
	}
}
