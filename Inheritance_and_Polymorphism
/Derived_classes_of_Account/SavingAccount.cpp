//
// Created by thoth on 6/16/23.
//

#include "SavingAccount.h"
#include <iostream>
using namespace std;

SavingAccount::SavingAccount() : Account(){}

SavingAccount::SavingAccount(int userId, double newBalance, double rate) : Account(userId, newBalance, rate){}

void SavingAccount::toString() const
{
    cout << "Account number: " << SavingAccount::id << endl;
    cout << "Account balance: " << SavingAccount::balance << endl;
}