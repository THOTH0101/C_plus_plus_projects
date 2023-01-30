/*
 * (Algebra: quadratic equations) Design a class named QuadraticEquation for a quadratic equation
 * ax2 + bx + x = 0. The class contains:
 *
 * *Data fields a, b, and c that represent three coefficients.
 * *A constructor for the arguments for a, b, and c.
 * *Three get functions for a, b, and c.
 * *A function named getDiscriminant() that returns the discriminant, which is b2 - 4ac.
 * *The functions named getRoot1() and getRoot2() for returning two roots of the equation:
 * r 1 = -b + sqrt(b^2 - 4ac) / 2a and r 2 = -b - sqrt(b^2 - 4ac) / 2a
 *
 * These functions are useful only if the discriminant is non-negative. Let these functions return 0
 * if the discriminant is negative.
 *
 * Draw the UML diagram for the class. Implement the class. Write a test program
 * that prompts the user to enter values for a, b, and c, and displays the result based
 * on the discriminant. If the discriminant is positive, display the two roots. If the
 * discriminant is 0, display the one root. Otherwise, display "The equation has
 * no real roots".
 *
 * */
#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main()
{
    //prompts the user to enter values for a, b, and c
    cout << "Enter values for a, b, and c: ";
    double a, b, c;
    cin >> a >> b >> c;

    QuadraticEquation problem(a, b, c);

    if(problem.getDiscriminant() < 0)
        cout << "The equation has no real roots" << endl;
    else if(problem.getDiscriminant() == 0)
        cout << "The equation root is " << problem.getRoot1() << endl;
    else
        cout << "The equation root are " << problem.getRoot1() << " and " << problem.getRoot2() << endl;

    return 0;
}
