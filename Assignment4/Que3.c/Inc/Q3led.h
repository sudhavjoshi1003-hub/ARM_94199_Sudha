/*
 * Q3led.h
 *
 *  Created on: Dec 18, 2025
 *      Author: DELL
 */

#ifndef Q3LED_H_
#define Q3LED_H_


#include <stdint.h>
#include <stdio.h>

#include"stm32f407xx.h"

#define BV(n) (1 << (n))

void led_init(void);
void led_on(int num);
void led_off(void);

#endif /* Q3LED_H_ */
