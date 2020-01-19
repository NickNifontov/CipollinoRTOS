/*
 * cipo-KNOCK.h
 *
 *  Created on: 19 янв. 2020 г.
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_BUZZER_H_
#define CIPO_CORE_CIPO_BUZZER_H_

#include "cipo.h"

extern qTask_t BUZZER_Task;
extern qTask_t BUZZER_Rollback_Task;

void BuzzOn(void);
void BuzzStop(void);

void BUZZER_Task_Callback ( qEvent_t e);
void BUZZER_Rollback_Task_Callback ( qEvent_t e);

#endif /* CIPO_CORE_CIPO_KNOCK_H_ */
