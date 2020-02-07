/*
320142
a8_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
 
Complex::Complex() {  //default constructor
    real=imaginary=0;
}
 
Complex::~Complex() { }

Complex::Complex(double re, double im) {  // setting constructor 
    real = re;                      
    imaginary = im;
}
  
void Complex::setReal(double newreal){
    real=newreal;
}
 
void Complex::setImaginary(double newimaginary){
    imaginary=newimaginary;
}
 
double Complex::getReal(){
    return real;
}
 
double Complex::getImaginary(){
    return imaginary;
}
 
void Complex::print(){
    cout<<real<<" ";
    if(imaginary<0) cout<<"- "<<(-1)*imaginary<<"i\n";
    else if(imaginary>0) cout<<"+ "<<imaginary<<"i\n";
    else cout<<"\n";
}
 
Complex Complex::conjugate(){
    Complex conj_nr;
    conj_nr.setReal(real);
    conj_nr.setImaginary((-1)*imaginary);
    return conj_nr;
}

Complex operator *(const Complex c1, const Complex c2){
	Complex c(c1.real*c2.real-c1.imaginary*c2.imaginary, c1.real*c2.imaginary+c2.real*c1.imaginary);
	return c;
}

Complex operator +(const Complex c1, const Complex c2){
	Complex c(c1.real+c2.real, c1.imaginary+c2.imaginary);
	return c;
}

Complex operator -(const Complex c1, const Complex c2){
	Complex c(c1.real-c2.real, c1.imaginary-c2.imaginary);
	return c;
}

Complex& Complex::operator =(const Complex& src){
	if(this!= &src)
	{
	real=src.real;
	imaginary=src.imaginary;
    }
	return *this;
}

istream& operator >>(istream& in, Complex &c){
	in >> c.real >> c.imaginary;
    return in;
}

ostream& operator <<(ostream& out, const Complex &c){
	out << c.real<<" + "<<c.imaginary<<"i"<<endl;
	return out; 
}

ifstream& operator >>(ifstream& fin, Complex &c){
	fin >> c.real >> c.imaginary;
    return fin;
}

ofstream& operator <<(ofstream& fout, const Complex &c){
    fout << c.real<<" + "<<c.imaginary<<"i"<<endl;
    return fout;
}
