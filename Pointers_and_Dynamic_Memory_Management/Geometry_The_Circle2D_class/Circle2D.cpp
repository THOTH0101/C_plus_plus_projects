//
// Created by thoth on 3/19/23.
//

#include "Circle2D.h"
#include <cmath>

Circle2D::Circle2D()
{
    x = 0;
    y = 0;
    radius = 1;
}

Circle2D::Circle2D(double x, double y, double radius)
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

double Circle2D::getX() const
{
    return x;
}

double Circle2D::getY() const
{
    return y;
}

double Circle2D::getRadius() const
{
    return radius;
}

double Circle2D::getArea() const
{
    return radius * radius * 3.14159;
}

double Circle2D::getPerimeter() const
{
    return radius * 2 * 3.14159;
}

bool Circle2D::contains(double x, double y) const
{
    return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2)) < radius;
}

bool Circle2D::contains(const Circle2D &circle) const
{
    return (sqrt(pow(x - circle.getX(), 2) + pow(y - circle.getY(), 2))
    + circle.getRadius()) <= radius;
}

bool Circle2D::overlaps(const Circle2D &circle) const
{
    return (sqrt(pow(x - circle.getX(), 2) + pow(y - circle.getY(), 2))
            + circle.getRadius()) >= radius;
}