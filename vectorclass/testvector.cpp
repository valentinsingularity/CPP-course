/*
320142
a4_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include<iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector v1(6);
    Vector v2(v1);
    Vector v3;
    
    v1.Vector::print();
	v2.Vector::print();
	v3.Vector::print();
	cout<<"The norm of the first vector is: "<<v1.Vector::norm()<<endl;
	cout<<"The scalar product of the first and third vectors is:"<<v1.Vector::scalar_prod(v3);
	
	
	return 0;
}
