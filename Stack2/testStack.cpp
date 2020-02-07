/*
320142
a10_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include <cassert>
#include "Stack.h"

using namespace std;

int main()
{
	int i,out;
	Stack<int> intstack;
	Stack<char, 15> charstack;
	cout<<intstack.getSize()<<endl;
	for(i=1;i<=10;i++) 
	   if(intstack.push(i*i));
	   else break;
	for(i=1;i<=10;i++) 
	   if(intstack.pop(out)) cout<<out<<" ";
	   else break;
	intstack.resize(20);   
	cout<<endl<<intstack.getSize()<<endl;
	for(i=1;i<=20;i++) 
	   if(intstack.push(i*i));
	   else break;
	for(i=1;i<=20;i++) 
	   if(intstack.pop(out)) cout<<out<<" ";
	   else break;
	   	
	return 0;
}
