/*
320142
a5_5.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std; 

Shape::Shape() {
	name="A_simple_shape";
}

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(const Shape& src){
	name=src.name;
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(const std::string& newName){
	name=newName;
}

const std::string& Shape::getName(){
	return name;
} 

CenteredShape::CenteredShape(): Shape("aCentredShape") {
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape& src) {
	name = src.name;
	x = src.x;
	y = src.y;
}

void CenteredShape::setX(double nx){
	x = nx;
}

void CenteredShape::setY(double ny){
	y=ny;
}

double CenteredShape::getX(){
	return x;
}
double CenteredShape::getY(){
	return y;
}

RegularPolygon::RegularPolygon(): CenteredShape("aPolygon",0,0) 
{
	EdgesNumber = 10;
}


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& src){
	name = src.name;
	x = src.x;
	y = src.y;
	EdgesNumber = src.EdgesNumber;
}

void RegularPolygon::setEdgesNumber(int nEdNr){
	EdgesNumber=nEdNr;
}

double RegularPolygon::getEdgesNumber(){
	return EdgesNumber;
}

Circle::Circle() : 
  CenteredShape("aCircle",0,0) 
{
	Radius = 5;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle(const Circle& src){
	name = src.name;
	x = src.x;
	y=src.y;
	Radius=src.Radius;
}

void Circle::setRadius(double nRad){
	Radius=nRad;
}
double Circle::getRadius(){
	return Radius;
}

double Circle::perimeter(){
	return 2*3.14159*Radius;
}

double Circle::area(){
	return 3.14159*Radius*Radius;
}

Rectangle::Rectangle() : RegularPolygon("aRectangle",0,0,4) 
{
	width = 10;
	height = 5;
}
	
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) :
	RegularPolygon(n,nx,ny,4)
{
    width=nwidth;
	height=nheight;	
}

Rectangle::Rectangle(const Rectangle& src){
	name = src.name;
	x = src.x;
	y = src.y;
	EdgesNumber = 4;
	width = src.width;
	height = src.height;
}


void Rectangle::setWidth(double nWidth){
	width=nWidth;
}

void Rectangle::setHeight(double nHeight){
	height=nHeight;
}

double Rectangle::getWidth(){
	return width;
}

double Rectangle::getHeight(){
	return height;
}

double Rectangle::perimeter(){
	return 2*(width+height);
}

double Rectangle::area(){
	return width*height;
}

Square::Square() : Rectangle("aSquare",0,0,5,5){
	side=5;
}

Square::Square(const string& n, double nx, double ny, double nside) :
	Rectangle(n, nx, ny, nside, nside)
{
	side=nside;	
}

Square::Square(const Square& src){
	name = src.name;
	x = src.x;
	y = src.y;
	EdgesNumber = 4;
	width = height = side = src.side;
}

void Square::setSide(double nside){
	side=nside;
}

double Square::getSide(){
	return side;
}

double Square::perimeter(){
	return 4*side;
}

double Square::area(){
	return side*side;
}
