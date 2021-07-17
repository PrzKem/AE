#ifndef StateMachine_h
#define StateMachine_h

#include "Arduino.h"
#include "State.h"

struct Transition
{
    State* _newState;
    State* _prevState;
    Transition* next;

    Transition(State* nS, State* pS)
    {
      _newState = nS;
      _prevState = pS;
    }
}


/*
       czerwone->czerw+żółt->ziel->żółte->czerwone
stany    1          2       3     4        1
przejścia:    1-2       2-3      3-4     4-1
*/

class StateMachine
{
private:
  State* _acState;
  Transition* _acTransition;
public:
  StateMachine();
  void addTrans(Transition *);
  void update();
}

#endif
