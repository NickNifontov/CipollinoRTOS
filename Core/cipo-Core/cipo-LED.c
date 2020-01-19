/*
 * cipo-LED_I.c
 *
 *  Created on: Jan 19, 2020
 *      Author: Nick Nifontov
 */


#include "cipo.h"

qTask_t LED_Task;

void LED_Task_Callback ( qEvent_t e) {
	static qSTimer_t timeout = QSTIMER_INITIALIZER;

	if (e->FirstCall ) {
		qSTimerSet (& timeout , 1);
	}

	if ( qSTimerExpired (& timeout )){
		qTaskSetTime(&LED_Task,LED_INTERVAL);
		LL_GPIO_ResetOutputPin(GPIOC, LED_V_Pin| LED_I_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, LED_AB_Pin|LED_TEMP_Pin);
		qSTimerDisarm (& timeout );
	}

	if (qSTimerStatus(& timeout )) {
		LL_GPIO_TogglePin(GPIOC, LED_V_Pin| LED_I_Pin);
		LL_GPIO_TogglePin(GPIOB, LED_AB_Pin|LED_TEMP_Pin);
	} else {
		// NOP
	}
}
