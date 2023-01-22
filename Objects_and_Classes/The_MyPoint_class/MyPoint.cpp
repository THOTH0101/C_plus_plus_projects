//
// Created by THOTH on 1/17/23.
//

#include "MyPoint.h"
#include <cmath>

MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}

MyPoint::MyPoint(double X, double Y)
{
    x = X;
    y = Y;
}

double MyPoint::getX()
{
    return x;
}

double MyPoint::getY()
{
    return y;
}

double MyPoint::getDistance(double X, double Y)
{
    return sqrt((x - X) * (x - X) + (y - Y) * (y - Y));
}