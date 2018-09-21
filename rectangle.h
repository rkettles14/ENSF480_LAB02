//  Rectangle class
//  rectangle.h
//

#include <stdio.h>
#include <iostream>
#include "square.h"

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Square {

  public:

    Rectangle(double x, double y, char* name, double side_one, double side_two);

    double area();

    double perimeter();

    double getsidea()const;

    double getsideb()const;

    void setsidea(double side);

    void setsideb(double side);

    void display();

  protected:

    double side_b;

};


#endif
