/*
320142
a4_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

int i;

Vector::Vector(){
	size=6;
	double v[6]={3.1,2.2,1.6,5.4,3.2,2.9};
	ptr=v;
}

Vector::Vector(int newsize)
{
	size=newsize;
	ptr=new double[size];
	cout<<"Insert the components of the first vector: "<<endl;
	for(i=0;i<size;i++) cin>>(*(ptr+i));
}

Vector::Vector(const Vector& src)
{
	size=src.size;
	ptr=new double[size];
	ptr=src.ptr;
}

Vector::~Vector(){
};

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
	cout<<endl;
}

double Vector::norm(){
	double s_norm=0;
	for(i=0;i<size;i++) s_norm+=(*(ptr+i)) * (*(ptr+i)); 
	return sqrt(s_norm);
}
/*
Vector Vector::add(Vector v){

}
Vector Vector::sub(Vector v){
	
}
*/

double Vector::scalar_prod(Vector v){
	double s_prod=0.0;
	for(i=0;i<size;i++) s_prod+= (*(ptr+i)) * (*(v.ptr+i));
	return s_prod;
} 
