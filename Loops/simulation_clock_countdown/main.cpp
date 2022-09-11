#include <iostream>
#include <unistd.h>  //required for usleep() unix OS
using namespace std;

int main()
{
    const int MICRO_TO_SECONDS = 1000000;
    const int secondsDelay = 1 * MICRO_TO_SECONDS;
    int seconds;

    //prompt user to enter number of seconds to start countdown
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    while(seconds > 0)
    {
        cout << seconds << " seconds remaining" << endl;
        seconds--;
        usleep(secondsDelay);
    }

    cout << "Stopped" << endl;

    return 0;
}