/*
 * cipo-LED_I.h
 *
 *  Created on: Jan 19, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_LED_H_
#define CIPO_CORE_CIPO_LED_H_

#include "cipo.h"

extern qTask_t LED_Task;

void LED_Task_Callback ( qEvent_t e);


#endif /* CIPO_CORE_CIPO_LED_I_H_ */
