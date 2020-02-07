/*
320142
a8_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include <iostream>
#include "Matrix.h"
using namespace std;
 
int i,j,k;
 
Matrix::Matrix(int newNr_rows,int newNr_columns)
{
    nr_rows=newNr_rows;
    nr_columns=newNr_columns;
    matrix=new double*[nr_rows];
    for(i=0;i<nr_rows;i++) matrix[i] = new double[nr_columns];
    for(i=0;i<nr_rows;i++)
	   for(j=0;j<nr_columns;j++) *(*(matrix+i)+j)=0;
}
 
Matrix::Matrix(const Matrix& src)
{
	nr_rows=src.nr_rows;
    nr_columns=src.nr_columns;
    matrix=new double*[nr_rows];
    matrix=src.matrix;
}


Matrix::Matrix(const Vector& v)
{
	nr_rows=1;
	nr_columns=v.size;
	for(i=0;i<nr_columns;i++) *(*matrix+i)= *(v.ptr+i);
}

Matrix::~Matrix(){
    for(i=0;i<nr_rows;i++) delete [] matrix[i];
    delete [] matrix;
}
  
istream& operator >>(istream& in,Matrix &m){
    cout<<"Insert Matrix componets: "<<endl;
    for(i=0;i<m.nr_rows;i++)
	   for(j=0;j<m.nr_columns;j++) in >> *(*(m.matrix+i)+j);
    return in;
}
 
ostream& operator <<(ostream& out, const Matrix &m){
    for(i=0;i<m.nr_rows;i++)
    {
	   for(j=0;j<m.nr_columns;j++) out <<*(*(m.matrix+i)+j)<<" ";
	   out<<endl;
    }
    out <<endl;
    return out;
}

ifstream& operator >>(ifstream& fin,Matrix &m)
{
    for(i=0;i<m.nr_rows;i++)
	   for(j=0;j<m.nr_columns;j++) fin >> *(*(m.matrix+i)+j);
    return fin;
}

ofstream& operator <<(ofstream& fout, const Matrix &m)
{
	for(i=0;i<m.nr_rows;i++)
    {
	   for(j=0;j<m.nr_columns;j++) fout <<*(*(m.matrix+i)+j)<<" ";
	   fout<<endl;
    }
    fout <<endl;
    return fout;
}
 
Matrix operator *(const Matrix m1, const Matrix m2){
    Matrix m(m1.nr_rows,m2.nr_columns);
    for(i=0;i<m.nr_rows;i++)
        for(j=0;j<m.nr_columns;j++)
            for(k=0;k<m1.nr_columns;k++) *(*(m.matrix+i)+j) += *(*(m1.matrix+i)+k) * *(*(m2.matrix+k)+j);
    return m;
}
 
Matrix operator +(const Matrix m1, const Matrix m2){
    Matrix m(m1.nr_rows,m1.nr_columns);
    for(i=0;i<m.nr_rows;i++)
	   for(j=0;j<m.nr_columns;j++) *(*(m.matrix+i)+j)=  *(*(m1.matrix+i)+j) + *(*(m2.matrix+i)+j);
    return m;
}
 
Matrix operator -(const Matrix m1, const Matrix m2){
    Matrix m(m1.nr_rows,m1.nr_columns);
    for(i=0;i<m.nr_rows;i++)
	   for(j=0;j<m.nr_columns;j++) *(*(m.matrix+i)+j)=  *(*(m1.matrix+i)+j) - *(*(m2.matrix+i)+j);
    return m; 
}
