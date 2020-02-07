/*
320142
a5_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{ 
    Creature c;
    c.run();

    Wizard wi;
    wi.run();
    wi.hover();
    
    Dragon d1;
    d1.run();
    d1.fly();

    Dragon d2;
    d2.run();
    d2.fly();
    
    Werewolf ww1;
    ww1.run();
    ww1.hunger();
    
    Werewolf ww2;
    ww2.run();
    ww2.hunger();
    
    return 0;
} 
