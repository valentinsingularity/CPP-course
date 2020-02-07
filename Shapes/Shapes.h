/*
320142
a5_5.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/


#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		void setName(const std::string& newName);
		const std::string& getName();  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setX(double nx);
		void setY(double ny);
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdgesNumber(int nEdNr);
		double getEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	protected:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void setRadius(double nRad);
		double getRadius();
		double perimeter();
		double area();
};

class Rectangle : public RegularPolygon {
	protected:
		double width, height;
	public:
	    Rectangle();
	    Rectangle(const std::string& n, double nx, double ny, double nwidth, double nheight);
	    Rectangle(const Rectangle&);
	    void setWidth(double nWidth);
	    void setHeight(double nHeight);
    	double getWidth();
	    double getHeight();
	    double perimeter();
	    double area();
};

class Square : public Rectangle {
	protected:
		double side;
    public:	
	Square();
	Square(const std::string& n, double nx, double ny, double nside);
	Square(const Square&);
	void setSide(double nside);
	double getSide();
	double perimeter();
    double area();
};
    
#endif
