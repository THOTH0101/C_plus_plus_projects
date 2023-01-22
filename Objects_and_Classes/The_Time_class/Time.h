//
// Created by THOTH on 1/17/23.
//

#ifndef THE_TIME_CLASS_TIME_H
#define THE_TIME_CLASS_TIME_H

class Time
{
public:
    int hour;
    int minute;
    int second;
    Time(); //create time object of current time with time(0)
    Time(int elapseTime); //create time object with given elapseTime
    Time(int hours, int minutes, int seconds); //create time object with given parameters
    int getHour(); //returns the hours of time
    int getMinute(); //returns the minutes of time
    int getSecond(); //returns the seconds of time
    void setTime(int elapseTime); //set new time with the elapseTime
};

#endif //THE_TIME_CLASS_TIME_H
