#include <iostream>
#include "Location.h"
using namespace std;

int main()
{
    double a[ROW_SIZE][COLUMN_SIZE];

    //prompt user to enter the array values
    cout << "Enter a 3-by-4 two-dimensional array:" << endl;

    for(auto & i : a)
        for(double & j : i)
            cin >> j;

    Location locateLargest(a); //create an object

    //print largest element
    cout << "The location of the largest element is " << locateLargest.maxValue << " at (" << locateLargest.row
    << ", " << locateLargest.column << ")";

    return 0;
}
