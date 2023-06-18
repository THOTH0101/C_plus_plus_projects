//
// Created by thoth on 6/15/23.
//

#include "Employee.h"
#include <sstream>
using namespace std;

Employee::Employee()
{
    this->salary = 0.0;
}

Employee::Employee(const std::string &office, double salary, const MyDate &date)
{
    this->office = office;
    this->salary = salary;
    this->dateHired = date;
}

Employee::Employee(const std::string &office, double salary, const MyDate dateHired,
                   const std::string &name, const std::string &address, const std::string &phoneNumber,
                   const std::string &Email)
{
    setName(name);
    setAddress(address);
    setPhoneNumber(phoneNumber);
    setEmail(Email);
    this->office = office;
    this->salary = salary;
    this->dateHired = dateHired;
}

string Employee::getOffice() const
{
    return office;
}

double Employee::getSalary() const
{
    return salary;
}

MyDate Employee::getDate() const
{
    return dateHired;
}

void Employee::setOffice(const std::string &office)
{
    this->office = office;
}

void Employee::setSalary(double amount)
{
    this->salary = amount;
}

void Employee::setDateHired(const MyDate &date)
{
    this->dateHired = date;
}

string Employee::toString() const
{
    string s = "Employee: ";
    stringstream ss;
    ss << s << Employee::getName();
    return ss.str();
}