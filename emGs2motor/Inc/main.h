/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define S_CHA_Pin GPIO_PIN_0
#define S_CHA_GPIO_Port GPIOA
#define S_CHB_Pin GPIO_PIN_1
#define S_CHB_GPIO_Port GPIOA
#define LED_CHA_Pin GPIO_PIN_3
#define LED_CHA_GPIO_Port GPIOA
#define LED_CHB_Pin GPIO_PIN_4
#define LED_CHB_GPIO_Port GPIOA
#define CENTERLINE_CHA_P_Pin GPIO_PIN_7
#define CENTERLINE_CHA_P_GPIO_Port GPIOA
#define CENTERLINE_CHA_P_EXTI_IRQn EXTI9_5_IRQn
#define CENTERLINE_CHA_D_Pin GPIO_PIN_0
#define CENTERLINE_CHA_D_GPIO_Port GPIOB
#define CENTERLINE_CHA_D_EXTI_IRQn EXTI0_IRQn
#define CENTERLINE_CHB_P_Pin GPIO_PIN_1
#define CENTERLINE_CHB_P_GPIO_Port GPIOB
#define CENTERLINE_CHB_P_EXTI_IRQn EXTI1_IRQn
#define CENTERLINE_CHB_D_Pin GPIO_PIN_10
#define CENTERLINE_CHB_D_GPIO_Port GPIOB
#define CENTERLINE_CHB_D_EXTI_IRQn EXTI15_10_IRQn
#define SET_Pin GPIO_PIN_13
#define SET_GPIO_Port GPIOB
#define SET_EXTI_IRQn EXTI15_10_IRQn
/* USER CODE BEGIN Private defines */

#define TIM_PERIOD 							1000-1  		//设置定时器计数周期，由于预分频设为72，所以最终输出频率为72M/72/TIM_PERIOD
#define SET_BLINK__DELAY_COUNT  300		//设置祥泰下通道led闪烁频率，频率为TIM_PERIOD/SET_BLINK__DELAY_COUNT
#define SET__DELAY_COUNT_MIN  3000			//设置肌肉放松状态下的adc采集次数，同时设置持续时间（s=SET__DELAY_COUNT_MIN/TIM_PERIOD）
#define SET__DELAY_COUNT_MAX SET__DELAY_COUNT_MIN*2//同上
#define KEY_DELAY_COUNT  1000					//按键消抖（s=KEY_DELAY_COUNT/TIM_PERIOD)
#define CHA_EN htim1.Instance->CCER=0x01										//设置输出通道
#define CHB_EN htim1.Instance->CCER=0x10										//同上
#define CH_DIS htim1.Instance->CCER=0x00										//同上
#define O_CHA htim1.Instance->CCR1									//设置pwm占空比
#define O_CHB htim1.Instance->CCR2

#define S_CH ADC_Value								//adc采集数组
#define CHA 0U
#define CHB 1U
#define S_CHANNEL__NUM 2  //信号通道数
#define SUBDIVIDE 200 				 //信号分级
#define SPEED_SUBDIVIDE 10			//速度分级
#define S_VALUE_CYCLE_COUNT  200 //单周期采集次数
#define	S_VALUE_CYCLE__SET_COUNT 1//设置状态下采集周期循环次数,一个周期200ms，5次为1s，3*5=15=3s
#define SET_DELAY	40							//设置状态跳转延时
#define S_VALUE_CYCLE_RANGE 3		//采样数值达标数量浮动范围=S_VALUE_CYCLE_Range*2
#define S_VALUE_RANGE 1241
#define S_VALUE_RESOLUTION 20		//信号能级间隔
#define S_VALUE_CENTERLINE_SET_MIN_MAX 30 //设置状态下信号中心线宽度最高阈值
#define S_VALUE_CENTERLINE_SET_MAX_MAX 200 //设置状态下信号中心线宽度最高阈值
#define S_VALUE_CENTERLINE_COUNT 20 //中心
#define S_VALUE_MAX	180					//
#define  LED_PERIOD	2000				//led更新周期
#define LED_SUBDIVIDE	100	//led频率分辨率
#define S_VALUE_COUNT_MIN 0
#define S_VALUE_COUNT_MIN_SET 1

#define CH_IS_DIS 0xFF
#define SET_MIN 0U
#define SET_MAX 1U

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
