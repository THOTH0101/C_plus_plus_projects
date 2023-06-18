//
// Created by thoth on 6/14/23.
//

#include "Triangle.h"
#include <cmath>
using namespace std;

Triangle::Triangle()
{
    side1 = 1.0;
    side2 = 1.0;
    side3 = 1.0;
}

Triangle::Triangle(double side1, double side2, double side3)
{
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
}

Triangle::Triangle(double side1, double side2, double side3, const std::string &color, bool filled)
{
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
    setColor(color);
    setFilled(filled);
}

double Triangle::getSide1() const
{
    return side1;
}

double Triangle::getSide2() const
{
    return side2;
}

double Triangle::getSide3() const
{
    return side3;
}

double Triangle::getArea() const
{
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

double Triangle::getPerimeter() const
{
    return side1 + side2 + side3;
}