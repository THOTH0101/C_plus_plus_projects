/*
 * Write a program that computes the following summation series using the Rational class:
 *      1/2 + 2/3 + 3/4 + ... + 98/99 + 99/100
 *
 * */
#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    Rational sum = Rational(0);

    //put the series in a vector
    for(int i = 1; i < 100; i++)
    {
        int j = i + 1;
        Rational r(i, j);
        sum = sum + r;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
