#include <iostream>
using namespace std;

int main()
{
    int largestNthTerm = 50000;
    int smallestNthTerm = 1;
    double n = smallestNthTerm;
    double n2 = largestNthTerm;
    double frac;
    double sum = 0;
    double frac2;
    double sum2 = 0;

    //compute summation form left to right
    while(n <= largestNthTerm)
    {
        frac = 1.0 / n;
        sum += frac;
        n++;
    }
    cout << "The summation from left to right is " << sum << endl;

    //compute summation from right to left
    while(n2 >= smallestNthTerm)
    {
        frac2 = 1.0 / n2;
        sum2 += frac2;
        n2--;
    }
    cout << "The summation from right to left is " << sum2 << endl;
    return 0;
}