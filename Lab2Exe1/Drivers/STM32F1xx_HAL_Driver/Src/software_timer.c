/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2022
 *      Author: 84336
 */
#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

void SetTimer1 (int duration) {
	timer1_counter = duration;
	timer1_flag = 0;
}

void SetTimer2 (int duration) {
	timer2_counter = duration;
	timer2_flag = 0;
}

void Timer1Run() {
	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}
}

void Timer2Run() {
	if (timer2_counter > 0) {
		timer2_counter--;
		if (timer2_counter <= 0) {
			timer2_flag = 1;
		}
	}
}
