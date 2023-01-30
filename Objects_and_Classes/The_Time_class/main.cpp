/*
 * (The Time class) Design a class named Time. The class contains:
 *
 * *Data fields hour, minute, and second that represent a time.
 * *A no-arg constructor that creates a Time object for the current time.
 * *A constructor that constructs a Time object with a specified elapse time since the middle of night,
 * Jan 1, 1970, in seconds.
 * *A constructor that constructs a Time object with the specified hour, minute, and second.
 * *Three get functions for the data fields hour, minute, and second.
 * *A function named setTime(int elapseTime) that sets a new time for the object using the elapsed time.
 *
 * Draw the UML diagram for the class. Implement the class. Write a test program
 * that creates two Time objects, one using a no-arg constructor and the other using
 * Time(555550), and display their hour, minute, and second.
 * (Hint: The first two constructors will extract hour, minute, and second from the
 * elapse time. For example, if the elapse time is 555550 seconds, the hour is 10,
 * the minute is 19, and the second is 9. For the no-arg constructor, the current time
 * can be obtained using time(0), as shown in Listing 2.9, ShowCurrentTime.cpp.)
 *
 * */
#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    //create two time objects
    Time time0;
    Time time1(555550);

    cout << "The time0 is " << time0.getHour() << ":" << time0.getMinute() << ":" << time0.getSecond() << endl;
    cout << "The time1 is " << time1.getHour() << ":" << time1.getMinute() << ":" << time1.getSecond() << endl;

    return 0;
}
