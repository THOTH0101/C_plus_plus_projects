//
// Created by thoth on 6/15/23.
//

#ifndef THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_STUDENT_H
#define THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_STUDENT_H

#include "Person.h"
class Student: public Person
{
public:
    Student();
    Student(const string& status);
    Student(const string& status, const string& name, const string& address, const string& phoneNumber,
            const string& Email);
    string getStatus() const;
    string toString() const;
private:
    string status;
};

#endif //THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_STUDENT_H
