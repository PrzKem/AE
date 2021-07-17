#include "StateMachine.h"

void swiec(int kolor)
{
    digitalWrite(led_czerw, LOW);
    digitalWrite(led_zolty, LOW);
    digitalWrite(led_ziel, LOW);
    delay(1);

    digitalWrite(kolor, HIGH);
}

void swiec(int kolor, int kolor2)
{
    digitalWrite(led_czerw, LOW);
    digitalWrite(led_zolty, LOW);
    digitalWrite(led_ziel, LOW);
    delay(1);
    
    digitalWrite(kolor, HIGH);
    digitalWrite(kolor2, HIGH);
}


StateMachine sm;

State czerw;
State czerw_zolty; 
State zolty;
State ziel;

Transition t_czerw_zol(&czerw, &czerw_zolty);
Transition t_ziel(&czerw_zolty, &ziel);
Transition t_zolty(&ziel, &zolty);
Transition t_czerw(&zolty, &czerw);

void setup()
{
    
    czerw.addFunc(swiec(led_czerw));
    czerw_zol.addFunc(swiec(led_zolty, led_czerw));
    ziel.addFunc(swiec(led_ziel));
    zolty.addFunc(swiec(led_zolty));

    sm.addTrans(t_czerw);
    sm.addTrans(t_czerw_zol);
    sm.addTrans(t_ziel);
    sm.addTrans(t_zolty);
    
}

void loop()
{
    sm.update();
    delay(1000); //ms
}