/*
320142
a8_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include<iostream>
#include<fstream>
using namespace std;
 
class Vector {
	public:
    int size;
    double* ptr;
    Vector(int);
    Vector(int,int);
    Vector(const Vector&);
    ~Vector();
    void setSize(int newsize);
    void setPtr(double* newptr);
    int getSize();
    double* getPtr();
    void print();
    double norm();
    Vector add(Vector v);
    Vector sub(Vector v);
    friend double operator *(const Vector v1, const Vector v2);
    friend double operator !(const Vector v);
    friend Vector operator +(const Vector v1, const Vector v2);
    friend Vector operator -(const Vector v1, const Vector v2);
    friend istream& operator >>(istream& in,Vector &v);
    friend ostream& operator <<(ostream& out,const Vector &v);
    friend ifstream& operator >>(ifstream& fin,Vector &v);
    //friend ofstream& operator <<(ofstream& fout,const Vector &v);
};
