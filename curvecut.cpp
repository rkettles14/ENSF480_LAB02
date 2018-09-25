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
  , Circle(x,y,name,radius), Square(x,y,name,side_one), Shape(x,y,name)
{
  if (radius > side_a || radius > side_b)
  {
    cout << "RADIUS CANNOT BE BIGGER THAN THE SIDE LENGTH OF RECTANGLE\n";
    exit(1);
  }
}

CurveCut::CurveCut(const CurveCut& source) : Rectangle(source), Circle(source), Square(source), Shape(source)
{
}

CurveCut& CurveCut::operator =(const CurveCut& rhs)
{
  Rectangle::operator=(rhs);
  Circle::operator=(rhs);
  return *this;
}

double CurveCut::area()
{
  return (Rectangle::area() - (Circle::area() / 4));
}

double CurveCut::perimeter()
{

  return (Rectangle::perimeter() + (Circle::perimeter()/4) - 2 * getRadius());
}

void CurveCut::display()
{
  Shape::display();
  cout << "Width: " << setprecision(5) << getsidea()  << endl;
  cout << "Length: " << setprecision(5) << getsideb()  << endl;
  cout << "Radius of Cut: " << setprecision(5) << getRadius()  << endl;
}
