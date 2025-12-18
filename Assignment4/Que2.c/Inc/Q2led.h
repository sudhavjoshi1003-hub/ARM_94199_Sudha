/*
 * Q2led.h
 *
 *  Created on: Dec 18, 2025
 *      Author: DELL
 */

#ifndef Q2LED_H_
#define Q2LED_H_


#include <stdint.h>
#include <stdio.h>

#include"stm32f407xx.h"

#define BV(n) (1 << (n))

void led_init(void);
void led_on(void);
void led_off(void);


#endif /* Q2LED_H_ */
