#include "Arduino.h"
#include "StateMachine.h"

StateMachine::StateMachine()
{
  _acState = nullptr;
  _acTransition = nullptr;
}

void StateMachine::addTrans(Transition *newTrans)
{
  Transition *startPoint = nullptr;
  if(pierwszy)
  {
    _acTransition = newTrans;
  }
  else
  {
    startPoint = _acTransition;
    while(_acTransition->next != nullptr)
    {
      _acTransition = _acTransition->next;
    }
    _acTransition->next = newTrans;
  }
}

void StateMachine::update()
{
  _acTransition = _acTransition -> next;
  _acState = _acTransition -> _prevState;
  _acState->execFunc();
}
