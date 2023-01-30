/*
 * (Stopwatch) Design a class named StopWatch. The class contains:
 *
 * *Private data fields startTime and endTime with get functions.
 * *A no-arg constructor that initializes startTime with the current time.
 * *A function named start() that resets the startTime to current time.
 * *A function named stop() that sets the endTime to current time.
 * *A function named getElapsedTime() that returns the elapsed time for the stop watch in milliseconds.
 *
 * Draw the UML diagram for the class. Implement the class. Write a test
 * program that measures the execution time of sorting 100000 numbers using selection sort.
 *
 * */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "StopWatch.h"
using namespace std;

int main()
{
    srand(time(0));

    const int SIZE = 10000;
    int integers[SIZE];
    int i, j;

    StopWatch timer; //create a timer object

    for(i = 0; i < SIZE; i++)
        //generate random integers btw 1 to 1000
        integers[i] = rand() % 10000;

    timer.start(); //invoke to start timer

    //implement selection sort
    for(i = 0; i < SIZE - 1; i++)
    {
        int currentMin = integers[i];
        int currentMinIndex = i;

        for(j = i + 1; j < SIZE; j++)
        {
            if(integers[j] < currentMin)
            {
                currentMin = integers[j];
                currentMinIndex = j;
            }
        }

        if(currentMinIndex != i)
        {
            integers[currentMinIndex] = integers[i];
            integers[i] = currentMin;
        }
    }

    timer.stop(); //invoke to stop timer
    cout << "The execution time of sorting 100000 numbers using selection sort is " << timer.getElapsedTime() << " milliseconds" << endl;

    return 0;
}
