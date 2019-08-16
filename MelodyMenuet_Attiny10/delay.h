/*
 * delay.h
 *
 * Created: 2019/08/16 4:38:26
 *  Author: rimksky@gmail.com
 */ 

#ifndef DELAY_H_
#define DELAY_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdarg.h>

void delay(unsigned int);
void delayMicroseconds(unsigned int us);

#endif /* DELAY_H_ */