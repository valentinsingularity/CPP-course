/*
320142
a6_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
using namespace std;

int main()
{
	Hexagon gray_hex("Hexagon1",0,0,9,"gray");
	Hexagon red_hex("Hexagon2",0,0,6,"red");
	
	cout<<"The perimeter of the gray hexagon is: "<<gray_hex.Hexagon::perimeter()<<" and its area is: "<<gray_hex.Hexagon::area()<<endl;
	cout<<"The perimeter of the red hexagon is: "<<red_hex.Hexagon::perimeter()<<" and its area is: "<<red_hex.Hexagon::area()<<endl;
	
	return 0;
}
