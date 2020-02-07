/*
320142
a5_5.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
using namespace std;

int main() 
{
  Circle c("CIRCLE", 0, 1, 6);
  Rectangle r("RECTANGLE", 1, 1, 7, 5);
  Square s("SQUARE",2,3,9);
  cout<<"The circle has perimeter "<< c.perimeter() <<" and area: "<< c.area() <<endl;
  cout<<"The rectangle has perimeter "<< r.perimeter() <<" and area: "<< r.area() <<endl;
  cout<<"The square has perimeter "<< s.perimeter() <<" and area: "<< s.area() <<endl;
  
  return 0;
}
