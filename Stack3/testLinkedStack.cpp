/*
320142
a10_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <cassert>
#include "LinkedStack.h"

using namespace std;

int main()
{
	int i,out;
	Stack<int> intstack;
	Stack<char> charstack;
	for(i=1;i<=15;i++) 
	   if(intstack.push(i*i));
	   else break;
	cout<<intstack.getNumEntries()<<endl;
	for(i=1;i<=8;i++) 
	   if(intstack.pop(out)) cout<<out<<" ";
	   else break;
	cout<<endl<<intstack.getNumEntries()<<endl;
	intstack.resize(6);
	cout<<intstack.getNumEntries()<<endl;
	   	
	return 0;
}
