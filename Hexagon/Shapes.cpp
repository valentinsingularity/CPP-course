/*
320142
a6_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Hexagon::Hexagon() : RegularPolygon("Hexagon",0,0,6){
   side=10;
   color="black";	
}

Hexagon::Hexagon(const std::string& n, double nx, double ny, double nside,const string& ncolor) : RegularPolygon(n,nx,ny,6) {
	side=nside;
	color=ncolor;
}

Hexagon::Hexagon(const Hexagon& src) : RegularPolygon("", 0, 0, 6) {
	name=src.name;
	x=src.x;
	y=src.y;
	side=src.side;
	color=src.color;
}

Hexagon::~Hexagon() {}

void Hexagon::setSide(int newside){
    side=newside;	
}

void Hexagon::setColor(const std::string& newcolor){
	color=newcolor;
}

double Hexagon::getSide(){
	return side;
}

const string& Hexagon::getColor(){
	return color;
}

double Hexagon::perimeter(){
	return 6*side;
}

double Hexagon::area(){
	return (3/2)*sqrt(3)*side*side;
}		

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

