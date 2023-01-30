/*
 * (The Date class) Design a class named Date. The class contains:
 *
 * * Data fields year, month, and day that represent a date.
 * * A no-arg constructor that creates a Date object for the current date.
 * * A constructor that constructs a Date object with a specified elapse time since the middle of night,
 * Jan 1, 1970, in seconds.
 * * A constructor that constructs a Date object with the specified year, month, and day.
 * * Three get functions for the data fields year, month, and day.
 * * A function named setDate(int elapseTime) that sets a new date for the object using the elapsed time.
 *
 * Draw the UML diagram for the class. Implement the class. Write a test program
 * that creates two Date objects, one using a no-arg constructor and the other using
 * Date(555550), and display their year, month, and day.
 * (Hint: The first two constructors will extract year, month, and day from the elapse
 * time. For example, if the elapse time is 561555550 seconds, the year is 1987, the
 * month is 10, and the day is 17. For the no-arg constructor, the current date can be
 * obtained using time(0), as shown in Listing 2.9, ShowCurrentTime.cpp.)
 *
 * */

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    //create two date object
    Date Date0;
    Date Date1(555550);

    //display their year, month, and day
    cout << "Date0: " << Date0.getMonth() << "/" << Date0.getDay() << "/" << Date0.getYear() << endl;
    cout << "Date1: " << Date1.getMonth() << "/" << Date1.getDay() << "/" << Date1.getYear() << endl;

    return 0;
}