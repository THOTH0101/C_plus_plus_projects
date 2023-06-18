//
// Created by thoth on 6/16/23.
//

#include <iostream>
#include "Account.h"
using namespace std;

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

void Account::toString() const
{
    cout << "Account number: " << Account::id << endl;
    cout << "Account balance: " << Account::balance << endl;
}