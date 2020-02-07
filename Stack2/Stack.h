/*
320142
a10_2.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <cassert>
#include <iostream>
#include <cstdlib>

using namespace std;

template<class T, int initialsize = 10>
class Stack 
{
	T *ptr;
	int size;
	int where;
public:
	Stack();
	Stack(int size);
	Stack(const Stack&);
	~Stack();
	bool push(T element);
	bool pop(T& out);
	T back();
	int getNumEntries();
	void resize(int size);
	int getSize();
};

template<class T, int initialsize>
Stack<T, initialsize>::Stack() 
{
	ptr = new T[initialsize];
	size = initialsize;
	where = -1;
}

template<class T, int initialsize>
Stack<T, initialsize>::Stack(int size) 
{
	ptr = new T[size];
	where = -1;
}

template<class T, int initialsize>
Stack<T, initialsize>::Stack(const Stack& src) 
{
	ptr = src.ptr;
	size = src.size;
	where = src.where;
}

template<class T, int initialsize>
Stack<T, initialsize>::~Stack()
{
	delete[] ptr;
}

template<class T, int initialsize>
int Stack<T, initialsize>::getNumEntries()
{
	return where+1;
} 

template<class T, int initialsize>
bool Stack<T, initialsize>::push(T element)
{
	if (where + 1 == size) return false;
	where++; 
	ptr[where] = element;
	return true;
}

template<class T,int initialsize>
bool Stack<T,initialsize>::pop(T& out)
{
	if(where < 0) return false;
	out=ptr[where];
	where--;
	return true;
}

template<class T,int initialsize>
T Stack<T,initialsize>::back()
{
	if(where < 0) exit(1);
	return ptr[where];
}

template<class T, int initialsize>
void Stack<T, initialsize>::resize(int newsize)
{
	T *newptr = new T[newsize];
	for (int i = 0;i < newsize;i++)
		newptr[i] = ptr[i];
	delete[] ptr;
	ptr = newptr;
	size = newsize;
}

template<class T, int initialsize>
int Stack<T, initialsize>::getSize() 
{
	return size;
}

