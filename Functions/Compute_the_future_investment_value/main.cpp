#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years);


int main()
{
    const int YEARS_FOR_INVESTMENT = 30;
    const int NUMBER_OF_MONTHS_IN_A_YEAR = 12;
    double investmentAmount;
    double annualInterestRate;

    //prompt user to enter invested amount
    cout << "The amount invested: ";
    cin >> investmentAmount;

    //prompt user for annual interest rate
    cout << "Annual interest rate: ";
    cin >> annualInterestRate;

    //compute monthly interest rate
    double monthlyInterestRate = (annualInterestRate / 100) / NUMBER_OF_MONTHS_IN_A_YEAR;

    //table title
    cout << "Years\tFutureValue" << endl;

    //loop to compute investment for the next 30years
    for(int years = 1; years <= YEARS_FOR_INVESTMENT; years++)
    {
        cout << years << setw(5) << "\t";

        //call futureInvestmentValue function
        cout << fixed << setprecision(2) <<
        futureInvestmentValue(investmentAmount, monthlyInterestRate, years) << endl;
    }

    return 0;
}

//function definition
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
{
    return investmentAmount * pow((1 + monthlyInterestRate), years * 12);
}