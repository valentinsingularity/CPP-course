/*
320142
a8_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <fstream>
using namespace std;
 
class Complex
{
    private:
         double real;
         double imaginary;
     
     public:
         Complex();
         ~Complex();      
         Complex(double,double);
         explicit Complex(const double&);
         
         void setReal(double newreal);
         void setImaginary(double newimaginary);
         double getReal();
         double getImaginary();
         void print();
         Complex conjugate();
         friend Complex operator *(const Complex c1, const Complex c2);
         friend Complex operator +(const Complex c1, const Complex c2);
	     friend Complex operator -(const Complex c1, const Complex c2);
	     Complex& operator =(const Complex&);
	     friend istream& operator >>(istream& in, Complex &c);
	     friend ostream& operator <<(ostream& out, const Complex &c);
	     friend ifstream& operator >>(ifstream& fin, Complex &c);
	     friend ofstream& operator <<(ofstream& fout, const Complex &c);
};
