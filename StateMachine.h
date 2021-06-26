#ifndef StateMachine_h
#define StateMachine_h

#include "Arduino.h"
#include "State.h"
#include "Transition.h"

/*
       czerwone->czerw+żółt->ziel->żółte->czerwone
stany    1          2       3     4        1
przejścia:    1-2       2-3      3-4     4-1
*/

class StateMachine
{
private:
  State* _acState;
public:
  StateMachine();
  void addState(State *);
  void addTrans(Transition *);
  void update();
}

#endif
