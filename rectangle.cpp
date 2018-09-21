//  Rectangle class
//  rectangle.cpp

#include <stdio.h>
#include <iostream>
#include "square.h"
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, char* name, double side_one, double side_two) : Square(x,y,name,side_one)
{
  side_b = side_two;
}

Rectangle::Rectangle(Rectangle& source) : Square(source), side_b(source.side_b)
{

}

Rectangle& Rectangle::operator =(const Rectangle& rhs)
{
  Square::operator=(rhs);
  side_b = rhs.side_b;
  return *this;
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

double Rectangle::getsideb()const
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
  cout << "Side A: " << setprecision(5) << side_a  << endl;
  cout << "Side B: " << setprecision(5) << side_b  << endl;
  cout << "Area: " << setprecision(5) << area()  << endl;
  cout << "Perimeter: " << setprecision(5) << perimeter()  << endl;
}
