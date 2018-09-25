// Curve Cut class
// curvecut.cpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "circle.h"
#include "rectangle.h"
#include "curvecut.h"

CurveCut::CurveCut(double x, double y, char* name,
  double side_one, double side_two, double radius) : Rectangle(x,y,name,side_one,side_two)
  , Circle(x,y,name,radius), Shape(x,y,name)
{
  if (radius > side_a || radius > side_b)
  {
    cout << "RADIUS CANNOT BE BIGGER THAN THE SIDE LENGTH OF RECTANGLE\n";
    exit(1);
  }
}

CurveCut::CurveCut(const CurveCut& source) : Rectangle(source), Circle(source), Shape(source)
{
}

CurveCut& CurveCut::operator =(const CurveCut& rhs)
{
  Recatangle::operator=(rhs);
  Circle::operator=(rhs);
  return *this;
}

double area()
{
  return Rectangle::area() - (Circle::area() / 4);
}

double perimeter()
{
  return Rectangle::perimeter() + (Circle::perimeter()/4) - 2 * radius;
}

void display()
{
  Shape::display();
  cout << "Width: " << setprecision(5) << getsidea()  << endl;
  cout << "Length: " << setprecision(5) << getsideb()  << endl;
  cout << "Radius of Cut: " << setprecision(5) << getRadius()  << endl;
}
