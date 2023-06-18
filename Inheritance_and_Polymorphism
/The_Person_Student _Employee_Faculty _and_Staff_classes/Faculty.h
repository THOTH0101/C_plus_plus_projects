//
// Created by thoth on 6/15/23.
//

#ifndef THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_FACULTY_H
#define THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_FACULTY_H

#include <string>
#include "Employee.h"
using namespace std;

class Faculty:public Employee
{
public:
    Faculty();
    Faculty(int hours, const string& rank);
    Faculty(int hours, const string& rank, const string& name, const string& address,
            const string& phoneNumber, const string& Email);
    int getHours() const;
    string getRank() const;
    string toString() const;
private:
    int hours;
    string rank;
};

#endif //THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_FACULTY_H
