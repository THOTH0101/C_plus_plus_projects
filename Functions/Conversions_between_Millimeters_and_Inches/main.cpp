#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double millimetersToInches(double millimeters);
double inchesToMillimeters(double inches);

int main()
{
    //conversion title
    cout << "Millimeters\t\tInches\t|\tInches\t\tMillimeters" << endl;

    //loop for computing the conversion list
    for(int i = 2, j = 1; i <= 100 && j <= 50; i+=2, j++)
    {
        cout << i << setw(10) << "\t\t";
        cout << fixed << setprecision(3) << millimetersToInches(i) << " " << "\t";
        cout << "|\t" << j << setw(6) << "\t\t";
        cout << fixed << setprecision(3) << inchesToMillimeters(j) << endl;
    }

    return 0;
}

// Convert from millimeters to inches
double millimetersToInches(double millimeters)
{
    return millimeters * 0.039;
}

// Convert from inches to millimeters
double inchesToMillimeters(double inches)
{
    return inches / 0.039;
}