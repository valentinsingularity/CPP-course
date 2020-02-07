/*
320142
a4_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter(): name("critter"), hunger(0), boredom(0), height(10), thirst(0)  {
	cout<<"The first constructor is running."<<endl;
}

Critter::Critter(string a): name(a), hunger(0), boredom(0), height(10), thirst(0) {
	cout<<"The second constructor is running."<<endl;
}

Critter::Critter(string a, int b ,int c ,double d) {
    cout<<"The third constructor is running."<<endl;
    name=a;
    hunger=b;
    boredom=c;
    height = d;
    thirst=b;
}

Critter::Critter(string a, int b ,int c ,double d, double e) {
    cout<<"The fifth constructor is running."<<endl;
    name=a;
    hunger=b;
    boredom=c;
    height = d;
    thirst=e;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ", my boredom is " 
	<< boredom <<" my height is " << height <<" and my thirst is " << thirst << endl;
}

int Critter::getHunger() {
	return hunger;
}
