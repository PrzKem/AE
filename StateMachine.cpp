#include "Arduino.h"
#include "StateMachine.h"

StateMachine::StateMachine()
{
//constructor
}

void StateMachine::begin(int p1, int p2, int p3)
{
  _pin1 = p1;
  _pin2 = p2;
  _pin3 = p3;

  _stan = 0;

  pinMode(_pin1, OUTPUT);
  pinMode(_pin2, OUTPUT);
  pinMode(_pin3, OUTPUT);
}

void StateMachine::changeStatus()
{
  _stan++;

  if(_stan>4)
    _stan = 1;

  updatePins();
}

void StateMachine::updatePins()
{
  switch (_stan) {
    case 1:
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin3, LOW);
      break;
    case 2:
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin3, LOW);
      break;
    case 3:
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin3, HIGH);
      break;
    case 4:
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin3, LOW);
      break;
  }

  delay(1000);
}
