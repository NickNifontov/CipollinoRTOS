/*
 * cipo-LED_I.h
 *
 *  Created on: Jan 19, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_LED_V_H_
#define CIPO_CORE_CIPO_LED_V_H_

#include "cipo.h"
#include "QuarkTS.h"
#include "stm32f3xx_ll_gpio.h"

extern qTask_t LED_VTask;

void LED_VTask_Callback ( qEvent_t e);


#endif /* CIPO_CORE_CIPO_LED_I_H_ */
