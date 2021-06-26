#include "Arduino.h"
#include "State.h"

State::State()
{
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

void update()
{
    _acState = transition.giveState(_acState);
    _acState.execFun();
}