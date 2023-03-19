//
// Created by thoth on 3/18/23.
//

#ifndef BUSINESS_ATM_MACHINE_ACCOUNT_H
#define BUSINESS_ATM_MACHINE_ACCOUNT_H

class Account
{
public:
    int id;
    double balance;
    double annualInterestRate;
    Account(); //no-args construct
    Account(int id, double balance);
    Account(int id, double balance, double annualInterestRate); //Account object
    double getMonthlyInterestRate() const; //returns monthly interest rate
    void withdraw(double amount); //withdraws a specified amount from the account
    void deposit(double amount); //deposits a specified amount to the account
};

#endif //BUSINESS_ATM_MACHINE_ACCOUNT_H
