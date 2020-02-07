/*
320142
a9_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) 
					: Area(n), Rectangle(n, a, a) {
	side = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return Rectangle::calcArea();
}

double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return Rectangle::calcPerimeter();
}
