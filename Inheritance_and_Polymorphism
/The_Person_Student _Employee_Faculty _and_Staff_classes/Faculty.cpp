//
// Created by thoth on 6/15/23.
//

#include "Faculty.h"
#include <sstream>
using namespace std;

Faculty::Faculty(int hours, const std::string &rank)
{
    this->hours = hours;
    this->rank = rank;
}

Faculty::Faculty(int hours, const std::string &rank, const std::string &name,
                 const std::string &address, const std::string &phoneNumber, const std::string &Email)
{
    setName(name);
    setAddress(address);
    setPhoneNumber(phoneNumber);
    setEmail(Email);
    this->hours = hours;
    this->rank = rank;
}

int Faculty::getHours() const
{
    return hours;
}

string Faculty::getRank() const
{
    return rank;
}

string Faculty::toString() const
{
    string s = "Faculty: ";
    stringstream ss;
    ss << s << Faculty::getName();
    return ss.str();
}