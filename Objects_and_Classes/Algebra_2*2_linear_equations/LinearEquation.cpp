//
// Created by THOTH0101 on 1/30/23.
//

#include "LinearEquation.h"

LinearEquation::LinearEquation(double A, double B, double C, double D, double E, double F)
{
    a = A;
    b = B;
    c = C;
    d = D;
    e = E;
    f = F;
}

double LinearEquation::getA()
{
    return a;
}

double LinearEquation::getB()
{
    return b;
}

double LinearEquation::getC()
{
    return c;
}

double LinearEquation::getD()
{
    return d;
}

double LinearEquation::getE()
{
    return e;
}

double LinearEquation::getF()
{
    return f;
}

bool LinearEquation::isSolvable()
{
    if((a * d - b * c) != 0)
        return true;

    return false;
}

double LinearEquation::getX()
{
    return (e * d - b * f) / (a * d - b * c);
}

double LinearEquation::getY()
{
    return (a * f - e * c) / (a * d - b * c);
}