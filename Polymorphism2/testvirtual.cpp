/*
320142
a9_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


/* Relation between classes:  
       |----|
       |AREA|
       |----|
        ^   ^
       /     \
     /        \
 /------/     /---------/   
 /CIRCLE/     /RECTANGLE/
/------/      /---------/
    ^               ^
    |               /
    |                /
 /-----/          /------/ 
 /RING/          /SQUARE/
 /----/         /-----/
    
*/  
 
const int num_obj = 20;
int main() {
	Area *list[num_obj];						// (1)  the vector list which stores num_obj pointers to objects of type area is declared 
	int index = 0;								// (2)  the int variable index is declared and initialized to 0
	double sum_area = 0.0;						// (3)  the double variable sum_area is declared and intitialized to 0.0
	double sum_perimeter=0.0;
	int randomNumber1,randomNumber2,randomNumber3,randomNumber4,object,color,size,size2;
	const char* c;
	srand(static_cast<unsigned int>(time(0)));
	while(index < num_obj )
	{
		randomNumber1=rand();
		randomNumber2=rand();
		randomNumber3=rand();
		randomNumber4=rand();
		object=(randomNumber1%4)+1;
		color=(randomNumber2%4)+1;
		size=(randomNumber3%50)+1;
		size2=(randomNumber4%50)+1;
		if(color==1) c="RED";
		else if(color==2) c="GREEN";
		else if(color==3) c="BLUE";
		else if(color==4) c="YELLOW";
		if(object==1)
		{
			cout << "Creating Circle: ";
	        list[index]=new Circle(c, size);;
		} 
		else if(object==2)
		{	
			cout << "Creating Ring: ";
	        if(size>=size2)
	        {
			 list[index]=new Ring(c,size,size2);;
		    }
	        else
	         {
			 list[index]=new Ring(c,size2,size);;
		    }
		}
		else if(object==3)
		{
			cout << "Creating Rectangle: ";
	        list[index]=new Rectangle(c,size,size2);
		}
		else if(object==4)
		{
			cout << "Creating Square: ";
         	list[index]=new Square(c,size);
		}
			
		index++;
	}
	
	index = 0;
	while (index < num_obj) {					// (7) a while loop is running while the variable index is smaller than the variable num_obj 
		(list[index])->getColor();				// (8) the object pointed to by the pointer with index "index" stored in the vector list
		                                        //     is accessed with the dereference operator, the method getColor() being called
		sum_area += (list[index++])->calcArea();
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9) the total area of the objects pointed to by the vector is printed on the screen
	index = 0;
	
	while(index < num_obj) {	
		(list[index])->getColor();                              
		sum_perimeter += (list[index++])->calcPerimeter();
	}
	
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
			
	return 0;
}
