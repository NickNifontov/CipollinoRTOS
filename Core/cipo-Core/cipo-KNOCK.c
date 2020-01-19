/*
 * cipo-KNOCK.c
 *
 *  Created on: 19 янв. 2020 г.
 *      Author: Nick Nifontov
 */

#include "cipo.h"

extern qCoroutineSemaphore_t FreeBuzzer;
qTask_t KNOCK_Task;

void KNOCK(const qIteration_t puls_cnt) {
	qTaskSetIterations(&KNOCK_Task,2+2*puls_cnt);
	qTaskResume(&KNOCK_Task);
}

void KNOCK_Task_Callback ( qEvent_t e) {
	qCoroutineBegin {
		if (e->FirstIteration ) {
			qCoroutineSemaphoreWait(&FreeBuzzer);
		}
		if ((e->FirstIteration ) || (e->LastIteration )) {
			LL_GPIO_ResetOutputPin(GPIOB, BUZZER_Pin);
			qTaskSetTime(&KNOCK_Task,KNOCK_INTERVAL);
		}
		if (e->LastIteration ) {
			qCoroutineSemaphoreSignal(&FreeBuzzer);
		}

		if ((e->FirstIteration!=1) && (e->LastIteration!=1)){
								if (LL_GPIO_IsOutputPinSet(GPIOB, BUZZER_Pin)==1) {
									LL_GPIO_ResetOutputPin(GPIOB, BUZZER_Pin);
									qTaskSetTime(&KNOCK_Task,KNOCK_LENGTH);
								} else {
									LL_GPIO_SetOutputPin(GPIOB, BUZZER_Pin);
									qTaskSetTime(&KNOCK_Task,KNOCK_INTERVAL);
								}
			}

	}qCoroutineEnd;
}
