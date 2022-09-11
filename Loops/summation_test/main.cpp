#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 0;

    //create a loop to calculate the summation
    for(int x = 99, y = 93; y >= 3; y-=6, x-=6)
    {
        double denum = cbrt(x) - cbrt(y);
        sum += 1/denum;
    }

    //print the result of the summation
    cout << "The summation of the expression is " << sum << endl;
    return 0;
}
