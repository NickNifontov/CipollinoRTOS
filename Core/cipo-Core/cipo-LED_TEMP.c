/*
 * cipo-LED_I.c
 *
 *  Created on: Jan 19, 2020
 *      Author: Nick Nifontov
 */


#include "cipo.h"

qTask_t LED_TEMPTask;

void LED_TEMPTask_Callback ( qEvent_t e) {
	static qSTimer_t timeout = QSTIMER_INITIALIZER;

	if (e->FirstCall ) {
		qSTimerSet (& timeout , 2);
	}

	if ( qSTimerExpired (& timeout )){
		qTaskSetTime(&LED_TEMPTask,LED_INTERVAL);
		LL_GPIO_ResetOutputPin(GPIOB, LED_TEMP_Pin);
		qSTimerDisarm (& timeout );
	}

	if (qSTimerStatus(& timeout )) {
		LL_GPIO_TogglePin(GPIOB, LED_TEMP_Pin);
	} else {
		// NOP
	}
}
