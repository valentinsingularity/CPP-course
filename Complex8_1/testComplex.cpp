/*
320142
a8_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
 
int main()
{
	ifstream fin("in1.txt");
	ofstream fout("out1.txt");
    Complex c1,c2,c3,c4;
    
    cout<<"Insert the first number:"<<endl;
    cin>>c1;
    cout<<"Insert the real and the imaginary part of the second number:"<<endl;
    cin>>c2;
    cout<<"The sum of the two numbers is: "<<c1+c2;
    cout<<"The difference between the first and the second number is: "<<c1-c2;
    cout<<"The multiplication of the two numbers is: "<<c1*c2;
    
    fin>>c3>>c4;
    fout<<c3+c4<<c3-c4<<c3*c4;
    
    fin.close();
    fout.close();
    return 0;
}
