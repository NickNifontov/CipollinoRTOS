/*
 * cipo-KNOCK.c
 *
 *  Created on: 19 янв. 2020 г.
 *      Author: Nick Nifontov
 */

#include "cipo.h"

extern qCoroutineSemaphore_t FreeBuzzer;
qTask_t BUZZER_Task;

void BuzzOn(void) {
	qTaskSetIterations(&BUZZER_Task,2+2*BUZZ_MAX_LENGTH);
	qTaskResume(&BUZZER_Task);
}

void BuzzReset(void) {
	//
}

void BuzzStop(void){
	qTaskSuspend(&BUZZER_Task);
}

void BUZZER_Task_Callback ( qEvent_t e){
	qCoroutineBegin {
		if (e->FirstIteration) {
			qCoroutineSemaphoreWait(&FreeBuzzer);
		}

		if ((e->FirstIteration ) || (e->LastIteration )) {
					LL_GPIO_ResetOutputPin(GPIOB, BUZZER_Pin);
					qTaskSetTime(&BUZZER_Task,BUZZ_INTERVAL);
		}

		if (e->LastIteration ) {
			qCoroutineSemaphoreSignal(&FreeBuzzer);
		}

		if ((e->FirstIteration!=1) && (e->LastIteration!=1)){
								if (LL_GPIO_IsOutputPinSet(GPIOB, BUZZER_Pin)==1) {
									LL_GPIO_ResetOutputPin(GPIOB, BUZZER_Pin);
									qTaskSetTime(&BUZZER_Task,BUZZ_INTERVAL);
								} else {
									LL_GPIO_SetOutputPin(GPIOB, BUZZER_Pin);
									qTaskSetTime(&BUZZER_Task,BUZZ_LENGTH);
								}
			}

	}qCoroutineEnd;
}
