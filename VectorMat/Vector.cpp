/*
320142
a8_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

int y;
 
Vector::Vector(int newsize,int x)
{
    size=newsize;
    ptr=new double[size];
    cout<<"Insert the components of the vector: "<<endl;
    for(y=0;y<size;y++) cin>>(*(ptr+y));
}
 
Vector::Vector(int newsize)
{
    size=newsize;
    ptr=new double[size];
    for(y=0;y<size;y++) *(ptr+y)=0;
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
    for(y=0;y<size;y++) cout<<*(ptr+y)<<" ";
}
 
istream& operator >>(istream& in,Vector &v){
    cout<<"Insert vector componets: "<<endl;
    for(y=0;y<v.size;y++) in >>(*(v.ptr+y));
    return in;
}
 
ostream& operator <<(ostream& out,const Vector &v){
    for(y=0;y<v.size;y++) out <<*(v.ptr+y)<<" ";
    out <<endl;
    return out;
}

ifstream& operator >>(ifstream& fin,Vector &v)
{
	cout<<"Insert vector componets: "<<endl;
    for(y=0;y<v.size;y++) fin >>(*(v.ptr+y));
    return fin;
}

/*
ofstream& operator <<(ofstream& fout,const Vector &v)
{
	for(y=0;y<v.size;y++) fout <<*(v.ptr+y)<<" ";
    fout <<endl;
    return fout;
}
*/
 
double operator !(const Vector v){
    double norm=0;
    for(y=0;y<v.size;y++) norm+=(*(v.ptr+y)) * (*(v.ptr+y)); 
    return sqrt(norm);
}
 
double operator *(const Vector v1, const Vector v2){
    double s_prod=0.0;
    for(y=0;y< v1.size;y++) s_prod+= (*(v1.ptr+y)) * ( *(v2.ptr+y));
    return s_prod;
}
 
Vector operator +(const Vector v1, const Vector v2){
    Vector v(v1.size);
    for(y=0;y<v.size;y++) *(v.ptr+y)= *(v1.ptr+y) + *(v2.ptr+y);
    return v;
    
}
 
Vector operator -(const Vector v1, const Vector v2){
    Vector v(v1.size);
    for(y=0;y<v.size;y++) *(v.ptr+y)= *(v1.ptr+y) - *(v2.ptr+y);
    return v;    
}
