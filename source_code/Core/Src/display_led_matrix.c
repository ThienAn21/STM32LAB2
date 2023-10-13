/*
 * display_led_matrix.c
 *
 *  Created on: Oct 1, 2023
 *      Author: ASUS TUF GAMING
 */

#include "display_led_matrix.h"
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint16_t cot[8]= {ENM0_Pin,ENM1_Pin,ENM2_Pin,ENM3_Pin,ENM4_Pin,ENM5_Pin,ENM6_Pin,ENM7_Pin};
uint16_t hang[8]= {ROW0_Pin,ROW1_Pin,ROW2_Pin,ROW3_Pin,ROW4_Pin,ROW5_Pin,ROW6_Pin,ROW7_Pin};

uint8_t matrix_buffer[16][8]={ { 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
										{ 0x10,0x28,0x44,0x7C,0x44,0x44,0x00,0x00},//1028447c44440000
										{ 0x20,0x50,0x88,0xF8,0x88,0x88,0x00,0x00},//205088f888880000
										{ 0x40,0xA0,0x10,0xF0,0x10,0x10,0x00,0x00},//40a010f010100000
										{ 0x80,0x40,0x20,0xE0,0x20,0x20,0x00,0x00},//804020e020200000
										{ 0x00,0x80,0x40,0xC0,0x40,0x40,0x00,0x00},//008040c040400000
										{ 0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00},//0000808080800000
										{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//0000000000000000
										{ 0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00},//0000010101010000
										{ 0x00,0x01,0x02,0x03,0x02,0x02,0x00,0x00},//0001020302020000
										{ 0x01,0x02,0x04,0x07,0x04,0x04,0x00,0x00},//0102040704040000
										{ 0x02,0x05,0x08,0x0F,0x08,0x08,0x00,0x00},//0205080f08080000
										{ 0x04,0x0A,0x11,0x1F,0x11,0x11,0x00,0x00},//040a111f11110000
										{ 0x08,0x14,0x22,0x3E,0x22,0x22,0x00,0x00},//0814223e22220000
										{ 0x36,0x33,0x33,0x36,0xFC,0xF8,0x00,0x00},
										{ 0xFC,0x36,0x33,0x33,0x36,0xFC,0xF8,0x00}
};

void writeByte(GPIO_TypeDef* port, uint16_t* pins, uint8_t byte){
	HAL_GPIO_WritePin(port, pins[0], byte & 0x01);
	HAL_GPIO_WritePin(port, pins[1], byte & 0x02);
	HAL_GPIO_WritePin(port, pins[2], byte & 0x04);
	HAL_GPIO_WritePin(port, pins[3], byte & 0x08);
	HAL_GPIO_WritePin(port, pins[4], byte & 0x10);
	HAL_GPIO_WritePin(port, pins[5], byte & 0x20);
	HAL_GPIO_WritePin(port, pins[6], byte & 0x40);
	HAL_GPIO_WritePin(port, pins[7], byte & 0x80);
}
void displayLedMatrix(int index1, int index2){
	switch (index2){
	case 0:
		writeByte(ENM0_GPIO_Port, cot, 0X01);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 1:
		writeByte(ENM0_GPIO_Port, cot, 0X02);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 2:
		writeByte(ENM0_GPIO_Port, cot, 0X04);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 3:
		writeByte(ENM0_GPIO_Port, cot, 0X08);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 4:
		writeByte(ENM0_GPIO_Port, cot, 0X10);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 5:
		writeByte(ENM0_GPIO_Port, cot, 0X20);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 6:
		writeByte(ENM0_GPIO_Port, cot, 0X40);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	case 7:
		writeByte(ENM0_GPIO_Port, cot, 0X80);
		writeByte(ROW0_GPIO_Port, hang, matrix_buffer[index1][index2]);
		break;
	default:
		break;
	}
}

