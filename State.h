#ifndef State_h
#define State_h

#include "Arduino.h"


class State
{
private:
  void* func_to_exec;
public:
  State();
  int addFunc(void *);
  void execFun();
}

#endif
