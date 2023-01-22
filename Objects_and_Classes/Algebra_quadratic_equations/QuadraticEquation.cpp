//
// Created by THOTH on 1/18/23.
//

#include "QuadraticEquation.h"
#include <cmath>

QuadraticEquation::QuadraticEquation(double A, double B, double C)
{
    a = A;
    b = B;
    c = C;
}

double QuadraticEquation::getA()
{
    return a;
}

double QuadraticEquation::getB()
{
    return b;
}

double QuadraticEquation::getC()
{
    return c;
}

double QuadraticEquation::getDiscriminant()
{
    return ((b * b) - (4 * a * c));
}

double QuadraticEquation::getRoot1()
{
    return (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
}

double QuadraticEquation::getRoot2()
{
    return (((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a));
}