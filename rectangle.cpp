//  Rectangle class
//  rectangle.cpp

#include <stdio.h>
#include <iostream.h>
#include "square.h"
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, char* name, double side_one, double side_two)
{
  side_a = side_one;
}

double Rectangle::area()
{
  return side_a * side_b;
}

double Rectangle::perimeter()
{
  return (side_a * 2) + (side_b * 2);
}

double Rectangle::getsidea()const
{
  return side_a;
}

double Rectangle::getideab()const
{
  return side_b;
}

void Rectangle::setsidea(double side)
{
  side_a = side;
}

void Rectangle::setsideb(double side)
{
  side_b = side;
}

void Rectangle::display()
{
  Shape::display();
  cout << setprecision(2) << side_a;
  cout << setprecision(2) << side_b;
  cout << setprecision(2) << area();
  cout << setprecision(2) << perimeter();
}
