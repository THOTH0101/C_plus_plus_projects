#include <iostream>
#include "MyDate.h"
using namespace std;

int main()
{
    //create MyDate objects
    MyDate date1;
    MyDate date2(3435555513);
    MyDate date3(561555550);

    //display dates
    cout << "Date format: YY/MM/DD\n";
    cout << "Date1: " << date1.getYear() << '/' << date1.getMonth() << '/' << date1.getDay() << endl;
    cout << "Date2: " << date2.getYear() << '/' << date2.getMonth() << '/' << date2.getDay() << endl;
    cout << "Date3: " << date3.getYear() << '/' << date3.getMonth() << '/' << date3.getDay() << endl;

    return 0;
}
