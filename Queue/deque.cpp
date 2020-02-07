/*
320142
a11_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
	float x;
	int nr=0;
	deque<float> A;
	deque<float>::iterator pos;
	while(1)
	{
		cin>>x;
		if(x==0) break;
		if(x>0) A.push_back(x);
		else 
		{
			A.push_front(x);
			nr++;
		}
	}
    for(pos=A.begin();pos!=A.end();pos++) cout<<*pos<<" ";
	cout<<endl<<endl;
	pos=A.begin()+nr;
	A.insert(pos,0);
	for(pos=A.begin();pos!=A.end();)
	{
		cout<<*pos;
		pos++;
		if(pos!=A.end()) cout<<";";
	} 
	cout<<endl;

	return 0;
}
