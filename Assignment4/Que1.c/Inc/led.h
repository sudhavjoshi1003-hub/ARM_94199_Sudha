/*
 * led.h
 *
 *  Created on: Dec 18, 2025
 *      Author: DELL
 */

#ifndef LED_H_
#define LED_H_


#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

void led_init(void);
void led_on(void);
void led_off(void);


#endif /* LED_H_ */
