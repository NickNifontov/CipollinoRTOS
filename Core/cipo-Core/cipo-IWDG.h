/*
 * cipo-IWDG.h
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_IWDG_H_
#define CIPO_CORE_CIPO_IWDG_H_

#include "cipo.h"

extern qTask_t IWDGTask;

void IWDGTask_Callback ( qEvent_t e);
void Enable_SH_DEBUG(void);

#endif /* CIPO_CORE_CIPO_IWDG_H_ */
