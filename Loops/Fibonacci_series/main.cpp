#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int prevNumber;
    int nextNumber = 1;
    int number = 0;

    //print the title
    cout << "Fibonacci series: ";

    //loop for the series
    while(count < 10)
    {
        cout << number << ", ";
        prevNumber = nextNumber;
        nextNumber = number;
        number = nextNumber + prevNumber;
        count++;
    }
    return 0;
}