//shape.h
//Author: Rylan Kettles and Sebastion Schroh

#include "point.h"
#ifndef SHAPE_H
#define SHAPE_H

class Shape{
	
	private:
		Point origin;
		char* shapeName;
	
	public:
		Shape(double x, double y, const char* name);
		Shape(const Shape& source);
		Shape& operator = (const Shape& rhs);
		virtual ~Shape();
		
		Point& getOrigin();
		
		char& getName();
	
		void display();
		
		double distance (Shape& other);
		
		static double distance (Shape& the_shape, Shape& other);
		
		void move (double dx, double dy);

	
	
	
};

#endif