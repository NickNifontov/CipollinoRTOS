/*
 * cipo.c
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */
#include "cipo.h"

// **** Buzzer - BEGIN **** //
qCoroutineSemaphore_t FreeBuzzer; // Semaphore for Buzzer resource
// **** Buzzer - END **** //


// **** QuarkTS - BEGIN **** //
void SetupQuarkTS(void) {
	qSchedulerSetup(NULL, TIMER_TICK, IWDGTask_Callback);

	qSchedulerAdd_Task ( &IWDGTask , IWDGTask_Callback , qLowest_Priority , IWDG_INTERVAL , qPeriodic , qEnabled , NULL );

	qSchedulerAdd_Task ( &LED_Task , LED_Task_Callback , qLowest_Priority , LED_HELLO_INTERVAL , qPeriodic , qEnabled , NULL );

	qSchedulerAdd_Task ( &KNOCK_Task , KNOCK_Task_Callback , qLowest_Priority , KNOCK_INTERVAL , 2+2*KNOCK_HELLO_PULS , qEnabled , NULL );

	qSchedulerAdd_Task ( &BUZZER_Task , BUZZER_Task_Callback , qLowest_Priority , KNOCK_INTERVAL , 4 , qDisabled , NULL ); // One-pulse buzz
	qSchedulerAdd_Task ( &BUZZER_Rollback_Task , BUZZER_Rollback_Task_Callback , qLowest_Priority , BUZZ_MAX_LENGTH_ROLLBACK , 1 , qDisabled , NULL ); // Disabled


	// Free Buzzer Resource
	qCoroutineSemaphoreInit(&FreeBuzzer,0);
	qCoroutineSemaphoreSignal(&FreeBuzzer);
}

void RunQuarkTS(void) {

	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk |
	                  SysTick_CTRL_TICKINT_Msk;

	qSchedulerRun();
}

/*void IdleTask_Callback ( qEvent_t e ) {
	//
}*/
// **** QuarkTS - END **** //
