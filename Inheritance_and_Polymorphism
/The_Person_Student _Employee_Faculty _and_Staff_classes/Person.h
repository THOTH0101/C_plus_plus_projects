//
// Created by thoth on 6/15/23.
//

#ifndef THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_PERSON_H
#define THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_PERSON_H

#include <string>
using namespace std;
class Person
{
public:
    Person();
    Person(const string& name, const string& address, const string& phoneNumber, const string& Email);
    string getName() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getEmail() const;
    void setName(const string& name);
    void setAddress(const string& address);
    void setPhoneNumber(const string& phoneNumber);
    void setEmail(const string& Email);
    virtual string toString() const;
private:
    string name;
    string address;
    string phoneNumber;
    string Email;
};

#endif //THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_PERSON_H
