// Curve Cut class
// curvecut.h


#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "circle.h"
#include "rectangle.h"

#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut : public Circle, public rectangle
{
  CurveCut(double x, double y, char* name, double side_one, double side_two, double radius);

  CurveCut(const CurveCut& source);

  CurveCut& operator =(const CurveCut& rhs);

  virtual double area();

  virtual double perimeter();

  void display();
};

#end
