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

#define CCMRAM __attribute__((section(".ccmram")))

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_ll_adc.h"
#include "stm32f3xx_ll_comp.h"
#include "stm32f3xx_ll_crc.h"
#include "stm32f3xx_ll_dac.h"
#include "stm32f3xx_ll_dma.h"
#include "stm32f3xx_ll_hrtim.h"
#include "stm32f3xx_ll_iwdg.h"
#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_exti.h"
#include "stm32f3xx_ll_cortex.h"
#include "stm32f3xx_ll_utils.h"
#include "stm32f3xx_ll_pwr.h"
#include "stm32f3xx_ll_tim.h"
#include "stm32f3xx_ll_usart.h"
#include "stm32f3xx.h"
#include "stm32f3xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

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
#define CMD_START_STOP_Pin LL_GPIO_PIN_13
#define CMD_START_STOP_GPIO_Port GPIOC
#define CMD_START_STOP_EXTI_IRQn EXTI15_10_IRQn
#define LED_I_Pin LL_GPIO_PIN_14
#define LED_I_GPIO_Port GPIOC
#define LED_V_Pin LL_GPIO_PIN_15
#define LED_V_GPIO_Port GPIOC
#define OSC_IN_Pin LL_GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOF
#define OSC_OUT_Pin LL_GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOF
#define ADC_OC_I_Pin LL_GPIO_PIN_0
#define ADC_OC_I_GPIO_Port GPIOA
#define ADC_OC_V_Pin LL_GPIO_PIN_1
#define ADC_OC_V_GPIO_Port GPIOA
#define TX_Pin LL_GPIO_PIN_2
#define TX_GPIO_Port GPIOA
#define RX_Pin LL_GPIO_PIN_3
#define RX_GPIO_Port GPIOA
#define DAC_V_Pin LL_GPIO_PIN_4
#define DAC_V_GPIO_Port GPIOA
#define ADC_15V_Pin LL_GPIO_PIN_5
#define ADC_15V_GPIO_Port GPIOA
#define DAC_I_Pin LL_GPIO_PIN_6
#define DAC_I_GPIO_Port GPIOA
#define OC_V_Pin LL_GPIO_PIN_7
#define OC_V_GPIO_Port GPIOA
#define OC_I_Pin LL_GPIO_PIN_0
#define OC_I_GPIO_Port GPIOB
#define PWM50HZ_A_Pin LL_GPIO_PIN_1
#define PWM50HZ_A_GPIO_Port GPIOB
#define BUZZER_LEVEL_Pin LL_GPIO_PIN_2
#define BUZZER_LEVEL_GPIO_Port GPIOB
#define LED_TEMP_Pin LL_GPIO_PIN_10
#define LED_TEMP_GPIO_Port GPIOB
#define TEMP_LEVEL_Pin LL_GPIO_PIN_12
#define TEMP_LEVEL_GPIO_Port GPIOB
#define PWM50HZ_B_Pin LL_GPIO_PIN_13
#define PWM50HZ_B_GPIO_Port GPIOB
#define ADC_AB_Pin LL_GPIO_PIN_14
#define ADC_AB_GPIO_Port GPIOB
#define ADC_TEMP_Pin LL_GPIO_PIN_15
#define ADC_TEMP_GPIO_Port GPIOB
#define PWM1_Pin LL_GPIO_PIN_8
#define PWM1_GPIO_Port GPIOA
#define COOLER_PWM_Pin LL_GPIO_PIN_9
#define COOLER_PWM_GPIO_Port GPIOA
#define PWM2_Pin LL_GPIO_PIN_10
#define PWM2_GPIO_Port GPIOA
#define SYNC_CMD_Pin LL_GPIO_PIN_11
#define SYNC_CMD_GPIO_Port GPIOA
#define SYNC_A_Pin LL_GPIO_PIN_12
#define SYNC_A_GPIO_Port GPIOA
#define SYNC_A_EXTI_IRQn EXTI15_10_IRQn
#define DIO_Pin LL_GPIO_PIN_13
#define DIO_GPIO_Port GPIOA
#define CLK_Pin LL_GPIO_PIN_14
#define CLK_GPIO_Port GPIOA
#define PWM_FAULT_Pin LL_GPIO_PIN_15
#define PWM_FAULT_GPIO_Port GPIOA
#define SYNC_AB3_Pin LL_GPIO_PIN_3
#define SYNC_AB3_GPIO_Port GPIOB
#define SYNC_AB3_EXTI_IRQn EXTI3_IRQn
#define LED_AB_Pin LL_GPIO_PIN_4
#define LED_AB_GPIO_Port GPIOB
#define IGLA_CMD_Pin LL_GPIO_PIN_5
#define IGLA_CMD_GPIO_Port GPIOB
#define DRV_SD_Pin LL_GPIO_PIN_6
#define DRV_SD_GPIO_Port GPIOB
#define CMD_START_STOPB7_Pin LL_GPIO_PIN_7
#define CMD_START_STOPB7_GPIO_Port GPIOB
#define CMD_START_STOPB7_EXTI_IRQn EXTI9_5_IRQn
#define CMD_BLOCK_PEREK_Pin LL_GPIO_PIN_8
#define CMD_BLOCK_PEREK_GPIO_Port GPIOB
#define CMD_BLOCK_PEREK_EXTI_IRQn EXTI9_5_IRQn
#define BUZZER_Pin LL_GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
