/*
320142
a8_3.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
 
int main()
{
	ofstream fout("concatn.txt");
	int n,i;
	char c;
    string filename;
	cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>filename;
       ifstream fin(filename.c_str());
       if(fin)
       {
	   while(fin.get(c))
	   {
	      fout<<c;
	   }    
	   fin.close();
	   }
	   else
	   {
	   cout<<"Concatenation unsuccessful"<<endl;
	   exit(1);
	   }
    }
        
    fout.close();
    return 0; 
}    
