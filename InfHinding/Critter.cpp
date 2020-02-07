/*
320142
a4_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter()
{
	hunger=0.3;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = (double)newhunger/10;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << getHunger() << "." << endl;
}

int Critter::getHunger() {
	return (int)10*hunger;
}

