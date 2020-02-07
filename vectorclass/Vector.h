/*
320142
a4_5.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

class Vector {
  private:
  	int size;
  	double* ptr;
  public:
  	Vector();
  	Vector(int);
  	Vector(const Vector&);
  	~Vector();
  	void setSize(int newsize);
  	void setPtr(double* newptr);
  	int getSize();
	double* getPtr();
	void print();
	double norm();
	Vector add(Vector v);
	Vector sub(Vector v);
	double scalar_prod(Vector v); 
};
