//
// Created by thoth on 6/16/23.
//

#ifndef DERIVED_CLASSES_OF_ACCOUNT_SAVINGACCOUNT_H
#define DERIVED_CLASSES_OF_ACCOUNT_SAVINGACCOUNT_H

#include "Account.h"
class SavingAccount: public Account
{
public:
    SavingAccount();
    SavingAccount(int userId, double newBalance, double rate);
    void toString() const;
};


#endif //DERIVED_CLASSES_OF_ACCOUNT_SAVINGACCOUNT_H
