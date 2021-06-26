#ifndef TransitionManager_h
#define TransitionManager_h

#include "Arduino.h"
#include "State.h"

struct Transition
{
    State* _newState;
    State* _prevState;
    Transition* next;
}

class TransitionManager
{
private:
    Transition* startTrans;
public:
    TransitionManager();
    void add(State* prevState, State* newState);
    State* giveState(State* prevState);
}
#endif