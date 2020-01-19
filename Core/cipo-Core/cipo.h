/*
 * cipo.h
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_H_
#define CIPO_CORE_CIPO_H_

#include "cipo-Config.h"
#include "main.h"

// **** QuarkTS - BEGIN **** //
#include "QuarkTS.h"

#define TIMER_TICK 0.001 /* 1 ms */

void SetupQuarkTS(void);
void RunQuarkTS(void);
// **** QuarkTS - END **** //

// **** Buzzer - BEGIN **** //
extern qCoroutineSemaphore_t FreeBuzzer;
// **** Buzzer - END **** //

// **** QuarkTS TASK List - BEGIN **** //
#include "cipo-IWDG.h"
#include "cipo-LED.h"
#include "cipo-KNOCK.h"
#include "cipo-BUZZER.h"
// **** QuarkTS TASK List - END **** //


// **** GLOBAL STATE - BEGIN **** //
// **** GLOBAL STATE - END **** //


#endif /* CIPO_CORE_CIPO_H_ */
