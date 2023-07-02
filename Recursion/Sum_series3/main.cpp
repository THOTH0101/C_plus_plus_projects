/*
 * Write a recursive function to compute the following series:
 *
 *      f(n) = 1 + 3/4 + 3/5 + 1/2 + ... + 3/n + 2
 *
 * Write a test program that displays f(n) for n = 1, 2, . . . , 15.
 * */
#include <iostream>
#include <iomanip>
using namespace std;

//the nth term computation
double fN(int n)
{
    return 3.0/(n+2);
}

//sum series computation
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
        cout << "When n is " << setw(2) << n << " f(n) = " << sumSeries(n) << endl;

    return 0;
}
