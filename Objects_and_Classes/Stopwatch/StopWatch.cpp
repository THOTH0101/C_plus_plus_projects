//
// Created by THOTH on 1/19/23.
//

#include "StopWatch.h"
#include <chrono>
using namespace std::chrono;

StopWatch::StopWatch()
{
    startTime = high_resolution_clock::now();
}

void StopWatch::start()
{
    startTime = high_resolution_clock::now();
}

void StopWatch::stop()
{
    endTime = high_resolution_clock::now();
}

high_resolution_clock::time_point StopWatch::getStartTime()
{
    return startTime;
}

high_resolution_clock::time_point StopWatch::getEndTime()
{
    return endTime;
}

long long StopWatch::getElapsedTime()
{
    return duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
}