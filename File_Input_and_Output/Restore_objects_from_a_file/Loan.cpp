//
// Created by thoth on 5/30/23.
//

#include "Loan.h"
#include <cmath>
using namespace std;
Loan::Loan()
{
    annualInterestRate = 9.5;
    numberOfYears = 30;
    loanAmount = 100000;
}

Loan::Loan(double rate, int years, double amount)
{
    annualInterestRate = rate;
    numberOfYears = years;
    loanAmount = amount;
}

double Loan::getAnnualInterestRate() const
{
    return annualInterestRate;
}

int Loan::getNumberOfYears() const
{
    return numberOfYears;
}

double Loan::getLoanAmount() const
{
    return loanAmount;
}

void Loan::setAnnualInterestRate(double rate)
{
    annualInterestRate = rate;
}

void Loan::setNumberOfYears(int years)
{
    numberOfYears = years;
}

void Loan::setLoanAmount(double amount)
{
    loanAmount = amount;
}

double Loan::getMonthlyPayment() const
{
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 -
                                               (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

double Loan::getTotalPayment() const
{
    return getMonthlyPayment() * numberOfYears * 12;
}