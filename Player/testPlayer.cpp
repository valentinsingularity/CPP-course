/*
320142
a6_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"
using namespace std;

int main()
{	 
	Player p1("Roy","Obern","1989.02.02","London","Vietnamese",20,33,"goalkeeper",0,"left");
	Player p2("Maria","Nova","1995.04.09","Paris","English",7,10,"defender",5,"right");
	Player p3("Alex","Ereno","1994.09.08","London","Hungarian",8,19,"midfielder",24,"right");
		
	p2.Player::incrementNrGoals();
	p1.Player::incrementNrGoals();
	p1.changeLocation("Bremen");
	
	p1.Player::print();
	p2.Player::print();
	p3.Player::print();
	
	return 0;
}

