/*
 * cipo-IWDG.c
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */

#include "cipo.h"

qTask_t IWDGTask;

void Enable_SH_DEBUG(void) {
			//SET_BIT(RCC->APB2ENR, (RCC_APB2ENR_DBGMCUEN));
		    DBGMCU->APB1FZ |= DBGMCU_APB1_FZ_DBG_WWDG_STOP;
		    DBGMCU->APB2FZ = 0xFFFFFFFF;
		    DBGMCU->APB1FZ = 0xFFFFFFFF;
		    DBGMCU->CR |=DBGMCU_CR_DBG_STOP;
		    SET_BIT(DBGMCU->APB1FZ, DBGMCU_APB1_FZ_DBG_IWDG_STOP);
}

void IWDGTask_Callback ( qEvent_t e) {
	LL_IWDG_ReloadCounter(IWDG);
}
