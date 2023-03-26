//
// Created by thoth on 3/25/23.
//

#include "Rectangle2D.h"
#include <cmath>

Rectangle2D::Rectangle2D()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

double Rectangle2D::getX() const
{
    return x;
}

double Rectangle2D::getY() const
{
    return y;
}

double Rectangle2D::getWidth() const
{
    return width;
}

double Rectangle2D::getHeight() const
{
    return height;
}

void Rectangle2D::setX(double x)
{
    this->x = x;
}

void Rectangle2D::setY(double y)
{
    this->y = y;
}

void Rectangle2D::setWidth(double width)
{
    this->width = width;
}

void Rectangle2D::setHeight(double height)
{
    this->height = height;
}

double Rectangle2D::getArea() const
{
    return width * height;
}

double Rectangle2D::getPerimeter() const
{
    return 2 * (width + height);
}

bool Rectangle2D::contains(double x, double y) const
{
    return sqrt(pow(y - this->y, 2)) <= height / 2 && sqrt(pow(x - this->x, 2)) <= width / 2;
}

bool Rectangle2D::contains(const Rectangle2D &r) const
{
    return sqrt(pow(r.getY() - y, 2)) + r.getHeight() / 2 <= height / 2 &&
            sqrt(pow(r.getX() - x, 2)) + r.getWidth() / 2 <= width / 2 &&
            height / 2 + r.getHeight() / 2 <= height &&
            width / 2 + r.getWidth() / 2 <= width;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
    return !contains(r) &&
    x + width / 2 > r.getX() - r.getWidth() ||
    y + height / 2 > r.getY() - r.getHeight() &&
            sqrt(pow(r.getY() - y, 2)) < height / 2 + r.getHeight() / 2 &&
            sqrt(pow(r.getX() - x, 2)) < width / 2 + r.getWidth() / 2;
}
