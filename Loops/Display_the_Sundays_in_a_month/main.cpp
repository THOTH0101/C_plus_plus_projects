#include <iostream>
using namespace std;

int main()
{
    int month;
    int firstDay;
    int daysOfMonth;
    cout << "Enter the month number between 1 to 12(1 rep january and 12 rep december): ";
    cin >> month;

    if(month > 0 && month < 13)
    {
        //Update days of the month
        if(month == 4 || month == 6 || month == 9 || month == 11)
            daysOfMonth = 30;
        else if(month == 2)
            daysOfMonth = 28;
        else
            daysOfMonth = 31;

        cout << "Enter the first day of the month between 1 to 7(1 rep sunday and 7 rep saturday): ";
        cin >> firstDay;

        if(firstDay > 0 && firstDay < 8)
        {
            //Display the day entered
            if(firstDay == 1)
                cout << "The first day of this month is Sunday!" << endl;
            else if(firstDay == 2)
                cout << "The first day of this month is Monday!" << endl;
            else if(firstDay == 3)
                cout << "The first day of this month is Tuesday!" << endl;
            else if(firstDay == 4)
                cout << "The first day of this month is Wednesday!" << endl;
            else if(firstDay == 5)
                cout << "The first day of this month is Thursday!" << endl;
            else if(firstDay == 6)
                cout << "The first day of this month is Friday!" << endl;
            else
                cout << "The first day of this month is Saturday!" << endl;


            int nextSunday = 2 - firstDay;
            while(nextSunday <= daysOfMonth)
            {
                nextSunday += 7;
                if(nextSunday <= daysOfMonth)
                    cout << "Next Sunday of this month is on " << nextSunday << "." << endl;
            }
        }
        else
            cout << "You've enter an Invalid input!" << endl;
    }
    else
        cout << "You've enter an Invalid input!" << endl;
    return 0;
}