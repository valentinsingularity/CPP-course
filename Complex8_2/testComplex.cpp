/*
320142
a8_2.cpp
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
    Complex c1,c2;
    
    cout<<"Insert the first number:"<<endl;
    cin>>c1;
    cout<<"Insert the second number:"<<endl;
    cin>>c2;
    cout<<"The sum of the two numbers is: "<<c1+c2;
    cout<<"The difference between the first and the second number is: "<<c1-c2;
    cout<<"The multiplication of the two numbers is: "<<c1*c2;
    
    cout<<"First number multiplied by 3: "<<Complex(3.0)*c1;
    cout<<"Second number multiplide by 5: "<<c2*Complex(5.0);
    cout<<"First number added by 4.5: "<<Complex(4.5)+c1;
    cout<<"Second number added by 1.5: "<<c2+Complex(1.5);
    cout<<"First number substracted by 3: "<<c1-Complex(3.0);
    cout<<"Second number substracted from 9.5: "<<Complex(9.5)-c2;
       
    fin.close();
    fout.close();
    return 0;
}
