/*(Algebra: 2 * 2 linear equations) Design a class named LinearEquation for a 2 * 2 system of linear equations:
ax + by = e   x =  ed - bf  y = af - ec
cx + dy = f        ad - bc      ad - bc

 *The class contains:
 *
 * *Private data fields a, b, c, d, e, and f.
 * *A constructor with the arguments for a, b, c, d, e, and f.
 * *Six get functions for a, b, c, d, e, and f.
 * *A function named isSolvable() that returns true if ad - bc is not 0.
 * *Functions getX() and getY() that return the solution for the equation.
 *Draw the UML diagram for the class and then implement the class. Write a test
 * program that prompts the user to enter a, b, c, d, e, and f and displays the result.
 * If ad - bc is 0, report that “The equation has no solution.” See Programming
 * Exercise 3.3 for sample runs.
 * */

#include <iostream>
#include "LinearEquation.h"
using namespace std;

int main()
{
    //prompt user for input
    cout << "Enter a, b, c, d, e, f: ";
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    //create object with user input
    LinearEquation equation(a, b, c, d, e, f);

    //display result
    if(equation.isSolvable())
        cout << "x is " << equation.getX() << " and y is " << equation.getY() << endl;
    else
        cout << "The equation has no solution." << endl;

    return 0;
}