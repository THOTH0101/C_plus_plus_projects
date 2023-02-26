//
// Created by thoth on 2/26/23.
//

#include "RegularPolygon.h"
#include <cmath>

RegularPolygon::RegularPolygon()
{
    n = 3;
    side = 1;
    x = 0;
    y = 0;
}

RegularPolygon::RegularPolygon(int N, double SIDE)
{
    n = N;
    side = SIDE;
    x = 0;
    y = 0;
}

RegularPolygon::RegularPolygon(int N, double SIDE, double X, double Y)
{
    n = N;
    side = SIDE;
    x = X;
    y = Y;
}

int RegularPolygon::getN() const
{
    return n;
}

double RegularPolygon::getSide() const
{
    return side;
}

double RegularPolygon::getX() const
{
    return x;
}

double RegularPolygon::getY() const
{
    return y;
}

void RegularPolygon::setN(int N)
{
    n = N;
}

void RegularPolygon::setSide(double SIDE)
{
    side = SIDE;
}

void RegularPolygon::setX(double X)
{
    x = X;
}

void RegularPolygon::setY(double Y)
{
    y = Y;
}

double RegularPolygon::getPerimeter() const
{
    return n * side;
}

double RegularPolygon::getArea() const
{
    double PI = 22.0 / 7;
    return (n * pow(side, 2)) / (4 * tan(PI / n));
}