//circle.cpp
//Author: Rylan Kettles and Sebastion Schroh

#include <stdio.h>
#include <iostream>
#include <math.h>
#include "circle.h"
#include "shape.h"
#define PI 3.14159265358979323846
using namespace std;

Circle::Circle(double x, double y, char* name, double rad):Shape(x,y,name){
	radius = rad;
}

Circle::Circle(const Circle& source): Shape(source), radius(source.radius){
}

Circle& Circle::operator =(const Circle& rhs){
	Shape::operator = (rhs);
	radius = rhs.radius;
	return *this;

}

double Circle::getRadius() const{
	return radius;
}

void Circle::setRadius(double rad){
	radius = rad;
}

double Circle::area(){
	double a = PI * pow(radius, 2);
	return a;
}

double Circle::perimeter(){
	return PI * radius * 2;
}

void Circle::display(){
	Shape::display();
	cout << "Radius: " << setprecision(5) << radius << endl;
	cout << "Area: "<< setprecision(5) << area() << endl;
	cout << "Perimeter: "<< setprecision(5) << perimeter()<<endl;
}
//main function for testing
/*
int main(){
	Circle c(12.9,13.8, "test_circle", 22);

	c.display();

	return 0;
}
*/
