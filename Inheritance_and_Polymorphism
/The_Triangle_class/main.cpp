/*
 * Design a class named Triangle that extends GeometricObject. The class contains the following:
 *
 * * * Three double data fields named side1, side2, and side3 to denote three sides of the triangle.
 * * * A no-arg constructor that creates a default triangle with each side 1.0.
 * * * A constructor that creates a rectangle with the specified side1, side2, and side3.
 * * * The constant accessor functions for all three data fields.
 * * * A constant function named getArea() that returns the area of this triangle.
 * * * A constant function named getPerimeter() that returns the perimeter of this triangle.
 *
 * Draw the UML diagram that involves the classes Triangle and Geometric Object. Implement the class.
 * Write a test program that prompts the user to enter three sides of the triangle, enter a color, and
 * enter 1 or 0 to indicate whether the triangle is filled. The program should create a Triangle object
 * with these sides and set the color and filled properties using the input. The program should display
 * the area, perimeter, color, and true or false to indicate whether filled or not.
 *
 * */

#include <iostream>
#include "GeometricObject.h"
#include "Triangle.h"
using namespace std;

// A function for displaying a geometric object
void displayGeometricObject(GeometricObject& g);

int main()
{
    //prompts the user to enter three sides of the triangle, enter a color, and enter 1 or 0 to indicate
    //whether the triangle is filled
    cout << "Enter three sides of the triangle: ";
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    cout << "Enter a colour: ";
    string colour;
    cin >> colour;

    cout << "Enter is filled(1 or 0 to indicate whether the triangle is filled): ";
    bool isFilled;
    cin >> isFilled;

    //create triangle object with input
    Triangle triangle(side1, side2, side3, colour, isFilled);

    //display object info
    cout << "Triangle info:" << endl;
    displayGeometricObject(triangle);


    return 0;
}

void displayGeometricObject(GeometricObject& g)
{
    cout << "The area is " << g.getArea() << endl;
    cout << "The perimeter is " << g.getPerimeter() << endl;
    cout << "The colour is " << g.getColor() << endl;
    cout << "Filled: " << (g.isFilled() ? "true" : "false") << endl;
    GeometricObject* p = &g;
    auto* p1 = dynamic_cast<Triangle*>(p);
    if (p1 != nullptr)
    {
        cout << "The first side is " << p1->getSide1() << endl;
        cout << "The second side is " << p1->getSide2() << endl;
        cout << "The third side is " << p1->getSide3() << endl;
    }
}