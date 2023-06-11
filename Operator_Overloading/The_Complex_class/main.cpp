/*
 *  A complex number has the form a + bi, where a and b are real numbers and i is sqrt(-1). the number
 *  a and b are known as the real part and imaginary part of the complex number, respectively. You can
 *  perform addition, subtraction, multiplication, and division for complex numbers using the following
 *  formulas:
 *
 *      a + bi + c + di = (a + c) + (b + d)i
 *      a + bi - (c + di) = (a - c) + (b - d)i
 *      (a + bi) * (c + di) = (ac - bd) + (bc + ad)i
 *      (a + bi) / (c + di) = (ac + bd) / (c2 + d2) + (bc - ad)i / (c2 + d 2)
 *
 *  You can also obtain the absolute value for a complex number using the following formula:
 *
 *      |a + bi| = sqrt(a * a + b * b)
 *
 *  (A complex number can be interpreted as a point on a plane by identifying the (a, b) values as the
 *  coordinates of the point. The absolute value of the complex number corresponds to the distance of the
 *  point to the origin).
 *
 *  Design a class named Complex for representing complex numbers and the functions add, subtract, multiply,
 *  divide, abs for performing complex-number operations, and the toString function for returning a string
 *  representation for a complex number. The toString function returns a + bi as a string. If b is 0, it simply
 *  returns a . Provide three constructors Complex(a, b), Complex(a), and Complex(). Complex() creates
 *  a Complex object for number 0 and Complex(a) creates a Complex object with 0 for b. Also provide the
 *  getRealPart() and getImaginaryPart() functions for returning the real and imaginary part of the complex
 *  number, respectively. Overload the operators +, -, *, /, +=, -=, *=, /=, [], unary + and -, prefix ++
 *  and --, postfix ++ and --, <<, >>. Overload the operators +, -, *, / as nonmember functions. Overload []
 *  so that [0] returns a and [1] returns b.
 *
 *  Write a test program that prompts the user to enter two complex numbers and display the result of their
 *  addition, subtraction, multiplication, and division.
 *
 * */
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    double a, b;

    //prompts the user to enter two complex numbers
    cout << "Enter the first complex number: ";
    cin >> a >> b;
    Complex c1(a, b); //create first complex object

    cout << "Enter the second complex number: ";
    cin >> a >> b;
    Complex c2(a, b);

    //perform arithmetic operation
    cout << "(" << c1 << ") + (" << c2 << ") = " << (c1 + c2) << endl;
    cout << "(" << c1 << ") - (" << c2 << ") = " << (c1 - c2) << endl;
    cout << "(" << c1 << ") * (" << c2 << ") = " << (c1 * c2) << endl;
    cout << "(" << c1 << ") / (" << c2 << ") = " << (c1 / c2) << endl;
    cout << "|"<< c1 << "|" << " = " << c1.abs();

    return 0;
}