//  Rectangle class
//  rectangle.h
//

#include <stdio.h>
#include <iostream>
#include "square.h"

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : virtual public Square {

  public:

    Rectangle(double x, double y, char* name, double side_one, double side_two);

    Rectangle(const Rectangle& source);

    Rectangle& operator =(const Rectangle& rhs);

    virtual double area();

    virtual double perimeter();

    double getsideb()const;

    void setsideb(double side);

    virtual void display();

  protected:

    double side_b;

};


#endif
