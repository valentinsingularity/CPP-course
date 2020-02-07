/*
320142
a4_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <string> 


class Critter
{
private: 
	std::string name;
	double hunger;
	int boredom;
	double height;

public: 
    Critter();
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    int getHunger();
	void print();
};

