//
// Created by thoth on 3/26/23.
//

#include "MyDate.h"
#include <ctime>

MyDate::MyDate()
{
    time_t now = time(0); //total seconds since the middle of night, Jan 1, 1970

    //convert seconds to tm struct
    tm* time = localtime(&now);

    //extract the year, month, and day
    year = time->tm_year + 1900; //tm_year is the number of years since 1900
    month = time->tm_mon; //tm_mon is the month (0-11)
    day = time->tm_mday;
}

MyDate::MyDate(long elapsedTime)
{
    time_t newTime = elapsedTime;

    //convert seconds to tm struct
    tm* time = localtime(&newTime);

    //extract the year, month, and day
    year = time->tm_year + 1900;//years since 1900
    month = time->tm_mon;
    day = time->tm_mday;
}

MyDate::MyDate(int YY, int MM, int DD)
{
    year = YY;
    month = MM;
    day = DD;
}

int MyDate::getYear() const
{
    return year;
}

int MyDate::getMonth() const
{
    return month;
}

int MyDate::getDay() const
{
    return day;
}

void MyDate::setYear(int YY)
{
    year = YY;
}

void MyDate::setMonth(int MM)
{
    month = MM;
}

void MyDate::setDay(int DD)
{
    day = DD;
}

void MyDate::setDate(long elapsedTime)
{
    time_t newTime = elapsedTime;

    //convert to tm struct
    tm* time = localtime(&newTime);

    year = time->tm_year + 1900;
    month = time->tm_mon;
    day = time->tm_mday;
}