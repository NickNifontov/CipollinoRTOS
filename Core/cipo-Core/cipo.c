/*
 * cipo.c
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */

#include "cipo.h"

// **** QuarkTS - BEGIN **** //
void SetupQuarkTS(void) {
	qSchedulerSetup(NULL, TIMER_TICK, IWDGTask_Callback);

	qSchedulerAdd_Task ( &IWDGTask , IWDGTask_Callback , qLowest_Priority , 1 , qPeriodic , qEnabled , NULL );
	qSchedulerAdd_Task ( &LED_ITask , LED_ITask_Callback , qLowest_Priority , LED_HELLO_INTERVAL , qPeriodic , qEnabled , NULL );
	qSchedulerAdd_Task ( &LED_VTask , LED_VTask_Callback , qLowest_Priority , LED_HELLO_INTERVAL , qPeriodic , qEnabled , NULL );
	qSchedulerAdd_Task ( &LED_ABTask , LED_ABTask_Callback , qLowest_Priority , LED_HELLO_INTERVAL , qPeriodic , qEnabled , NULL );
	qSchedulerAdd_Task ( &LED_TEMPTask , LED_TEMPTask_Callback , qLowest_Priority , LED_HELLO_INTERVAL , qPeriodic , qEnabled , NULL );
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
