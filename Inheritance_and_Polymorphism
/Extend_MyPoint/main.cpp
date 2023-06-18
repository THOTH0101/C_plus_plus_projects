/*
 * In Programming Exercise 9.4, the MyPoint class was created to model a point in a two-dimensional space.
 * The MyPoint class has the properties x and y that represent x- and y-coordinates, two get functions for
 * x and y, and the function for returning the distance between two points. Create a class named ThreeDPoint
 * to model a point in a three-dimensional space. Let ThreeDPoint be derived from MyPoint with the following
 * additional features:
 *
 *  -A data field named z that represents the z-coordinate.
 *  -A no-arg constructor that constructs a point with coordinates (0, 0, 0).
 *  -A constructor that constructs a point with three specified coordinates.
 *  -A constant get function that returns the z value.
 *  -A constant distance(const MyPoint&) function to return the distance between this point and the other
 *  point in the three-dimensional space.
 *
 * Draw the UML diagram for the classes involved. Implement the classes. Write a test program that creates
 * two points (0, 0, 0) and (10, 30, 25.5) and displays the distance between them.
 *
 * */
#include <iostream>
#include "MyPoint.h"
#include "ThreeDPoint.h"
using namespace std;

int main()
{
    //create objects
    ThreeDPoint p1;
    ThreeDPoint p2(10, 30, 25.5);

    //display distance
    cout << "The distance between (" << p1.getX() << ", " << p1.getY() << ") and (" << p2.getX()
    << ", " << p2.getY() << ") is " << p1.distance(p2) << endl;

    return 0;
}
