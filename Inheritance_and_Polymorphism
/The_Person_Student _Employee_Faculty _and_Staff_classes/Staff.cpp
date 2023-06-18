//
// Created by thoth on 6/15/23.
//

#include "Staff.h"
#include <sstream>
using namespace std;

Staff::Staff(const std::string &title)
{
    this->title = title;
}

Staff::Staff(const std::string &title, const std::string &name, const std::string &address,
             const std::string &phoneNumber, const std::string &Email)
{
    setName(name);
    setAddress(address);
    setPhoneNumber(phoneNumber);
    setEmail(Email);
    this->title = title;
}

string Staff::getTitle() const
{
    return title;
}

string Staff::toString() const
{
    string s = "Staff: ";
    stringstream ss;
    ss << s << Staff::getName();
    return ss.str();
}