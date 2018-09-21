//  Square class
//  square.cpp
//  This class inherits from class Shape, it must have equal side lengths

#include <stdio.h>
#include <iostream>
#include "square.h"
#include "shape.h"

using namespace std;

Square::Square(double x, double y, char* name, double side_one) : Shape(x,y,name)
{
  side_a = side_one;
}

Square::Square(const Square& source): Shape(source), side_a(source.side_a)
{
}

Square& Square::operator =(const Square& rhs)
{
  Shape::operator=(rhs);
  side_a = rhs.side_a;
  return *this;
}

double Square::area()
{
  return side_a * side_a;
}

double Square::perimeter()
{
  return side_a * 4;
}

double Square::getsidea()const
{
  return side_a;
}

void Square::setsidea(double side)
{
  side_a = side;
}

void Square::display()
{
  Shape::display();
  cout << "Side A: " << setprecision(2) << side_a << endl;
  cout << "Area: "<< setprecision(4) << area() << endl;
  cout << "Perimeter: "<< setprecision(2) << perimeter()<<endl;
}
