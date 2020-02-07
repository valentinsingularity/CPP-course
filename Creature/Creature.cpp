/*
320142
a5_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;


Creature::Creature(): distance(10){
	cout<<"Creating a creature! \n";
}

Creature::~Creature() {
	cout<<"Destroying a creature!\n";
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Wizard::Wizard() : distFactor(3){
	cout<<"Creating an wizard!\n";
}

Wizard::~Wizard() {
	cout<<"Destroying an wizard!\n";
}

void Wizard::hover() const
{
    cout << "Hovering " << (distFactor * distance) << " meters!\n";
}

Dragon::Dragon() : fly_distance(400){
	cout<<"Creating a dragon!\n";
}

Dragon::~Dragon() {
	cout<<"Destroying a dragon!\n";
}

void Dragon::fly() const
{
	cout<<"Flying "<< fly_distance<<" meters!\n";
}

Werewolf::Werewolf() : hungerFactor(5){
	cout<<"Creating a werewolf!\n";
}

Werewolf::~Werewolf() {
	cout<<"Destroying a werewolf!\n";
}

void Werewolf::hunger() const
{
	cout<<"Having a hunger of "<< hungerFactor*distance <<" humans, after running "<<distance<<" meters!\n";
}
