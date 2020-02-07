/*
320142
a5_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(){
	height=width=depth=0;
}

Box::Box(double h, double w, double d){
	height=h;
	width=w;
	depth=d;
}

Box::Box(const Box& src) {
	height=src.height;
	width=src.width;
	depth=src.depth;
}

Box::~Box() { }

void Box::setHeight(double newheight){
	height=newheight;
}
	
void Box::setWidth(double newwidth){
	width=newwidth;
}

void Box::setDepth(double newdepth){
	depth=newdepth;
}

double Box::getHeight(){
	return height;
}

double Box::getWidth(){
	return width;
}

double Box::getDepth(){
	return depth;
}

double Box::getVolume(){
	return height*width*depth;
}
