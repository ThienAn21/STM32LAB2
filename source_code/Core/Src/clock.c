/*
 * clock.c
 *
 *  Created on: Oct 13, 2023
 *      Author: ASUS TUF GAMING
 */

#include "clock.h"

void updateClockBuffer(){
	led_buffer[3] = minute % 10;
	led_buffer[2] = minute / 10;
	led_buffer[1] = hour % 10;
	led_buffer[0] = hour / 10;
}

void clock_run(){
	switch(status_clock){
	case INIT:
		updateClockBuffer();
		setTimer4(100);
		status_clock = Clock_on;
	case Clock_on:
		if(timer4_flag == 1){
			second++;
			if ( second >= 60) {
				 second = 0;
				 minute ++;
			 }
			if( minute >= 60) {
				 minute = 0;
				 hour ++;
			 }
			 if( hour >=24){
				 hour = 0;
			 }
			 updateClockBuffer();
			 setTimer4(100);
		}

	}

}
