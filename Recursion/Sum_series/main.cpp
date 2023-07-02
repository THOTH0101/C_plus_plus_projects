/*
 * Write a recursive function to compute the following series:
 *
 *  f(n) = 1 + 1/4 + 1/9 + ... + 1/n^2
 *
 * Write a test program that displays f(n) for n = 1, 2, . . . , 15.
 * */
#include <iostream>
using namespace std;

//compute value for each term
double fN(int n)
{
    return 1.0 / (n*n);
}

//compute recursive sum series
double sumSeries(int n)
{
    if(n == 1)
        return 1;
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