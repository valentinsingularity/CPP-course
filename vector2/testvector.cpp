/*
320142
a7_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include<iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector v1(6);
    Vector v2(6);
    cin>>v1;
    cin>>v2;
    
    cout<<v1;
	cout<<v2;
	cout<<"The norm of the first vector is: "<< !v1 <<endl;
	cout<<"The scalar product of the first and the second vector is: "<< v1*v2 <<endl;
	cout<<"The sum of the first and the second vector is: "<<v1+v2;
	cout<<"The difference of the first and  the second vector is: "<<v1-v2;
	
	return 0;
}
