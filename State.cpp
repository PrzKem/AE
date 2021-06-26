#include "Arduino.h"
#include "State.h"

State::State()
{
  func_to_exec = nullptr;
}

/*
Return:
0 -> OK
-1 -> pointer filled
*/

int addFunc(void *newFunc)
{
    if(func_to_exec == nullptr)
    {
        func_to_exec = newFunc;
        return 0;
    }
    else
        return -1;
}

void execFun()
{
    func_to_exec;
}

//stany: a,b,c
//przejscia: a->b, b->c, c->b

class Transition()
{
private:
    State prev;
    State next;
public:
    Transition();
    void addState(State, State);
    
}