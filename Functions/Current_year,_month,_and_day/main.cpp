#include <iostream>
#include <ctime>
using namespace std;

//function prototype
bool isLeapYear(int year);
void printMonthName(int month);
int getNumberOfDays(int year, int month);
void printCurrentYearMonthDay(int totalSeconds);

int main()
{
    int totalSeconds = time(0);

    //invoke function
    printCurrentYearMonthDay(totalSeconds);

    return 0;
}

//function definition
bool isLeapYear(int year) //function to determine a leap
{
    return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}

void printMonthName(int month) //function to print name for certain month
{
    switch(month)
    {
        case 1:
            cout << "January";
            break;
            case 2:
                cout << "February";
                break;
                case 3:
                    cout << "March";
                    break;
                    case 4:
                        cout << "April";
                        break;
                        case 5:
                            cout << "May";
                            break;
                            case 6:
                                cout << "June";
                                break;
                                case 7:
                                    cout << "July";
                                    break;
                                    case 8:
                                        cout << "August";
                                        break;
                                        case 9:
                                            cout << "September";
                                            break;
                                            case 10:
                                                cout << "October";
                                                break;
                                                case 11:
                                                    cout << "November";
                                                    break;
                                                    case 12:
                                                        cout << "December";
                                                        break;
                                                        default: return; //exit
    }
}

int getNumberOfDays(int year, int month) //function to get number of days for elapse months in a year
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    if (month == 2) return isLeapYear(year) ? 29 : 28;

    return 0; // If month is incorrect
}

void printCurrentYearMonthDay(int totalSeconds)
{
    int year = 1970; //initial year for time(0)
    int secondsInADay = 60 * 60 * 24; //number of seconds in a day
    int totalDaysForMonth = 0; //to compute total days elapse before the current month

    //loop to compute the current year
    while (totalSeconds > (secondsInADay * 365))
    {
        if(isLeapYear(year)) //subtract 366 for leap year
            totalSeconds = totalSeconds - (secondsInADay * 366);
        else
        {
            totalSeconds = totalSeconds - (secondsInADay * 365); //for normal year
        }

        year++; //increment in year
    }

    int remainSecondsInAYear = totalSeconds; //remaining seconds for the year

    //compute current number of days already elapsed in the current year
    int elapseDaysInYear = remainSecondsInAYear / secondsInADay;

    //compute the current month
    int month = elapseDaysInYear / (7 * 4);

    //loop to compute the number of days elapse in the months before
    for(int i = 1; i <  month; i++)
    {
        totalDaysForMonth += getNumberOfDays(year, i);
    }

    //print result
    cout << "The current date is ";
    printMonthName(month);
    cout << " " << (elapseDaysInYear - totalDaysForMonth + 1) << ", " << year << endl;
}