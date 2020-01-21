/*
 * cipo_Sinus.h
 *
 *  Created on: Jan 21, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_SINUS_H_
#define CIPO_CORE_CIPO_SINUS_H_

#include "cipo.h"

#define TICK_PER_SINUS (uint16_t) (352)
#define TICK_PER_WAVE (uint16_t) (2*TICK_PER_SINUS)

extern volatile uint16_t Sinus_Data[TICK_PER_SINUS];

#endif /* CIPO_CORE_CIPO_SINUS_H_ */
