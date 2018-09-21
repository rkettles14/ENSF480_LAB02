//point.h
//Author: Rylan Kettles and Sebastion Schroh

#ifndef POINT_H
#define POINT_H

class Point{
	private:
		double x;
		double y;
		int id;
		static int count;
	
	public:
		
		Point(double xcoord, double ycoord);
		Point(const Point& source);
		Point& operator = (const Point& rhs);
		~Point();
	
		double getXValue();
		double getYValue();
		void setXValue(double xval);
		void setYValue(double yval);
		
		void display();
		
		double getDistance(Point& p);
		
		static double distance(Point& p1, Point& p2);
		static int counter();
		
	
};

#endif