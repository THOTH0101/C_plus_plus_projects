#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int loanAmount;
    int numberOfYears;
    double annualInterestRate;

    //Ask user enter data input
    cout << "Loan Amount: ";
    cin >> loanAmount;
    cout << "Number of Years: ";
    cin >> numberOfYears;
    cout << "Annual Interest Rate: ";
    cin >> annualInterestRate;
    cout << endl;

    //Obtain monthly interest rate
    double monthlyInterestRate = annualInterestRate / 1200;

    //calculate payment
    double monthlyPayment = loanAmount * monthlyInterestRate /
            (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
    double totalPayment = monthlyPayment * numberOfYears * 12;
    monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
    totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

    //Display monthly payment and total payment computed
    cout << "Monthly Payment: " << monthlyPayment << endl;
    cout << " Total Payment: " << totalPayment << endl;
    cout << endl;

    //Compute the interest and principal and update the balance
    double balance = loanAmount;
    cout << "Payment#\tInterest\tPrincipal\tBalance\n";

    for(int i = 1; i <= numberOfYears * 12; i++)
    {
        double interest = monthlyInterestRate * balance;
        double principal = monthlyPayment - interest;
        balance = balance - principal;
        cout << i << "\t\t\t" << fixed << setprecision(2) << setw(5) << interest
        << "\t\t" << principal << "\t\t" << setw(7) << balance << endl;
    }
    return 0;
}