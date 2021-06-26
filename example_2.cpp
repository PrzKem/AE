void swiec(kolor)
{
    digitalWrite(kolor, HIGH);
}

void main()
{
    StateMachine sm;
    State czerw;
    State czerw_zolty; ...
    Transition t_czerw_zol(&czerw, &czerw_zolty);

    czerw.addFunc(swiec(led_czerw));
    czerw_zol.addFunc(swiec(led_zolty)); ..

    sm.addState(czerwone);
    sm.addState(czerw_zol); ...

    sm.addTrans(t_czerw_zol)

    while(true)
    {
        sm.update();
        wait(1000); //ms
    }
    return 0;
}