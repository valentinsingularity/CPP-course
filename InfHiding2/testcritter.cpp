/*
320142
a4_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

int main()
{
	string str2="critter2";
	string str3="critter3";
	string str4="critter4";
	
	Critter c1;
	Critter c2(str2);
	Critter c3(str3,3,14,7.8);
	Critter c4(str4,3,14);
    Critter c5(str2,7,9,3.5,9.9);

    c1.setHunger(3);
    c2.setHunger(3);

    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}
