/*
 * mq2.h
 *
 *  Created on: Dec 30, 2025
 *      Author: DELL
 */

#ifndef INC_MQ2_H_
#define INC_MQ2_H_

#include "main.h"

#include<string.h>
#include<stdio.h>

uint8_t mq2_adc_init(ADC_HandleTypeDef *pADCHandle);
void mq2_display( uint8_t mq2_value);

#endif /* INC_MQ2_H_ */
