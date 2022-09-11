#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int loanAmount;
    int year;
    int endInterestRate = 8;
    double interestRate = 5.000;
    double interestIncrement = 1.0/8;
    cout << "Loan amount: ";
    cin >> loanAmount;
    cout << "Number of Years: ";
    cin >> year;

    cout << "Interest Rate    Monthly Payment    Total Payment\n";

    while(interestRate <= endInterestRate)
    {
        cout << fixed << setprecision(3) << interestRate << "%";

        //Obtain monthly interest rate
        double monthlyInterestRate = interestRate / 1200;

        //calculate payment
        double monthlyPayment = loanAmount * monthlyInterestRate /
                (1 - 1 / pow(1 + monthlyInterestRate, year * 12));
        double totalPayment = monthlyPayment * year * 12;
        monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
        totalPayment = static_cast<int>(totalPayment * 100) / 100.0;
        cout << "           " << fixed << setprecision(2) << monthlyPayment;
        cout << "             " << fixed << setprecision(2) << totalPayment;
        interestRate += interestIncrement;
        cout << endl;
    }
    return 0;
}