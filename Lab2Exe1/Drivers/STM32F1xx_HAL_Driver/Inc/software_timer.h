/*
 * software_timer.h
 *
 *  Created on: Oct 5, 2022
 *      Author: 84336
 */

#ifndef STM32F1XX_HAL_DRIVER_INC_SOFTWARE_TIMER_H_
#define STM32F1XX_HAL_DRIVER_INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void SetTimer1(int duration);
void SetTimer2(int duration);

void Timer1Run();
void Timer2Run();

#endif /* STM32F1XX_HAL_DRIVER_INC_SOFTWARE_TIMER_H_ */
