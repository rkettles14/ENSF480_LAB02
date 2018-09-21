//  Square class
//  square.h
//

#include <stdio.h>
#include <iostream.h>


using namespace std;

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape {

  public:

    Square(double x, double y, char* name, double side_one);

    // Square(const Square& source);
    //
    // Square& operator =(const Square& rhs);

    virtual double area();

    virtual double perimeter();

    double getsidea()const;

    void setsidea(double side);

    void display();

  protected:

    double side_a;

};


#endif
