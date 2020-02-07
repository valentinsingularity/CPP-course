/*
320142
a9_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public virtual Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double radius;
};

#endif
