#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount;
    double annualPercentageYield;
    int numberOfMonth;
    int count = 0;

    //prompt user to input the following detail
    cout << "Enter the initial deposit amount: ";
    cin >> amount;
    cout << "Enter annual percentage yield: ";
    cin >> annualPercentageYield;
    cout << "Enter maturity period (number of months): ";
    cin >> numberOfMonth;

    //calculate the monthly percentage yield
    double  monthlyPercentageYield = annualPercentageYield / 1200;

    //initialize monthly worth
    double monthlyWorth = amount;

    //compute a table for the monthly CD valve
    cout << "Month\tCD Value\n";
    while(count < numberOfMonth)
    {
        count++;
        monthlyWorth =+ monthlyWorth * (1 + monthlyPercentageYield);
        cout << count << "\t\t" << fixed << setprecision(2) << monthlyWorth << endl;
    }
    return 0;
}