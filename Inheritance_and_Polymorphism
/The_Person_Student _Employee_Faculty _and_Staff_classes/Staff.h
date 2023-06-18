//
// Created by thoth on 6/15/23.
//

#ifndef THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_STAFF_H
#define THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_STAFF_H

#include "Employee.h"
#include <string>
using namespace std;

class Staff: public Employee
{
public:
    Staff();
    Staff(const string& title);
    Staff(const string& title, const string& name, const string& address, const string& phoneNumber,
          const string& Email);
    string getTitle() const;
    string toString() const;
private:
    string title;
};

#endif //THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_STAFF_H
