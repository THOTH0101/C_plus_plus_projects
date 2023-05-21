//
// Created by thoth on 5/17/23.
//

#ifndef NEW_ACCOUNT_CLASS_TRANSACTION_H
#define NEW_ACCOUNT_CLASS_TRANSACTION_H
#include <string>
#include "Date.h"
using namespace std;

class Transaction
{
public:
    Transaction(Date date, char type, double amount, double balance, string description);
    void getDate();
    char getType();
    double getAmount();
    double getBalance();
    string getDescription();
    void setDate(int yy, int mm, int dd);
    void setType(char type);
    void setAmount(double amount);
    void setBalance(double balance);
    void setDescription(string description);
    void printTransaction();

private:
    Date date;
    char type;
    double amount;
    double balance;
    string description;
};

#endif //NEW_ACCOUNT_CLASS_TRANSACTION_H
