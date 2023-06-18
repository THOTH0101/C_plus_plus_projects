//
// Created by thoth on 6/15/23.
//

#ifndef THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_EMPLOYEE_H
#define THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_EMPLOYEE_H

#include "Person.h"
#include "MyDate.h"
class Employee: public Person
{
public:
    Employee();
    Employee(const string& office, double salary, const MyDate& date);
    Employee(const string& office, double salary, const MyDate dateHired,
             const string& name, const string& address, const string& phoneNumber, const string& Email);
    string getOffice() const;
    double getSalary() const;
    MyDate getDate() const;
    void setOffice(const string& office);
    void setSalary(double amount);
    void setDateHired(const MyDate& date);
    string toString() const;
private:
    string office;
    double salary;
    MyDate dateHired;
};


#endif //THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_EMPLOYEE_H
