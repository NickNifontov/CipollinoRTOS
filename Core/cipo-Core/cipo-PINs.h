/*
 * cipo-PINs.h
 *
 *  Created on: 21 янв. 2020 г.
 *      Author: Nick Nifontov
 */


#ifndef CIPO_CORE_CIPO_PINS_H_
#define CIPO_CORE_CIPO_PINS_H_

#include "cipo-INCLUDEs.h"

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

#endif /* CIPO_CORE_CIPO_PINS_H_ */
