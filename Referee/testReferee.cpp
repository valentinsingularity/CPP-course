/*
320142
a6_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"
using namespace std;

int main()
{	
    int i;
//    Player *pp1,*pp2,*pp3;
    Referee ref("Mister","Referee","1950.05.06","Bremen","English",100);
	Player p1("Roy","Obern","1989.02.02","London","Vietnamese",20,33,"goalkeeper",0,"left");
	Player p2("Maria","Nova","1995.04.09","Paris","English",7,10,"defender",5,"right");
	Player p3("Alex","Ereno","1994.09.08","London","Hungarian",8,19,"midfielder",24,"right");	
	p1.changeLocation("Bremen");
//	*pp1=p1;
//	*pp2=p2;
//	*pp3=p3;
	
//	ref.Referee::addToYellowCardList(pp1);
//	ref.Referee::addToYellowCardList(pp3);
//	ref.Referee::addToRedCardList(pp2);
//	ref.Referee::addToYellowCardList(pp1);

    cout<<"Players with yellow cards: "<<endl;
    for(i=0;i<ref.getYellowCardCount();i++) (*(ref.getYellowCardList()+i))->Player::print();
    cout<<"Players with red cards: "<<endl;
    for(i=0;i<ref.getRedCardCount();i++) (*(ref.getRedCardList()+i))->print();
			
	return 0;
}
