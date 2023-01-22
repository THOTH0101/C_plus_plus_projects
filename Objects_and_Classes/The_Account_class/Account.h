//
// Created by THOTH on 1/16/23.
//

#ifndef THE_ACCOUNT_CLASS_ACCOUNT_H
#define THE_ACCOUNT_CLASS_ACCOUNT_H

class Account
{
public:
    int id;
    double balance;
    double annualInterestRate;
    Account(); //no-args construct
    Account(int userId, double newBalance, double rate); //Account object
    double getMonthlyInterestRate(); //returns monthly interest rate
    void withdraw(double amount); //withdraws a specified amount from the account
    void deposit(double amount); //deposits a specified amount to the account
};

#endif //THE_ACCOUNT_CLASS_ACCOUNT_H
