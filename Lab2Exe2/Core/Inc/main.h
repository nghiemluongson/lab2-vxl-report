/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#define COUPLE_RED_Pin GPIO_PIN_4
#define COUPLE_RED_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define PNP1_Pin GPIO_PIN_6
#define PNP1_GPIO_Port GPIOA
#define PNP2_Pin GPIO_PIN_7
#define PNP2_GPIO_Port GPIOA
#define LED_a_Pin GPIO_PIN_0
#define LED_a_GPIO_Port GPIOB
#define LED_b_Pin GPIO_PIN_1
#define LED_b_GPIO_Port GPIOB
#define LED_c_Pin GPIO_PIN_2
#define LED_c_GPIO_Port GPIOB
#define PNP3_Pin GPIO_PIN_8
#define PNP3_GPIO_Port GPIOA
#define PNP4_Pin GPIO_PIN_9
#define PNP4_GPIO_Port GPIOA
#define LED_d_Pin GPIO_PIN_3
#define LED_d_GPIO_Port GPIOB
#define LED_e_Pin GPIO_PIN_4
#define LED_e_GPIO_Port GPIOB
#define LED_f_Pin GPIO_PIN_5
#define LED_f_GPIO_Port GPIOB
#define LED_g_Pin GPIO_PIN_6
#define LED_g_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
