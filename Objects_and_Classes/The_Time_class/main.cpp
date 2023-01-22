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
