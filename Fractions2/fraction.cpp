/*
320142
a7_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

int GCD(int a,int b)
{
	int t;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int LCM(int a,int b)
{
	return a*b/GCD(a,b);
}

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = GCD(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
	if(den<0)
	{
		num*=-1;
		den*=-1;
	}
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

Fraction operator +(const Fraction f1, const Fraction f2)
{
	int lcm=LCM(f1.den,f2.den);
	Fraction f(f1.num*lcm/f1.den + f2.num*lcm/f2.den , lcm );
	return f;
}

Fraction operator -(const Fraction f1, const Fraction f2)
{
	int lcm=LCM(f1.den,f2.den);
	Fraction f(f1.num*lcm/f1.den - f2.num*lcm/f2.den , lcm );
	return f;
}

Fraction& Fraction::operator =(const Fraction& src)
{
	if(this!= &src)
	{
	num=src.num;
	den=src.den;
    }
	return *this;
}

bool operator >(const Fraction f1, const Fraction f2)
{
	float ratio1=(float)f1.num/f1.den;
	float ratio2=(float)f2.num/f2.den;
	if(ratio1>=ratio2) return true;
	return false;
}

bool operator <(const Fraction f1, const Fraction f2)
{
	float ratio1=(float)f1.num/f1.den;
	float ratio2=(float)f2.num/f2.den;
	if(ratio1<ratio2) return true;
	return false;
}
