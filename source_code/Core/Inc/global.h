/*
 * global.h
 *
 *  Created on: Sep 30, 2023
 *      Author: ASUS TUF GAMING
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 1
#define SEG1_ON 2
#define SEG2_ON 3
#define SEG3_ON 4
#define SEG4_ON 5

#define DOT_ON 6
#define DOT_OFF 7

#define Toggle 8

extern int status_seg;
extern int status_dot;
extern int status_led;

#endif /* INC_GLOBAL_H_ */
