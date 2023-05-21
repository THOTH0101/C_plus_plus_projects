//
// Created by THOTH on 1/27/23.
//

#ifndef THE_DATE_CLASS_DATE_H
#define THE_DATE_CLASS_DATE_H

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
};

#endif //THE_DATE_CLASS_DATE_H
