/*
320142
a7_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_
#include<iostream>

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend std::ostream& operator <<(std::ostream& out, const Fraction&);
	friend std::istream& operator >>(std::istream& in, Fraction&);
    friend Fraction operator *(const Fraction, const Fraction);
    friend Fraction operator /(const Fraction, const Fraction);
};


#endif /* FRACTION_H_ */
