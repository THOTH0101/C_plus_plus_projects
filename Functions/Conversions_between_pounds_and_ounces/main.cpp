#include <iostream>
#include <iomanip>
using namespace std;

double poundsToOunces(double pounds);
double ouncesToPounds(double ounces);

int main()
{
    //title header
    cout << "Pounds\t\tOunces\t|\tOunces\t\tPounds" << endl;

    //loop compute conversion in pattern
    for(int i = 11, j = 1; i <= 20 && j <= 10; i++, j++)
    {
        cout << i << setw(6) << "\t\t";
        cout << poundsToOunces(i) << setw(5) << "\t";
        cout << "|\t" << j << setw(6) << "\t\t";
        cout << setprecision(4) << ouncesToPounds(j) << endl;
    }
    return 0;
}

// Convert from pounds to ounces
double poundsToOunces(double pounds)
{
    return pounds * 16;
}

// Convert from ounces to pounds
double ouncesToPounds(double ounces)
{
    return ounces / 16;
}