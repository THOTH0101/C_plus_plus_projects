/*
 *  In Programming Exercise 9.3, the Account class was created to model a bank account. An account has
 *  the properties account number, balance, and annual interest rate, date created, and functions to deposit
 *  and withdraw. Create two derived classes for checking and saving accounts. A checking account has an
 *  overdraft limit, but a savings account cannot be over-drawn. Define a constant virtual toString()
 *  function in the Account class and override it in the derived classes to return the account number
 *  and balance as a string.
 *  Draw the UML diagram for the classes. Implement the classes. Write a test program that creates objects
 *  of Account, SavingsAccount, and CheckingAccount and invokes their toString() functions.
 *
 * */
#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
using namespace std;

int main()
{
    //create objects
    Account a1(0001, 50000, 25.0);
    SavingAccount a2(0002, 45000, 35.5);
    CheckingAccount a3(500, 0003, 65000, 48.6);

    //invoke toString() function for each account
    cout << "Account toString():" << endl;
    a1.toString();
    cout << "SavingAccount toString():" << endl;
    a2.toString();
    cout << "CheckingAccount toString():" << endl;
    a3.toString();

    return 0;
}
