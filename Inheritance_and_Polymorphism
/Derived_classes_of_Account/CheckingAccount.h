//
// Created by thoth on 6/16/23.
//

#ifndef DERIVED_CLASSES_OF_ACCOUNT_CHECKINGACCOUNT_H
#define DERIVED_CLASSES_OF_ACCOUNT_CHECKINGACCOUNT_H

#include "Account.h"
class CheckingAccount: public Account
{
public:
    double limit;
    CheckingAccount();
    CheckingAccount(double limit, int userId, double newBalance, double rate);
    void toString() const;
};


#endif //DERIVED_CLASSES_OF_ACCOUNT_CHECKINGACCOUNT_H
