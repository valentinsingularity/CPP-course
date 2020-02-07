/*
320142
a7_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

int main(void)
{
	Fraction f1,f2,sum,dif;
    cin>>f1;
	cin>>f2;
	if(f1>f2) cout<<"Greater fraction: "<<f1<<endl;
	else cout<<"Greater fraction: "<<f2<<endl;
	sum=f1+f2;
	dif=f1-f2;
	cout<<"Sum of the two fractions: "<<sum<<endl;
	cout<<"Difference of the two fractions: "<<dif<<endl;
}
