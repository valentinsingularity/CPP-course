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
    char opt;
    cout<<"Insert option:\n";
    cin>>opt;
    while(opt!='q')
{   

if(opt=='w') 
{
	Wizard* wi = new Wizard;
    wi->Wizard::hover();
    delete wi;
}
    
if(opt=='1') 
{
	Dragon* d = new Dragon;
    d->Dragon::fly();
    delete d;
}    

if(opt=='2') 
{
	Werewolf* ww = new Werewolf;
    ww->Werewolf::hunger();
    delete ww;
}

cout<<"Insert option:\n";
cin>>opt;
}
    
    return 0;
} 
