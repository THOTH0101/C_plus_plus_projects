/*
 *  Write a recursive function to compute the following series:
 *
 *      f(n) = 1/3 + 1/8 + 1/15 + ... + 1/n(n+2)
 *
 *  Write a test program that displays f(n) for n = 1, 2, . . . , 15.
 * */
#include <iostream>
using namespace std;

//computation for individual nth term
double fN(int n)
{
    return 1.0/(n*(n+2));
}

//computation for the sumSeries using recursion
double sumSeries(int n)
{
    if(n == 1)
        return fN(1);
    else
        return sumSeries(n - 1) + fN(n);
}

int main()
{
    //display sum series of the following term
    for(int n = 1; n <= 15; n++)
        cout << "When n is " << n << " f(n) = " << sumSeries(n) << endl;

    return 0;
}