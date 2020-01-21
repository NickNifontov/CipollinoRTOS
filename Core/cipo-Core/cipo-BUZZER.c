/*
 * cipo-KNOCK.c
 *
 *  Created on: 19 янв. 2020 г.
 *      Author: Nick Nifontov
 */

#include "cipo.h"

extern qCoroutineSemaphore_t FreeBuzzer;
qTask_t BUZZER_Task;
qTask_t BUZZER_Rollback_Task;

void BUZZER_Rollback_Task_Callback ( qEvent_t e) {
	BuzzOn();
}

void BuzzOn(void) {
	if (qTaskIsEnabled(&BUZZER_Task)!=1) {
		qTaskSetIterations(&BUZZER_Task,2+2*BUZZ_MAX_LENGTH);
		qTaskSetIterations(&BUZZER_Rollback_Task,1);
		qTaskSuspend(&BUZZER_Rollback_Task);
		qTaskResume(&BUZZER_Task);
	}
}

void BuzzStop(void){
	qTaskSuspend(&BUZZER_Task);
	qTaskSuspend(&BUZZER_Rollback_Task);

	KNOCK(5);
}

void BUZZER_Task_Callback ( qEvent_t e){
	qCoroutineBegin {
		if (e->FirstIteration) {
			qCoroutineSemaphoreWait(&FreeBuzzer);
			qTaskSuspend(&BUZZER_Rollback_Task);
		}

		if ((e->FirstIteration ) || (e->LastIteration )) {
					LL_GPIO_ResetOutputPin(GPIOB, BUZZER_Pin);
					qTaskSetTime(&BUZZER_Task,BUZZ_INTERVAL);
		}

		if (e->LastIteration ) {
			qTaskResume(&BUZZER_Rollback_Task);
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
