//circle.h
//Author: Rylan Kettles and Sebastion Schroh


#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "shape.h"


using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : virtual public Shape{

	protected:
		double radius;

	public:

		Circle(double x, double y, char* name, double rad);

		Circle(const Circle& source);

		Circle& operator =(const Circle& rhs);

		double getRadius() const;

		void setRadius(double rad);

		virtual double area();

		virtual double perimeter();

		void display();

};
#endif
