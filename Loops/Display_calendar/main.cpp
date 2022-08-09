#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int monthInYear = 12;
    const int daysInWeek = 7;
    int year;
    int firstDayOfYear;
    int daysOfMonth;
    int space = 0;
    int month = 1;

    cout << "Enter the Year: ";
    cin >> year;
    cout << "Enter the of Day of the Year(i.e. 1 is Sun to 7 is Sat): ";
    cin >> firstDayOfYear;

    //determine when a year is a leap year
    bool isLeap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));

    //making 1 to 7 the only valid input
    if(firstDayOfYear <= daysInWeek && firstDayOfYear > 0)
    {
        while(month <= monthInYear)
        {
            //Update the Days of the month
            if(month == 4 || month == 6 || month == 9 || month == 11)
                daysOfMonth = 30;
            else if(month == 2)
            {
                if(isLeap)//leap conditional statement
                    daysOfMonth = 29;
                else
                    daysOfMonth = 28;
            }
            else
                daysOfMonth = 31;

            //Display the name of each month
            if(month == 1)
                cout << "\t\t\t\t  January " << year << endl;
            else if(month == 2)
                cout << "\t\t\t\t  February " << year << endl;
            else if(month == 3)
                cout << "\t\t\t\t  March " << year << endl;
            else if(month == 4)
                cout << "\t\t\t\t  April " << year << endl;
            else if(month == 5)
                cout << "\t\t\t\t  May " << year << endl;
            else if(month == 6)
                cout << "\t\t\t\t  June " << year << endl;
            else if(month == 7)
                cout << "\t\t\t\t  July " << year << endl;
            else if(month == 8)
                cout << "\t\t\t\t  August " << year << endl;
            else if(month == 9)
                cout << "\t\t\t\t  September " << year << endl;
            else if(month == 10)
                cout << "\t\t\t\t  October " << year << endl;
            else if(month == 11)
                cout << "\t\t\t\t  November " << year << endl;
            else
                cout << "\t\t\t\t  December " << year << endl;

            cout << "----------------------------------------------------\n";
            cout << " Sun\tMon\t\tTue\t\tWed\t\tThu\t\tFri\t\tSat\n";

            //January loop control
            if(month == 1)
            {
                int i = 0;//initialize i to zero
                int days = 1;
                for(;i < firstDayOfYear - 1; i++)//add spaces according to the number of the first day
                {
                    cout << "\t\t";
                }
                //display number of days in the month 7 days per week
                for(; days <= daysOfMonth; days++)
                {
                    if((i + days) % daysInWeek == 0)//end line when the number of printed display is 7 in a line
                        cout << setw(3) << days << endl;
                    else
                        cout << setw(3) << days << "\t\t";
                }
                space += (i + days) % daysInWeek;//space need to the next month start
                cout << endl;//end printing in the loop
            }

            //February loop control
            else if(month == 2)
            {
                if(space == 0)//if space value is zero
                {
                    int y = 1;//initialing y as 1
                    for(; y <= 6; y++)//adding 6 spaces before printing the next loop
                        cout << "\t\t";
                    //display the number of days in the month 7 days per week
                    for(int j = 1; j <= daysOfMonth; j++)
                    {
                        if((y + j + 6) % daysInWeek == 0)//end line when the number of printed display is 7 in a line
                            cout << setw(3) << j << endl;
                        else
                            cout << setw(3) << j << "\t\t";
                    }
                }
                else if(space > 0 && space <= 6)//when space value is between 1 and 6
                {
                    int x = 1;//initialing x as 1
                    for(; x < space; x++)//loop control for adding spaces
                        cout << "\t\t";
                    //display the number of days in the month 7 days per week
                    for(int j = 1; j <= daysOfMonth; j++)
                    {
                        if((x + j - 1) % daysInWeek == 0)//end line when the number of printed display is 7 in a line
                            cout << setw(3) << j << endl;
                        else
                            cout << setw(3) << j << "\t\t";
                    }
                }
                cout << endl;//end printing in the loop
            }

            //March loop control
            else if(month == 3)
            {
                if(isLeap)//leap conditional statement
                    {
                        int x = 1;//initialing x as 1
                        for(; x <= space; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            if((x + j - 1) % daysInWeek == 0)//end line when the number of printed display is 7 in a line
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                else
                {
                    if(space == 0)//when space value equals 0
                    {
                        int j = 1;//initialize j as 1
                        for(; j <= 6; j++)//adding 6 spaces before the next loop
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int i = 1; i <= daysOfMonth; i++)
                        {
                            if((i + j - 1) % daysInWeek == 0)//end line when the number of printed display is 7 in a line
                                cout << setw(3) << i << endl;
                            else
                                cout << setw(3) << i << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;//initialize x as 1
                        for(; x < space; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            if((x + j - 1) % daysInWeek == 0)//end line when the number of printed display is 7 in a line
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            //April loop control
            else if(month == 4)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space > 3)//when space value is greater 3
                    {
                        int x = 1;//initialize x as 1
                        for(; x < space - 3; x++)//loop control for adding appropriate space
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;//initialize x as 1
                        for(; x < space + 4; x++)//loop control for adding appropriate spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space > 4)//when space value is greater than 4
                    {
                        int x = 1;
                        for(; x < space - 4; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x < space + 3; x++)//loop control for adding space
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            //May loop control
            else if(month == 5)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space < 2)//when space is less than 2 do the following
                    {
                        int x = 1;
                        for(; x <= space + 5; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x < space - 1; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space < 3)//when space is less than 3
                    {
                        int x = 1;
                        for(; x <= space + 4; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x < space - 2; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            //June loop control
            else if(month == 6)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space == 6)//when space value equals 6
                    {
                        //display number of days in the month 7 days per in week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if(j % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 1; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    int x = 1;
                    for(; x <= space; x++)//loop control for adding spaces
                        cout << "\t\t";
                    //display number of days in the month 7 days per week
                    for(int j = 1; j <= daysOfMonth; j++)
                    {
                        //end line when the number of printed display is 7 in a line
                        if((x + j - 1) % daysInWeek == 0)
                            cout << setw(3) << j << endl;
                        else
                            cout << setw(3) << j << "\t\t";
                    }
                }
                cout << endl;//move to the next line
            }

            //July loop control
            else if(month == 7)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space > 3)//when space value is greater than 3
                    {
                        int x = 1;
                        for(; x <= space - 4; x++)//loop condition for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 3; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space >= 5)//when space value is greater and equals to 5
                    {
                        int x = 1;
                        for(; x <= space - 5; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number of days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 2; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            //August loop control
            else if(month == 8)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space == 0)//when space value equals 0
                    {
                        int x = 1;
                        for(; x <= 6; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space - 1; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space > 1)
                    {
                        int x = 1;
                        for(; x <= space - 2; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 5; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;
            }

            //September loop control
            else if(month == 9)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space > 4)
                    {
                        int x = 1;
                        for(; x <= space - 5; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 2; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space == 6)
                    {
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if(j % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 1; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;
            }

            //October loop control
            else if(month == 10)
            {
                if(isLeap)//leap year conditional statement
                {
                    if(space > 2)//when space value greater than 2
                    {
                        int x = 1;
                        for(; x <= space - 3; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 4; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space > 3)
                    {
                        int x = 1;
                        for(; x <= space - 4; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 3; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            //November loop control
            else if(month == 11)
            {
                if(isLeap)
                {
                    int x = 1;
                    for(; x <= space; x++)//loop control for adding spaces
                        cout << "\t\t";
                    //display number days in the month 7 days per week
                    for(int j = 1; j <= daysOfMonth; j++)
                    {
                        //end line when the number of printed display is 7 in a line
                        if((x + j - 1) % daysInWeek == 0)
                            cout << setw(3) << j << endl;
                        else
                            cout << setw(3) << j << "\t\t";
                    }
                }
                else
                {
                    if(space == 0)
                    {
                        int x = 1;
                        for(; x <= 6; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x < space; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            //December loop control
            else
            {
                if(isLeap)
                {
                    if(space > 4)//when space value is greater than 4
                    {
                        int x = 1;
                        for(; x <= space - 5; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 2; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                else//when not a leap year
                {
                    if(space == 6)
                    {
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if(j % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                    else
                    {
                        int x = 1;
                        for(; x <= space + 1; x++)//loop control for adding spaces
                            cout << "\t\t";
                        //display number days in the month 7 days per week
                        for(int j = 1; j <= daysOfMonth; j++)
                        {
                            //end line when the number of printed display is 7 in a line
                            if((x + j - 1) % daysInWeek == 0)
                                cout << setw(3) << j << endl;
                            else
                                cout << setw(3) << j << "\t\t";
                        }
                    }
                }
                cout << endl;//move to the next line
            }

            month++;
        }
    }
    else
        cout << "Error! an invalid input." << endl;
    return 0;
}