//
// Created by thoth on 3/18/23.
//

#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
{
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}

Account::Account(int id, double balance)
{
    this->id = id;
    this->balance = balance;
    annualInterestRate = 0;
}

Account::Account(int id, double balance, double annualInterestRate)
{
    this->id = id;
    this->balance = balance;
    this->annualInterestRate = annualInterestRate;
}

double Account::getMonthlyInterestRate() const
{
    return annualInterestRate / 1200;
}

void Account::withdraw(double amount)
{
    if(balance == 0.0)
        cout << "Insufficient fund!" << endl;
    else if(amount > balance)
        cout << "Insufficient balance!" << endl;
    else
        balance -= amount;
}

void Account::deposit(double amount)
{
    balance += amount;
}