/*
 * Rewrite the subscript operator function in the Rational class in Listing 14.8, RationalWithOperators.cpp
 * to throw a runtime_error if the index is not 0 or 1.
 *
 * */
#include <iostream>
#include <stdexcept>
#include "RationalWithOperators.h"
using namespace std;

int main()
{
    try
    {
        Rational rational(7, 8);
        cout << rational[2];
    }
    catch(runtime_error& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}
