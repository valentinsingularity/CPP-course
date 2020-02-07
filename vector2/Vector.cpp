/*
320142
a7_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

int i;

Vector::Vector(int newsize,int x)
{
	size=newsize;
	ptr=new double[size];
	cout<<"Insert the components of the vector: "<<endl;
	for(i=0;i<size;i++) cin>>(*(ptr+i));
}

Vector::Vector(int newsize)
{
	size=newsize;
	ptr=new double[size];
	for(i=0;i<size;i++) *(ptr+i)=0;
}

Vector::Vector(const Vector& src)
{
	size=src.size;
	ptr=new double[size];
	ptr=src.ptr;
}

Vector::~Vector(){
	delete [] ptr;
}

void Vector::setSize(int newsize){
	size=newsize;
}

void Vector::setPtr(double* newptr){
	ptr=newptr;
}

int Vector::getSize(){
	return size;
}

double* Vector::getPtr(){
	return ptr;
}

void Vector::print(){
	for(i=0;i<size;i++) cout<<*(ptr+i)<<" ";
}

istream& operator >>(istream& in,Vector &v){
	cout<<"Insert vector componets: "<<endl;
	for(i=0;i<v.size;i++) in >>(*(v.ptr+i));
	return in;
}

ostream& operator <<(ostream& out, const Vector &v){
    for(i=0;i<v.size;i++) out <<*(v.ptr+i)<<" ";
    out <<endl;
	return out;
}



double operator !(const Vector v){
	double norm=0;
	for(i=0;i<v.size;i++) norm+=(*(v.ptr+i)) * (*(v.ptr+i)); 
	return sqrt(norm);
}

double operator *(const Vector v1, const Vector v2){
	double s_prod=0.0;
	for(i=0;i< v1.size;i++) s_prod+= (*(v1.ptr+i)) * ( *(v2.ptr+i));
	return s_prod;
}

Vector operator +(const Vector v1, const Vector v2){
	Vector v(v1.size);
	for(i=0;i<v.size;i++) *(v.ptr+i)= *(v1.ptr+i) + *(v2.ptr+i);
	return v;
	
}

Vector operator -(const Vector v1, const Vector v2){
	Vector v(v1.size);
	for(i=0;i<v.size;i++) *(v.ptr+i)= *(v1.ptr+i) - *(v2.ptr+i);
	return v;	
}
