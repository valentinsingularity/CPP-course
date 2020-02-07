/*
320142
a7_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

ostream& operator <<(ostream& out, const Fraction &f)
{
	if(f.den==0) 
	{
		out << "invalid" <<endl;
		return out;
	} 
	out << f.num << "/" << f.den << endl;
	return out;
}

istream& operator >>(istream& in,Fraction &f)
{
	in >> f.num >> f.den;
    return in;
}

Fraction operator *(const Fraction f1, const Fraction f2)
{
	Fraction f(f1.num*f2.num, f1.den*f2.den);
	return f;
}

Fraction operator /(const Fraction f1, const Fraction f2)
{
	Fraction f(f1.num*f2.den, f1.den*f2.num);
	return f;
}
