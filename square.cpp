//  Square class
//  square.cpp
//  This class inherits from class Shape, it must have equal side lengths

#include <stdio.h>
#include <iostream.h>
#include "square.h"

using namespace std;

Square::Square(double x, double y, char* name, double side_one)
{
  side_a = side_one;
}

// Square::Square(const Source& source)
// {
//   side_a = source.side_one;
// }

// Square& operator =(const Square& rhs)
// {
//   Square::operator=();
//   side_a = rhs.side_one;
//   return
// }

double Square::area()
{
  return side_a * side_a;
}

double Square::perimeter()
{
  return side_a * 4;
}

double Square::getside()const
{
  return side_a;
}

void Square::setside(double side)
{
  side_a = side;
}

void Square::display()
{
  Shape::display();
  cout << setprecision(2) << side_a;
  cout << setprecision(2) << area();
  cout << setprecision(2) << perimeter();
}
