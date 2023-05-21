//
// Created by thoth on 5/17/23.
//

#ifndef NEW_ACCOUNT_CLASS_ACCOUNT_H
#define NEW_ACCOUNT_CLASS_ACCOUNT_H
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account
{
public:
    int id;
    string name;
    double balance;
    static double annualInterestRate;
    vector<Transaction> transactions;
    Account(); //no-args construct
    Account(int userId, double newBalance, double rate); //Account object
    Account(string name, int id, double balance, double rate);
    double getMonthlyInterestRate(); //returns monthly interest rate
    void withdraw(double amount); //withdraws a specified amount from the account
    void deposit(double amount); //deposits a specified amount to the account
};

double Account::annualInterestRate = 0;

Account::Account()
{
    id = 0;
    balance = 0;
}

Account::Account(int userId, double newBalance, double rate)
{
    id = userId;
    balance = newBalance;
    annualInterestRate = rate;
}

Account::Account(string name, int id, double balance, double rate)
{
    this->name = name;
    this->id = id;
    this->balance = balance;
    annualInterestRate = rate;
}

double Account::getMonthlyInterestRate()
{
    return annualInterestRate / 1200;
}

void Account::withdraw(double amount)
{
    balance -= amount;
    Date date; //create date object for withdrawal date

    //create transaction object for the transaction made
    Transaction trans(date, 'W', amount, balance, "You made a withdrawal");
    transactions.push_back(trans);
}

void Account::deposit(double amount)
{
    balance += amount;
    Date date; //create date object for deposit date

    //create transaction object for the transaction made
    Transaction trans(date, 'D', amount, balance, "You made a deposit");
    transactions.push_back(trans);
}

#endif //NEW_ACCOUNT_CLASS_ACCOUNT_H
