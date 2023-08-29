#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif


#include "stm32f1xx_hal.h"
#include "stm32f1xx_bluepill.h"
#include "stm32f1xx_hal_gpio.h"
#include "stm32f1xx_hal_tim.h"
#include "stm32f1xx_hal_rcc.h"
#include "stm32f1xx_hal_cortex.h"
#include "stm32f1xx_it.h"
#include <stm32f1xx_hal_conf.h>
#include "stm32f1xx_hal_tim_ex.h"
#include "stm32f1xx_hal_i2c.h"
#include "i2c-lcd.h"
#include "stm32f1xx_hal_uart.h"

void Error_Handler(void);


HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);



void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef* htim_base);
void HAL_TIM_MspPostInit(TIM_HandleTypeDef* htim);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef* htim_base);
void HAL_I2C_MspDeInit(I2C_HandleTypeDef* hi2c);
void HAL_I2C_MspInit(I2C_HandleTypeDef* hi2c);
void HAL_MspInit(void);
void HAL_TIM_IC_MspInit(TIM_HandleTypeDef* htim_ic);
void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef* htim_ic);
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */