//
// Created by thoth on 6/16/23.
//

#ifndef DERIVED_CLASSES_OF_ACCOUNT_ACCOUNT_H
#define DERIVED_CLASSES_OF_ACCOUNT_ACCOUNT_H

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
    virtual void toString() const;
};

#endif //DERIVED_CLASSES_OF_ACCOUNT_ACCOUNT_H
