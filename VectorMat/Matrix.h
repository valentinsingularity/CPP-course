/*
320142
a8_4.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/
 
#include<iostream>
#include<fstream>
#include "Vector.h"
using namespace std;
 
class Matrix {
	public:
    int nr_rows,nr_columns;
    double** matrix;
    Matrix(int,int);
    Matrix(const Matrix&);
    explicit Matrix(const Vector&);
    ~Matrix();
    friend Matrix operator *(const Matrix m1, const Matrix m2);
    friend Matrix operator +(const Matrix m1, const Matrix m2);
    friend Matrix operator -(const Matrix m1, const Matrix m2);
    friend istream& operator >>(istream& in,Matrix &m);
    friend ostream& operator <<(ostream& out, const Matrix &m);
    friend ifstream& operator >>(ifstream& fin,Matrix &m);
    friend ofstream& operator <<(ofstream& fout, const Matrix &m);
};
