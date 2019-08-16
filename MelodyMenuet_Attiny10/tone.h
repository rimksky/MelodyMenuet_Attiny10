/*
 * tone.h
 *
 * Porting: toneSampleSketch on bitDuino10
 *    http://100year.cocolog-nifty.com/blog/2014/08/arduino-f0f0.html
 * modified: 2019/08/16 4:38:26
 *  Author: rimksky@gmail.com
 */ 

#ifndef TONE_H_
#define TONE_H_

#include <avr/interrupt.h>

#if defined(__AVR_ATtiny10__)
void toneCycle(uint8_t _pin, unsigned int cycle);
#else
void tone(uint8_t _pin, unsigned int frequency);
#endif
void noTone(uint8_t _pin);

#ifndef BIT_SET
#define BIT_SET
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#endif

/*************************************************
 * Public Constants
 8MHz cycles ( for attiny10 )
 *************************************************/

#define NOTE_B1 64516
#define NOTE_C2 61538
#define NOTE_CS2 57971
#define NOTE_D2 54794
#define NOTE_DS2 51282
#define NOTE_E2 48780
#define NOTE_F2 45977
#define NOTE_FS2 43010
#define NOTE_G2 40816
#define NOTE_GS2 38461
#define NOTE_A2 36363
#define NOTE_AS2 34188
#define NOTE_B2 32520
#define NOTE_C3 30534
#define NOTE_CS3 28776
#define NOTE_D3 27210
#define NOTE_DS3 25641
#define NOTE_E3 24242
#define NOTE_F3 22857
#define NOTE_FS3 21621
#define NOTE_G3 20408
#define NOTE_GS3 19230
#define NOTE_A3 18181
#define NOTE_AS3 17167
#define NOTE_B3 16194
#define NOTE_C4 15267
#define NOTE_CS4 14440
#define NOTE_D4 13605
#define NOTE_DS4 12861
#define NOTE_E4 12121
#define NOTE_F4 11461
#define NOTE_FS4 10810
#define NOTE_G4 10204
#define NOTE_GS4 9638
#define NOTE_A4 9090
#define NOTE_AS4 8583
#define NOTE_B4 8097
#define NOTE_C5 7648
#define NOTE_CS5 7220
#define NOTE_D5 6814
#define NOTE_DS5 6430
#define NOTE_E5 6069
#define NOTE_F5 5730
#define NOTE_FS5 5405
#define NOTE_G5 5102
#define NOTE_GS5 4813
#define NOTE_A5 4545
#define NOTE_AS5 4291
#define NOTE_B5 4048
#define NOTE_C6 3820
#define NOTE_CS6 3606
#define NOTE_D6 3404
#define NOTE_DS6 3212
#define NOTE_E6 3032
#define NOTE_F6 2863
#define NOTE_FS6 2702
#define NOTE_G6 2551
#define NOTE_GS6 2408
#define NOTE_A6 2272
#define NOTE_AS6 2144
#define NOTE_B6 2024
#define NOTE_C7 1911
#define NOTE_CS7 1804
#define NOTE_D7 1702
#define NOTE_DS7 1607
#define NOTE_E7 1516
#define NOTE_F7 1431
#define NOTE_FS7 1351
#define NOTE_G7 1275
#define NOTE_GS7 1204
#define NOTE_A7 1136
#define NOTE_AS7 1072
#define NOTE_B7 1012
#define NOTE_C8 955
#define NOTE_CS8 901
#define NOTE_D8 851
#define NOTE_DS8 803

#endif /* TONE_H_ */