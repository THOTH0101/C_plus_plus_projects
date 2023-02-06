//
// Created by THOTH0101 on 2/4/23.
//

#include "LinearEquation.h"

LinearEquation::LinearEquation(double X1, double Y1, double X2, double Y2, double X3, double Y3, double X4, double Y4)
{
    x1 = X1;
    y1 = Y1;
    x2 = X2;
    y2 = Y2;
    x3 = X3;
    y3 = Y3;
    x4 = X4;
    y4 = Y4;
    a = y2 - y1;
    b = x1 - x2;
    c = (a * x1) + (b * y1);
    a1 = y4 - y3;
    b1 = x3 - x4;
    c1 = (a1 * x3) + (b1 * y3);
    determinant = (a * b1) - (a1 * b);
}

bool LinearEquation::isSolvable()
{
    if(determinant == 0)
        return false;
    else
        return true;
}

double LinearEquation::getX()
{
    return (b1 * c - b * c1) / determinant;
}

double LinearEquation::getY()
{
    return (a * c1 - a1 * c) / determinant;
}