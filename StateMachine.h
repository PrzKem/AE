#ifndef StateMachine_h
#define StateMachine_h

#include "Arduino.h"

/*
Stan: 1             2          3        4       1
   czerwone->czerwone+zolte->zielone->zolte->czerwone
*/

class StateMachine
{
private:
  int _pin1;
  int _pin2;
  int _pin3;
  int _stan;
  void updatePins();
public:
  StateMachine();
  void begin(int, int, int);
  void changeStatus();
}

#endif
