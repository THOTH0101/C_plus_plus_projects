#include <iostream>
using namespace std;

//function prototype
int hourRemain(int hourPassed);
void printDay(int dayNumber);

int main()
{
    int dayNumber;
    int hourPassed;

    //prompt user to the following
    cout << "Enter the day number of a week(.i.e Sunday is 1, Saturday is 7): ";
    cin >> dayNumber;
    cout << "Enter the hours passed: ";
    cin >> hourPassed;

    if(dayNumber >= 1 && dayNumber <= 7 && hourPassed >= 0 && hourPassed <= 24)
    {
        //invoke function to display the day
        cout << "Today is ";
        printDay(dayNumber); //print day
        cout << endl;

        //invoke function to print hour passed
        cout << "Remaining Hours: " << hourRemain(hourPassed) << endl;
    }
    else
        cout << "Error! invalid input." << endl;

    return 0;
}

//function definition
int hourRemain(int hourPassed)
{
    const int HOURS_IN_A_DAY = 24;

    return HOURS_IN_A_DAY - hourPassed;
}

void printDay(int dayNumber)
{
    switch (dayNumber)
    {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            return;

    }
}