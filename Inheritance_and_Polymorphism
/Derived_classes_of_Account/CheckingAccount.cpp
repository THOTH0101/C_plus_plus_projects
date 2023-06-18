//
// Created by thoth on 6/16/23.
//

#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount() : Account()
{
    limit = 0;
}

CheckingAccount::CheckingAccount(double limit, int userId, double newBalance, double rate)
: Account(userId, newBalance, rate)
{
    this->limit = limit;
}

void CheckingAccount::toString() const
{
    cout << "Account number: " << CheckingAccount::id << endl;
    cout << "Account balance: " << CheckingAccount::balance << endl;
}