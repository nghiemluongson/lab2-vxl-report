/*
 * software_timer.c
 *
 *  Created on: Oct 15, 2022
 *      Author: 84336
 */

#include "software_timer.h"

int timer0_counter = 0, timer0_flag = 0, TIMER_CYCLE = 10;

void SetTimer (int duration) {
	timer0_counter = duration / TIMER_CYCLE;
	timer0_flag = 0;
}

void TimerRun () {
	if (timer0_counter > 0) {
		timer0_counter--;
		if (timer0_counter <= 0) {
			timer0_flag = 1;
		}
	}
}
