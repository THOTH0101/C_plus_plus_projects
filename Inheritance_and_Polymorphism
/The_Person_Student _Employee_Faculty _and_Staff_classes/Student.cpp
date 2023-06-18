//
// Created by thoth on 6/15/23.
//

#include "Student.h"
#include <sstream>
using namespace std;

Student::Student(const std::string &status)
{
    this->status = status;
}

Student::Student(const std::string &status, const std::string &name, const std::string &address,
                 const std::string &phoneNumber, const std::string &Email)
{
    this->status = status;
    setName(name);
    setAddress(address);
    setPhoneNumber(phoneNumber);
    setEmail(Email);
}

string Student::getStatus() const
{
    return status;
}

string Student::toString() const
{
    string s = "Student: ";
    stringstream ss;
    ss << s << Student::getName();
    return ss.str();
}