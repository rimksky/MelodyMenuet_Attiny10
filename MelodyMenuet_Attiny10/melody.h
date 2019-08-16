/*
 * melody.h
 *
 * Porting: toneSampleSketch on bitDuino
 *   [bitDuino by @maris-HY]: https://github.com/maris-HY/bitDuino
 *   [ToneSmapleSketch]: http://100year.cocolog-nifty.com/blog/2014/09/bitduino-21ab.html
 * modified: 2019/08/16 4:38:26
 *  Author: rimksky@gmail.com
 */ 

#ifndef MELODY_H_
#define MELODY_H_

/********************************
 J.S Bach Menuet  1725
 ********************************/

// notes in the melody:
const unsigned int melody[] = {
    NOTE_D5, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_G4
  , NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_FS5, NOTE_G5, NOTE_G4, NOTE_G4
  , NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4
  , NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4
  , NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_G4
  , NOTE_A4,

    NOTE_D5, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_G4
  , NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_FS5, NOTE_G5, NOTE_G4, NOTE_G4
  , NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4
  , NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4
  , NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_FS4
  , NOTE_G4
};
// note durations: milli seconds 
const unsigned int noteDurations[] = {
    256, 128, 128, 128, 128, 256, 256, 256  
  , 256, 128, 128, 128, 128, 256, 256, 256
  , 256, 128, 128, 128, 128
  , 256, 128, 128, 128, 128
  , 256, 128, 128, 128, 128
  , 768,

    256, 128, 128, 128, 128, 256, 256, 256
  , 256, 128, 128, 128, 128, 256, 256, 256
  , 256, 128, 128, 128, 128
  , 256, 128, 128, 128, 128
  , 256, 128, 128, 128, 128
  , 1536
};

#endif /* MELODY_H_ */
