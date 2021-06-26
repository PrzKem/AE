#include "TransitionManager.h"
#include "Arduino.h"
#include "State.h"

TransitionManager::TransitionManager(State* prevState, State* newState)
{
    _newState = newState;
    _prevState = prevState;
}

void TransitionManager::add(State* prevState, State* newState)

State* TransitionManager::giveState(State* prevState)
{
    if(prevState = _prevState)
        return _newState;
    else
        return nullptr;
}