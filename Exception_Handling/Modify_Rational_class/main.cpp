/*
 * Section 14.4, “Overloading the Subscript Operator [],” introduced how to overload the subscript operator
 * [] in the Rational class. If the subscript is neither 0 nor 1, the function throws a runtime_error
 * exception. Define a custom exception called IllegalSubscriptException and let the function operator
 * throw an IllegalSubscriptException if the subscript is neither 0 nor 1. Write a test program with a
 * try-catch block to handle this type of exception.
 *
 * */
#include <iostream>
#include "Rational.h"
#include "IllegalSubscriptException.h"
using namespace std;

int main()
{
    try
    {
        Rational rational(3, 4);
        cout << rational[2];
    }
    catch(IllegalSubscriptException& ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}
