//
// Created by thoth on 6/14/23.
//

#ifndef THE_TRIANGLE_CLASS_TRIANGLE_H
#define THE_TRIANGLE_CLASS_TRIANGLE_H

#include "GeometricObject.h"
class Triangle: public GeometricObject
{
public:
    Triangle();
    Triangle(double side1, double side2, double side3);
    Triangle(double side1, double side2, double side3, const string& color, bool filled);
    double getSide1() const;
    double getSide2() const;
    double getSide3() const;
    double getArea() const;
    double getPerimeter() const;
private:
    double side1;
    double side2;
    double side3;
};


#endif //THE_TRIANGLE_CLASS_TRIANGLE_H
