//
// Created by thoth on 6/15/23.
//

#include "Person.h"
#include <sstream>
using namespace std;

Person::Person()
{
    this->name = "";
    this->phoneNumber = "";
    this->address = "";
    this->Email = "";
}

Person::Person(const std::string &name, const std::string &address, const std::string &phoneNumber,
               const std::string &Email)
{
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->Email = Email;
}

string Person::getName() const
{
    return name;
}

string Person::getAddress() const
{
    return address;
}

string Person::getPhoneNumber() const
{
    return phoneNumber;
}

string Person::getEmail() const
{
    return Email;
}

void Person::setName(const std::string &name)
{
    this->name = name;
}

void Person::setAddress(const std::string &address)
{
    this->address = address;
}

void Person::setPhoneNumber(const std::string &phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Person::setEmail(const std::string &Email)
{
    this->Email = Email;
}

string Person::toString() const
{
    string s = "Person: ";
    stringstream ss;
    ss << s << Person::getName();
    return ss.str();
}