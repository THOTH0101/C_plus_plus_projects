//
// Created by thoth on 5/17/23.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Transaction.h"
#include "Date.h"
using namespace std;

Transaction::Transaction(Date date, char type, double amount, double balance, string description)
{
    this->date = date;
    this->type = type;
    this->amount = amount;
    this->balance = balance;
    this->description = description;
}

void Transaction::getDate()
{
    cout << date.getYear() << "/" << date.getMonth() << "/" << date.getDay();
}

char Transaction::getType()
{
    return type;
}

double Transaction::getAmount()
{
    return amount;
}

double Transaction::getBalance()
{
    return balance;
}

string Transaction::getDescription()
{
    return description;
}

void Transaction::setDate(int yy, int mm, int dd)
{
    date.setDate(yy,mm,dd);
}

void Transaction::setType(char type)
{
    this->type = type;
}

void Transaction::setAmount(double amount)
{
    this->amount = amount;
}

void Transaction::setBalance(double balance)
{
    this->balance = balance;
}

void Transaction::setDescription(string description)
{
    this->description = description;
}

void Transaction::printTransaction()
{
    this->getDate();
    cout << "   " << this->getType() << "    " << setw(6) << this->getAmount() << "    " << setw(6)
    << this->getBalance() << "    " << this->getDescription() << endl;
}