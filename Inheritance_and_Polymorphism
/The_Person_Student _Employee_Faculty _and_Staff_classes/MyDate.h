//
// Created by thoth on 6/15/23.
//

#ifndef THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_MYDATE_H
#define THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_MYDATE_H

class MyDate
{
public:
    MyDate();
    MyDate(long elapsedTime);
    MyDate(int YY, int MM, int DD);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void setYear(int YY);
    void setMonth(int MM);
    void setDay(int DD);
    void setDate(long elapsedTime);

private:
    int year;
    int month;
    int day;
};

#endif //THE_PERSON_STUDENT__EMPLOYEE_FACULTY__AND_STAFF_CLASSES_MYDATE_H