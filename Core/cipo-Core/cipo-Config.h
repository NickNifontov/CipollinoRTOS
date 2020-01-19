/*
 * cipo-Config.h
 *
 *  Created on: Jan 18, 2020
 *      Author: Nick Nifontov
 */

#ifndef CIPO_CORE_CIPO_CONFIG_H_
#define CIPO_CORE_CIPO_CONFIG_H_

//**** GLOBAL INFO DEFINES --- BEGIN ****//
#define Cipollino_Version 0.1
#define Cipollino_Platform 0.1
//**** GLOBAL INFO DEFINES --- END ****//

//**** LED DEFINES --- BEGIN ****//
#define LED_INTERVAL 0.5
#define LED_HELLO_INTERVAL 0.05
//**** LED DEFINES --- END ****//

//**** IWDG DEFINES --- BEGIN ****//
#define IWDG_INTERVAL 1
//**** IWDG DEFINES --- END ****//

//**** KNOCK DEFINES --- BEGIN ****//
#define KNOCK_INTERVAL 0.01
#define KNOCK_LENGTH 0.15
#define KNOCK_HELLO_PULS 5
//**** KNOCK DEFINES --- END ****//

//**** BUZZER DEFINES --- BEGIN ****//
#define BUZZ_INTERVAL 1.0
#define BUZZ_LENGTH 0.4
#define BUZZ_MAX_LENGTH 120 // in sec
#define BUZZ_MAX_LENGTH_ROLLBACK 600 // in sec
//**** BUZZER DEFINES --- END ****//

#endif /* CIPO_CORE_CIPO_CONFIG_H_ */
