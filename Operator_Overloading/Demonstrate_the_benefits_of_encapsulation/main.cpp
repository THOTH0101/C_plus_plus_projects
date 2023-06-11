/*
 *  Rewrite the Rational class in Section14.2 using a new internal representation for the numerator
 *  and denominator. Declare an array of two integers as follows:
 *      int r[2];
 *  Use r[0] to represent the numerator and r[1] to represent the denominator. The signatures of the
 *  functions in the Rational class are not changed, so a client application that uses the previous
 *  Rational class can continue to use this new Rational class without any modification.
 *
 * */
#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    // Create and initialize two rational numbers r1 and r2.
    Rational r1(4, 2);
    Rational r2(2, 3);

    // Test relational operators
    cout << r1 << " > " << r2 << " is " << ((r1 > r2) ? "true" : "false") << endl;
    cout << r1 << " < " << r2 << " is " << ((r1 < r2) ? "true" : "false") << endl;
    cout << r1 << " == " << r2 << " is " << ((r1 == r2) ? "true" : "false") << endl;
    cout << r1 << " != " << r2 << " is " << ((r1 != r2) ? "true" : "false") << endl;

    // Test toString, add, subtract, multiply, and divide operators
    cout << r1 << " + " << r2 << " = " << r1 + r2 << endl;
    cout << r1 << " - " << r2 << " = " << r1 - r2 << endl;
    cout << r1 << " * " << r2 << " = " << r1 * r2 << endl;
    cout << r1 << " / " << r2 << " = " << r1 / r2 << endl;

    // Test augmented operators
    Rational r3(1, 2);
    r3 += r1;
    cout << "r3 is " << r3 << endl;

    // Test function operator []
    Rational r4(1, 2);
    r4[0] = 3; r4[1] = 4;
    cout << "r4 is " << r4 << endl;

    // Test function operators for prefix ++ and --
    r3 = r4++;
    cout << "r3 is " << r3 << endl;
    cout << "r4 is " << r4 << endl;

    // Test function operator for conversion
    cout << "1 + " << r4 << " is " << (1 + r4) << endl;

    return 0;
}