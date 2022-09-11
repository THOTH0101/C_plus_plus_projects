#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n = 1;
    long double sum = 0;
    long double frac;
    int numberOfDecimal;

    cout << "Enter the number of decimal places: ";
    cin >> numberOfDecimal;

    //compute PI
    while(n <= numberOfDecimal)
    {
        frac = 1.0 / powl(n, 2);
        sum += frac;
        n++;
    }
    long double pi = sqrt(6 * sum);
    cout << "PI is " << fixed << setprecision(numberOfDecimal) << pi;
    return 0;
}