/*
320142
a7_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
using namespace std;

int GCD(int a,int b)
{
	int t;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int main()
{
	int a,b;
	cin>>a>>b;
	while(a<0 || b<0)
	{
		cin>>a>>b;
	}
	cout<<GCD(a,b);
	
	return 0;
}

