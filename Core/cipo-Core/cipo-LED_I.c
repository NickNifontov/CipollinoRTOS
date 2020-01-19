/*
 * cipo-LED_I.c
 *
 *  Created on: Jan 19, 2020
 *      Author: Nick Nifontov
 */


#include "cipo.h"

qTask_t LED_ITask;

void LED_ITask_Callback ( qEvent_t e) {
	static qSTimer_t timeout = QSTIMER_INITIALIZER;

	if (e->FirstCall ) {
		qSTimerSet (& timeout , 2);
	}

	if ( qSTimerExpired (& timeout )){
		qTaskSetTime(&LED_ITask,LED_INTERVAL);
		LL_GPIO_ResetOutputPin(GPIOC, LED_I_Pin);
		qSTimerDisarm (& timeout );
	}

	if (qSTimerStatus(& timeout )) {
		LL_GPIO_TogglePin(GPIOC, LED_I_Pin);
	} else {
		// NOP
	}
}
