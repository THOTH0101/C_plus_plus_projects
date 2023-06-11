//
// Created by thoth on 6/8/23.
//

#include "CircleWithContactMemberFunctions.h"

int Circle::numberOfObjects = 0;

// Construct a circle object
Circle::Circle()
{
    radius = 1;
    numberOfObjects++;
}

// Construct a circle object
Circle::Circle(double newRadius)
{
    radius = newRadius;
    numberOfObjects++;
}

// Return the area of this circle
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() const
{
    return radius;
}

// Set a new radius
void Circle::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::compareTo(const Circle &secondCircle) const
{
    double temp = this->getArea() - secondCircle.getArea();

    if(temp < 0)
        return -1;
    else if(temp == 0)
        return 0;
    else
        return 1;
}

// Return the number of circle objects
int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}

//implementation the relational operators (<, <=, ==, !=, >, >=)
bool operator<(const Circle& c1, const Circle& c2)
{
    return c1.compareTo(c2) < 0;
}

bool operator<=(const Circle& c1, const Circle& c2)
{
    return c1.compareTo(c2) <= 0;
}

bool operator==(const Circle& c1, const Circle& c2)
{
    return c1.compareTo(c2) == 0;
}

bool operator!=(const Circle& c1, const Circle& c2)
{
    return c1.compareTo(c2) != 0;
}

bool operator>(const Circle& c1, const Circle& c2)
{
    return c1.compareTo(c2) > 0;
}

bool operator>=(const Circle& c1, const Circle& c2)
{
    return c1.compareTo(c2) >= 0;
}