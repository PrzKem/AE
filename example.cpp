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
