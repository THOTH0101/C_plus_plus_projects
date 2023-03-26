//
// Created by thoth on 3/26/23.
//

#ifndef THE_MYDATE_CLASS_MYDATE_H
#define THE_MYDATE_CLASS_MYDATE_H

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

#endif //THE_MYDATE_CLASS_MYDATE_H
