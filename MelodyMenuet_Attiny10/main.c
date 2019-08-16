/*
 * MelodyMenuet_Attiny10\main.c
 *
 * Created: 2019/08/15 15:16:52
 * Author : rimksky@gmail.com
 */ 

#if defined(__AVR_ATtiny10__)
#define F_CPU 8000000UL
#endif

#include <avr/sleep.h>
#include <avr/interrupt.h>

#include "tone.h"
#include "delay.h"
#include "melody.h"

#ifndef BIT_SET
#define BIT_SET
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#endif

#define SPK 2

int main(void)
{
	
#if defined(__AVR_ATtiny10__)
	// set clock internal 8MHz
	CCP = 0xd8;
	CLKMSR = 0x00;
	CCP = 0xd8;
	CLKPSR = 0x00;
#endif

	set_sleep_mode(SLEEP_MODE_PWR_DOWN);
	sei();

	// iterate over the notes of the melody:
	for (int thisNote = 0; thisNote < (sizeof(noteDurations)>>1); thisNote++) {
		unsigned int noteDuration = noteDurations[thisNote];
		toneCycle(SPK, melody[thisNote]);
		// to distinguish the notes, set a minimum time between them.
		// the note's duration + 30% seems to work well:
		delay(noteDuration);
		// stop the tone playing:
		noTone(SPK);
		delay(noteDuration>>2);
	}
	
	sleep_mode();	
	return 0;
}
