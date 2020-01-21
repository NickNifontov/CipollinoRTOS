/*
 * cipo_INC.h
 *
 *  Created on: 21 янв. 2020 г.
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_INC_H_
#define CIPO_CORE_CIPO_INC_H_

#define CCMRAM __attribute__((section(".ccmram")))
#define CCMRAMDATA __attribute__((section(".ccmidata")))

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

#endif /* CIPO_CORE_CIPO_INC_H_ */
