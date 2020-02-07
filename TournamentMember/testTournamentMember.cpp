/*
320142
a6_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"
using namespace std;

int main(){
	TournamentMember member1("John","Marshall","1991.07.22","Paris","american",30);
	member1.TournamentMember::print();
	
	TournamentMember member2("Xiao","Niung","1993.01.09","Madrid","chinese",15);
	member2.TournamentMember::print();
	
	return 0;
}
