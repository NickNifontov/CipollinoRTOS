/*
 * cipo.h
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_H_
#define CIPO_CORE_CIPO_H_

#include "cipo-Config.h"
#include "cipo-IWDG.h"

#include "cipo-LED_I.h"
#include "cipo-LED_V.h"
#include "cipo-LED_AB.h"
#include "cipo-LED_TEMP.h"

#include "main.h"

// **** QuarkTS - BEGIN **** //
#include "QuarkTS.h"

#define TIMER_TICK 0.001 /* 1 ms */

void SetupQuarkTS(void);
void RunQuarkTS(void);
// **** QuarkTS - END **** //


// **** GLOBAL STATE - BEGIN **** //
// **** GLOBAL STATE - END **** //


#endif /* CIPO_CORE_CIPO_H_ */
