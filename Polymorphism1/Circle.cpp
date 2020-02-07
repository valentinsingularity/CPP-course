/*
320142
a9_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <iostream>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * 3.141593;
}

double Circle::calcPerimeter() const {
	std::cout << "calcPerimeter of Circle...";
	return radius * 2 * 3.141593;
}
