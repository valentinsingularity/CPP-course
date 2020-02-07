/*
320142
a7_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include<iostream>
using namespace std;

class Vector {
  private:
    int size;
	double* ptr;
  public:
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
	friend ostream& operator <<(ostream& out, const Vector &v);
};
