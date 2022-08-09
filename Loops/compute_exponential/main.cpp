#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;
    double denum = 1;
    double frac;
    double sum = 1;
    int x;
    cout << "Enter the value for x for e^x: ";
    cin >> x;

    //compute exponential for x
    for(int j = 1; j <= 15; j++)
        {
            num = pow(x, j);
            denum = denum * j;
            frac = num / denum;
            sum += frac;
        }
    cout << "The exponential value for x is " << sum << endl;
    return 0;
}