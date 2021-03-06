/**
 *
 * @file boot.c
 *
 * @date May 24, 2017
 * @author hamster
 *
 */

#ifndef BOOT_H_
#define BOOT_H_

#define VERSION "1.02"

extern volatile bool shoutsAllowed;
extern volatile bool menuDisplayed;

APP_TIMER_DEF(gameTimerID);
void timeout_handler(void * p_context);

extern volatile uint16_t timerCounter;
extern volatile bool partyMode;
extern volatile bool sheepMode;

void showStandby(void);
void drawStandby(void);
void firstSetup(void);

void games(void);
void extras(void);
void nearby(void);
void settings(void);
void credits(void);

#endif /* BOOT_H_ */
