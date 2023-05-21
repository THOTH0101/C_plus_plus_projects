//
// Created by thoth on 5/17/23.
//

#ifndef NEW_ACCOUNT_CLASS_DATE_H
#define NEW_ACCOUNT_CLASS_DATE_H

class Date
{
public:
    int year;
    int month;
    int day;
    Date();
    Date(int elapseTime);
    Date(int YY, int MM, int DD);
    int getYear();
    int getMonth();
    int getDay();
    void setDate(int elapseTime);
    void setDate(int YY, int MM, int DD);
};

#endif //NEW_ACCOUNT_CLASS_DATE_H
