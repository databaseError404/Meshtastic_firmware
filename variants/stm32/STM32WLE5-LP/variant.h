/*
Wio-E5 mini (formerly LoRa-E5 mini)
https://www.seeedstudio.com/LoRa-E5-mini-STM32WLE5JC-p-4869.html
https://www.seeedstudio.com/LoRa-E5-Wireless-Module-p-4745.html
*/

/*
This variant is a work in progress.
Do not expect a working Meshtastic device with this target.
*/

#ifndef _VARIANT_STM32WLE5_LP_
#define _VARIANT_STM32WLE5_LP_

#define USE_STM32WLx

#define LED_PIN PA0 
#define LED_STATE_ON 0

#define _VARIANT_XTAL_
#define STM32WLx_MAX_POWER 14 //LowPower OUT

#define STM32WLE5_LP

#endif
