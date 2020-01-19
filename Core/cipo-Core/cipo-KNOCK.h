/*
 * cipo-KNOCK.h
 *
 *  Created on: 19 янв. 2020 г.
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_KNOCK_H_
#define CIPO_CORE_CIPO_KNOCK_H_

#include "cipo.h"

extern qTask_t KNOCK_Task;

void KNOCK(const qIteration_t puls_cnt);
void KNOCK_Task_Callback ( qEvent_t e);

#endif /* CIPO_CORE_CIPO_KNOCK_H_ */
