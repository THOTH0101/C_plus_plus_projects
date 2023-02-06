/*
 *(Geometry: intersection) Suppose two line segments intersect. The two endpoints
 * for the first line segment are (x1, y1) and (x2, y2) and for the second line segment
 * are (x3, y3) and (x4, y4). Write a program that prompts the user to enter these four
 * endpoints and displays the intersecting point. Use the LinearEquation class in
 * Exercise 9.9 for finding the interesting point. See Programming Exercise 3.22 for sample runs.
 *
 * */

#include <iostream>
#include "LinearEquation.h"
using namespace std;

int main()
{
    //prompt user to enter these four endpoints
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    LinearEquation intercept(x1, y1, x2, y2, x3, y3, x4, y4);

    //displays the intersecting point
    if(intercept.isSolvable())
       cout << "The intersecting point is at (" << intercept.getX() << " , " << intercept.getY() << ')' << endl;
    else
         cout << "The two lines are parallel" << endl;

    return 0;
}