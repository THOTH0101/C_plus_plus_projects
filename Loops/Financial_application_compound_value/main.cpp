#include <iostream>
using namespace std;

int main()
{
    double annualInterestRate;
    double amount;
    int numberOfMonth;
    int count = 0;

    //prompt user to enter the following detail
    cout << "Enter An Amount: $";
    cin >> amount;
    cout << "Enter The Annual Interest Rate(e.g. 0.05 for 5%): ";
    cin >> annualInterestRate;
    cout << "Enter The Number of Month: ";
    cin >> numberOfMonth;

    //calculate monthly interest rate
    double monthlyInterestRate = annualInterestRate / 12;

    //initialize monthly savings amount
    double savingsAmount = 0;

    //compute the amount in the savings account after the given month
    while(count < numberOfMonth)
    {
        count++;
        savingsAmount =+ (savingsAmount + amount) * (1 + monthlyInterestRate);
    }

    //display the total savings
    cout << "The Amount in the Savings Account after " << numberOfMonth << " is $" << savingsAmount << endl;
    return 0;
}