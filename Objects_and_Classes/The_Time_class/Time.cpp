//
// Created by THOTH on 1/17/23.
//

#include "Time.h"
#include <ctime>

Time::Time()
{
    int totalSeconds = time(0); //total second since the middle of night, Jan 1, 1970 to current second

    //compute the current time
    second = totalSeconds % 60;
    int totalMinutes = totalSeconds / 60;
    minute = totalMinutes % 60;
    int totalHours = totalMinutes / 60;
    hour = totalHours % 24;
}

Time::Time(int elapseTime)
{
    //compute the time with the given elapseTime in second
    second = elapseTime % 60;
    int totalMinutes = elapseTime / 60;
    minute = totalMinutes % 60;
    int totalHours = totalMinutes / 60;
    hour = totalHours % 24;
}

Time::Time(int hours, int minutes, int seconds)
{
    hour = hours;
    minute = minutes;
    second = seconds;
}

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second;
}

void Time::setTime(int elapseTime)
{
    //set new time with given elapseTime
    second = elapseTime % 60;
    int totalMinutes = elapseTime / 60;
    minute = totalMinutes % 60;
    int totalHours = totalMinutes / 60;
    hour = totalHours % 24;
}