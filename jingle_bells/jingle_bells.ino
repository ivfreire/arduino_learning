#include "pitches.h"

/*
  DO  C4
  RE  D4
  MI  E4
  FA  F4
  SOL G4
  LA  A4
  SI  B4
  DO  C5
*/

// notes in the melody:
int melody[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4,

  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4,
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_C4,
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4,
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_E4,

  NOTE_C5, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_A4,
  NOTE_C4, NOTE_A5, NOTE_G4, NOTE_F4, NOTE_C4,
  NOTE_C4, NOTE_A5, NOTE_G4, NOTE_F4, NOTE_D4,
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_C5,

  NOTE_D5, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_F4,
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_C5, NOTE_F4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_A4,

  NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_C5,
  NOTE_C5, NOTE_C5,
  NOTE_B4, NOTE_G4,
  NOTE_F4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 2,
  8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 4, 4,
  
  8, 8, 8, 8, 2,
  8, 8, 8, 8, 2,
  8, 8, 8, 8, 2,
  8, 8, 8, 8, 4, 4,
  
  8, 8, 8, 8, 2,
  8, 8, 8, 8, 2,
  8, 8, 8, 8, 2,
  8, 8, 8, 8, 4, 4,

  8, 8, 8, 8, 2,
  8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 2,
  8, 8, 4, 8, 8, 4,

  8, 8, 8, 8, 4, 4,
  2, 2,
  2, 2,
  1  
};

void setup() {
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(int); thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
