//
// Created by THOTH on 1/16/23.
//

#include "Account.h"

Account::Account()
{
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}

Account::Account(int userId, double newBalance, double rate)
{
    id = userId;
    balance = newBalance;
    annualInterestRate = rate;
}

double Account::getMonthlyInterestRate()
{
    return annualInterestRate / 1200;
}

void Account::withdraw(double amount)
{
    balance -= amount;
}

void Account::deposit(double amount)
{
    balance += amount;
}