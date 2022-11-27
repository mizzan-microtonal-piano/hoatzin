/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "fatar88keymap.h"
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
#define K_L_BR2_Pin GPIO_PIN_13
#define K_L_BR2_GPIO_Port GPIOC
#define K_L_MK3_Pin GPIO_PIN_14
#define K_L_MK3_GPIO_Port GPIOC
#define K_L_BR3_Pin GPIO_PIN_15
#define K_L_BR3_GPIO_Port GPIOC
#define TRS1_T_Pin GPIO_PIN_1
#define TRS1_T_GPIO_Port GPIOC
#define TRS1_R_Pin GPIO_PIN_2
#define TRS1_R_GPIO_Port GPIOC
#define TRS2_T_Pin GPIO_PIN_3
#define TRS2_T_GPIO_Port GPIOC
#define K_L_MK4_Pin GPIO_PIN_0
#define K_L_MK4_GPIO_Port GPIOA
#define K_L_BR4_Pin GPIO_PIN_1
#define K_L_BR4_GPIO_Port GPIOA
#define K_L_T7_Pin GPIO_PIN_4
#define K_L_T7_GPIO_Port GPIOA
#define K_L_T6_Pin GPIO_PIN_5
#define K_L_T6_GPIO_Port GPIOA
#define K_L_T5_Pin GPIO_PIN_6
#define K_L_T5_GPIO_Port GPIOA
#define K_L_T4_Pin GPIO_PIN_7
#define K_L_T4_GPIO_Port GPIOA
#define K_L_T3_Pin GPIO_PIN_4
#define K_L_T3_GPIO_Port GPIOC
#define K_L_T2_Pin GPIO_PIN_5
#define K_L_T2_GPIO_Port GPIOC
#define K_L_T1_Pin GPIO_PIN_0
#define K_L_T1_GPIO_Port GPIOB
#define K_L_T0_Pin GPIO_PIN_1
#define K_L_T0_GPIO_Port GPIOB
#define K_R_MK10_Pin GPIO_PIN_2
#define K_R_MK10_GPIO_Port GPIOB
#define K_R_BR10_Pin GPIO_PIN_10
#define K_R_BR10_GPIO_Port GPIOB
#define K_R_T7_Pin GPIO_PIN_11
#define K_R_T7_GPIO_Port GPIOB
#define K_R_T6_Pin GPIO_PIN_12
#define K_R_T6_GPIO_Port GPIOB
#define K_R_T5_Pin GPIO_PIN_13
#define K_R_T5_GPIO_Port GPIOB
#define K_R_T4_Pin GPIO_PIN_14
#define K_R_T4_GPIO_Port GPIOB
#define K_R_T3_Pin GPIO_PIN_15
#define K_R_T3_GPIO_Port GPIOB
#define K_R_T2_Pin GPIO_PIN_6
#define K_R_T2_GPIO_Port GPIOC
#define K_R_T1_Pin GPIO_PIN_7
#define K_R_T1_GPIO_Port GPIOC
#define K_R_T0_Pin GPIO_PIN_8
#define K_R_T0_GPIO_Port GPIOC
#define K_R_MK5_Pin GPIO_PIN_9
#define K_R_MK5_GPIO_Port GPIOC
#define K_R_BR5_Pin GPIO_PIN_8
#define K_R_BR5_GPIO_Port GPIOA
#define K_R_MK6_Pin GPIO_PIN_9
#define K_R_MK6_GPIO_Port GPIOA
#define K_R_BR6_Pin GPIO_PIN_10
#define K_R_BR6_GPIO_Port GPIOA
#define K_R_MK7_Pin GPIO_PIN_15
#define K_R_MK7_GPIO_Port GPIOA
#define K_R_BR7_Pin GPIO_PIN_10
#define K_R_BR7_GPIO_Port GPIOC
#define K_R_MK8_Pin GPIO_PIN_11
#define K_R_MK8_GPIO_Port GPIOC
#define K_R_BR8_Pin GPIO_PIN_12
#define K_R_BR8_GPIO_Port GPIOC
#define K_R_MK9_Pin GPIO_PIN_2
#define K_R_MK9_GPIO_Port GPIOD
#define K_R_BR9_Pin GPIO_PIN_4
#define K_R_BR9_GPIO_Port GPIOB
#define K_L_MK0_Pin GPIO_PIN_5
#define K_L_MK0_GPIO_Port GPIOB
#define K_L_BR0_Pin GPIO_PIN_6
#define K_L_BR0_GPIO_Port GPIOB
#define K_L_MK1_Pin GPIO_PIN_7
#define K_L_MK1_GPIO_Port GPIOB
#define K_L_BR1_Pin GPIO_PIN_8
#define K_L_BR1_GPIO_Port GPIOB
#define K_L_MK2_Pin GPIO_PIN_9
#define K_L_MK2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
