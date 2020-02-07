#include <cassert>
#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	int i,out;
	Stack<int> intstack;
	Stack<int> intstack2;
	Stack<char, 15> charstack;
	for(i=1;i<=8;i++) 
	   if(intstack.push(i*i));
	   else break;
	for(i=1;i<=8;i++) 
	   if(intstack.pop(out)) cout<<out<<" ";
	   else break;
	cout<<"\n"<<intstack.getNumEntries();
	for(i=1;i<=4;i++) 
	   if(intstack.push(i*i));
	   else break;
	out=intstack.back();
	cout<<"\n"<<intstack.getNumEntries()<<" "<<out;	
	
	return 0;
}
