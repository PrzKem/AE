#include "State.h"

void func(void* func_to_exec)
{
  Serial.println("Func 1");
  func_to_exec;
}

void func2()
{
  Serial.println("Func 2");
  //cos tam sie robi
}

void func3()
{
  Serial.println("Func 3");
  //tu tez sie cos robi
}

void main()
{
  int i=0;
  State stany[3];
  state.addFunc(func2);
  state[1].addFunc(func3);
  state[2].addFunc(func2);

  if(i==1)
  {
    func(func2);
  }
  else
  {
    func(func3);
  }
  return 0;
}

//result:
//Func 1
//Func 3
