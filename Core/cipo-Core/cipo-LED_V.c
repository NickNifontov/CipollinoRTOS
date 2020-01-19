/*
 * cipo-LED_I.c
 *
 *  Created on: Jan 19, 2020
 *      Author: Nick Nifontov
 */


#include "cipo.h"

qTask_t LED_VTask;

void LED_VTask_Callback ( qEvent_t e) {
	static qSTimer_t timeout = QSTIMER_INITIALIZER;

	if (e->FirstCall ) {
		qSTimerSet (& timeout , 2);
	}

	if ( qSTimerExpired (& timeout )){
		qTaskSetTime(&LED_VTask,LED_INTERVAL);
		LL_GPIO_ResetOutputPin(GPIOC, LED_V_Pin);
		qSTimerDisarm (& timeout );
	}

	if (qSTimerStatus(& timeout )) {
		LL_GPIO_TogglePin(GPIOC, LED_V_Pin);
	} else {
		// NOP
	}
}
