//
// Created by THOTH on 1/19/23.
//

#ifndef STOPWATCH_STOPWATCH_H
#define STOPWATCH_STOPWATCH_H
#include <chrono>
using namespace std::chrono;

class StopWatch
{
public:
    StopWatch();
    void start();
    void stop();
    high_resolution_clock::time_point getStartTime();
    high_resolution_clock::time_point getEndTime();
    long long getElapsedTime();

private:
    high_resolution_clock::time_point startTime;
    high_resolution_clock::time_point endTime;
};
#endif //STOPWATCH_STOPWATCH_H
