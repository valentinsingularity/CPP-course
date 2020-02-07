/*
320142
a5_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
	int n,i;
	double h,w,d,total_vol=0;
	cout<<"Enter number of boxes: "<<endl;
	cin>>n;
	Box* arr_bx=new Box[n];
	for(i=0;i<n;i++)
	{
		cin>>h>>w>>d;
		arr_bx[i].setHeight(h);
		arr_bx[i].setWidth(w);
		arr_bx[i].setDepth(d);
	}
	for(i=0;i<n;i++)
	{
		cout<<"The volume of box "<<i+1<<" is :"<<arr_bx[i].getVolume()<<endl;
		total_vol+=arr_bx[i].getVolume();
	}
	cout<<"The total voume of the boxes is: "<<total_vol<<endl;

	return 0;
}
