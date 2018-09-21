//point.cpp
//Author: Rylan Kettles and Sebastion Schroh


#include <stdio.h>
#include <iostream>
#include <math.h>
#include "point.h"
using namespace std;


int Point::count =0;

Point::Point(double xcoord, double ycoord){
	x = xcoord;
	y = ycoord;
	count++;
	id = 1000+count;
}

Point::Point(const Point& source){
	x = source.x;
	y = source.y;
	count++;
	id = source.id;
}

Point& Point::operator = (const Point& rhs){
	if(this == &rhs){
		return *this;
	}

	x = rhs.x;
	y = rhs.y;
	id = rhs.id;
	return *this;

}

Point::~Point(){
	count--;
}

double Point::getXValue()const{
	return x;
}

double Point::getYValue()const{
	return y;
}

void Point::setXValue(double xval){
	x = xval;
	return;
}

void Point::setYValue(double yval){
	y = yval;
	return;
}

void Point::display(){
	printf("X-coordinate: %6.2f \n", x);
	printf("Y-coordinate: %6.2f\n", y);
}

double Point::distance(const Point& p)const{
	double xdiff = this->getXValue() - p.getXValue();
	double ydiff = this->getYValue() - p.getYValue();
	double distance = sqrt(pow(xdiff,2) + pow(ydiff,2));
	return distance;
}

double Point::distance(Point& p1, Point& p2){
	double xdiff = p1.getXValue() - p2.getXValue();
	double ydiff = p1.getYValue() - p2.getYValue();
	double distance = sqrt(pow(xdiff,2) + pow(ydiff,2));
	return distance;
}

int Point::counter(){
	return count;
}

//main function for testing. uncmment to test.
/*
int main(){

	Point p(12.3, 6.9);
	p.display();

	Point p2(10.2, 1.9);
	p2.display();

	cout<<p.getDistance(p2)<<endl;
	cout<<distance(p,p2)<<endl;

	cout<<Point::counter()<<endl;
	return 0;
}
*/
