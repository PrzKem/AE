#include "StateMachine.h"

StateMachine sm;
//enter your pins here
const int pin1 = ;
const int pin2 = ;
const int pin3 = ;

void setup()
{
  sm.begin(pin1, pin2, pin3);
}

void loop()
{
  sm.updatePins();
}
