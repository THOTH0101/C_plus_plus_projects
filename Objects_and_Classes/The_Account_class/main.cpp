/*
 * (The Account class) Design a class named Account that contains:
 *
 * *An int data field named id for the account.
 * *A double data field named balance for the account.
 * *A double data field named annualInterestRate that stores the current interest rate.
 * *A no-arg constructor that creates a default account with id 0, balance 0, and annualInterestRate 0.
 * *The accessor and mutator functions for id, balance, and annualInterestRate.
 * *A function named getMonthlyInterestRate() that returns the monthly interest rate.
 * *A function named withdraw(amount) that withdraws a specified amount from the account.
 * *A function named deposit(amount) that deposits a specified amount to the account.
 *
 * Draw the UML diagram for the class. Implement the class. Write a test program that
 * creates an Account object with an account ID of 1122, a balance of 20000, and an
 * annual interest rate of 4.5%. Use the withdraw function to withdraw $2500, use
 * the deposit function to deposit $3000, and print the balance, the monthly interest.
 *
 * */
#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    //create an object
    Account account(1122, 20000, 4.5);

    account.withdraw(2500); //withdraw $2500

    account.deposit(3000); //deposit $3000

    //display properties
    cout << "Your new balance is " << account.balance << " with " << account.getMonthlyInterestRate()
    << " monthly interest" << endl;

    return 0;
}
