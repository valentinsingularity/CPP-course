/*
320142
a4_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <string>


class Critter
{
private:
	std::string name;
	int hunger;
	int boredom;
	double height;
	double thirst;

public:
	Critter();
	Critter(std::string);
	Critter(std::string, int ,int ,double=20);
	Critter(std::string, int ,int ,double, double);
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	int getHunger();
	void print();
};
