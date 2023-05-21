//
// Created by thoth on 5/17/23.
//

#include "Date.h"
#include <ctime>

Date::Date()
{
    time_t now = time(0); //total seconds since the middle of night, Jan 1, 1970

    //convert seconds to tm struct
    tm* time = localtime(&now);

    // Extract the year, month, and day
    year = time->tm_year + 1900; // tm_year is the number of years since 1900
    month = time->tm_mon + 1; // tm_mon is the month (0-11)
    day = time->tm_mday;
}

Date::Date(int elapseTime)
{
    time_t newTime = elapseTime;

    //convert seconds to tm struct
    tm* time = localtime(&newTime);

    // Extract the year, month, and day
    year = time->tm_year + 1900; // tm_year is the number of years since 1900
    month = time->tm_mon + 1; // tm_mon is the month (0-11)
    day = time->tm_mday;
}

Date::Date(int YY, int MM, int DD)
{
    year = YY;
    month = MM;
    day = DD;
}

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

void Date::setDate(int elapseTime)
{
    time_t newTime = elapseTime;

    //convert seconds to tm struct
    tm* time = localtime(&newTime);

    // Extract the year, month, and day
    year = time->tm_year + 1900; // tm_year is the number of years since 1900
    month = time->tm_mon + 1; // tm_mon is the month (0-11)
    day = time->tm_mday;
}

void Date::setDate(int YY, int MM, int DD)
{
    year = YY;
    month = MM;
    day = DD;
}