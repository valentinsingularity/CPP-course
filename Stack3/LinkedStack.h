/*
320142
a10_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <cassert>
#include <iostream>
#include <cstdlib>

using namespace std;

template<class T>
class stacknode
{
	public:
	T data;
	stacknode<T>* previous;
};

template<class T>
class Stack
{
public:
	stacknode<T>* top;  //pointer to the top stacknode of the stack
	int nr; //number of entries
	Stack(); //intializes top to point to NULL
	Stack(const Stack&);
	~Stack();
	bool push(T element);
	bool pop(T& out);
	T back();
	int getNumEntries();
	void resize(int size);
};

template<class T>
Stack<T>::Stack() 
{
	top=NULL;
	nr = 0;
}

template<class T>
Stack<T>::Stack(const Stack& src) 
{
	top = src.top;
	nr = src.nr;
}

template<class T>
Stack<T>::~Stack()
{
	delete top;
}

template<class T>
int Stack<T>::getNumEntries()
{
	return nr;
} 

template<class T>
bool Stack<T>::push(T data)
{ 
	stacknode<T>* newnode=new stacknode<T>;
	if(newnode==NULL) return false;
	newnode->data=data;
	newnode->previous=top;
	top = newnode;
	nr++;
	return true;
}

template<class T>
bool Stack<T>::pop(T& out)
{
	if(nr < 1) return false;
	stacknode<T>* oldnode=top;
	out=top->data;
	top=top->previous;
	delete oldnode;
	nr--;
	return true;
}

template<class T>
T Stack<T>::back()
{
	if(nr < 1) exit(1);
	return top->data;
}

template<class T>
void Stack<T>::resize(int newsize)
{
	T out;
	int n=nr;
	for(int i=1;i<=n-newsize;i++) pop(out);
}
