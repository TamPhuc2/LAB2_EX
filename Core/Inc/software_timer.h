/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2025
 *      Author: tntam
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void timerRun();

void setTimer2(int durarion);
void setTimer3(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
