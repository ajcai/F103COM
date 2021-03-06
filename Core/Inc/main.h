/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include <stdio.h>
#include <string.h>
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
#define MOTOR1_PWM_Pin GPIO_PIN_0
#define MOTOR1_PWM_GPIO_Port GPIOA
#define MOTOR2_PWM_Pin GPIO_PIN_1
#define MOTOR2_PWM_GPIO_Port GPIOA
#define MAG_TX_Pin GPIO_PIN_2
#define MAG_TX_GPIO_Port GPIOA
#define MAG_RX_Pin GPIO_PIN_3
#define MAG_RX_GPIO_Port GPIOA
#define MOTOR1_SIG1_Pin GPIO_PIN_4
#define MOTOR1_SIG1_GPIO_Port GPIOA
#define MOTOR2_SIG1_Pin GPIO_PIN_5
#define MOTOR2_SIG1_GPIO_Port GPIOA
#define MOTOR1_SIG2_Pin GPIO_PIN_6
#define MOTOR1_SIG2_GPIO_Port GPIOA
#define MOTOR2_SIG2_Pin GPIO_PIN_7
#define MOTOR2_SIG2_GPIO_Port GPIOA
#define RFID_TX_Pin GPIO_PIN_10
#define RFID_TX_GPIO_Port GPIOB
#define RFID_RX_Pin GPIO_PIN_11
#define RFID_RX_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_13
#define LED1_GPIO_Port GPIOB
#define INFRARED1_Pin GPIO_PIN_6
#define INFRARED1_GPIO_Port GPIOC
#define INFRARED1_EXTI_IRQn EXTI9_5_IRQn
#define INFRARED2_Pin GPIO_PIN_7
#define INFRARED2_GPIO_Port GPIOC
#define INFRARED2_EXTI_IRQn EXTI9_5_IRQn
#define INFO_TX_Pin GPIO_PIN_9
#define INFO_TX_GPIO_Port GPIOA
#define INFO_RX_Pin GPIO_PIN_10
#define INFO_RX_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
