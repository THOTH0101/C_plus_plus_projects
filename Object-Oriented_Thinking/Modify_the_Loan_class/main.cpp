#include <iostream>
#include <iomanip>
#include "Loan.h"
using namespace std;

int main()
{
    // Enter annual interest rate
    cout << "Enter yearly interest rate, for example 8.25: ";
    double annualInterestRate;
    cin >> annualInterestRate;

    // Enter number of years
    cout << "Enter number of years as an integer, for example 5: ";
    int numberOfYears;
    cin >> numberOfYears;

    // Enter loan amount
    cout << "Enter loan amount, for example 120000.95: ";
    double loanAmount;
    cin >> loanAmount;

    // Create Loan object
    Loan loan(annualInterestRate, numberOfYears, loanAmount);

    // Display results
    cout << fixed << setprecision(2);
    cout << "The monthly payment is " << loan.getMonthlyPayment() << endl;
    cout << "The total payment is " << loan.getTotalPayment() << endl;
    cout << "The monthly payment for annual interest rate of 3%, for 5 year, and loan amount of 1000 is "
    << Loan::getMonthlyPayment(3, 5, 1000) << endl;
    cout << "The total payment for annual interest rate of 3%, for 5 year, and loan amount of 1000 is "
    << Loan::getTotalPayment(3, 5, 1000) << endl;

    return 0;
}