/*
 * mq2.c
 *
 *  Created on: Dec 30, 2025
 *      Author: DELL
 */
#include"mq2.h"

#include<string.h>
#include<stdio.h>

#include "stm32f4xx_hal.h"


ADC_HandleTypeDef* adcHandle = NULL;


uint8_t mq2_adc_init(ADC_HandleTypeDef *pADCHandle)
{
	uint8_t val = 0;
	 HAL_ADC_Start(pADCHandle);
	 HAL_ADC_PollForConversion(pADCHandle, HAL_MAX_DELAY);
	 val=HAL_ADC_GetValue(pADCHandle);
	 HAL_ADC_Stop(pADCHandle);

	 return val;
}

void mq2_display( uint8_t mq2_value)
{
	HAL_GPIO_WritePin(GPIOD, (GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15) , GPIO_PIN_RESET);

	if(mq2_value>200 || mq2_value<500)
	{
		 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		 HAL_Delay(1000);
	}
	else if(mq2_value>500 || mq2_value<1500)
	{
		 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		 HAL_Delay(1000);
	}
	else if(mq2_value>1500)
	{
		 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
		 HAL_Delay(1000);
	}
	else
	{
		 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		 HAL_Delay(1000);
	}

}

