//shape.cpp
//Author: Rylan Kettles and Sebastion Schroh


#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include "shape.h"
#include "point.h"

using namespace std;

Shape::Shape(double x, double y, const char* name): origin(x,y){
	//origin = Point(x,y);
	shapeName = new char[strlen(name)+1];
	strcpy(shapeName, name);

}

Shape::~Shape(){
	delete [] shapeName;
}

Shape::Shape(const Shape& source):origin(source.origin), shapeName(new
char[strlen(source.shapeName)+1]){
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs){
	if(this==&rhs)
	return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}

void Shape::display(){
	cout<<"Shape Name: "<< shapeName << endl;
	origin.display();
}

//test main
// int main(){
// 	Shape s(1.5, 75.9, "Yeeted");
// 	s.display();
//
// 	return 0;
// }
