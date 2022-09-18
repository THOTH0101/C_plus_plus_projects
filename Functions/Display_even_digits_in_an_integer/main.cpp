#include <iostream>
using namespace std;

void displayEven(int number);//function prototype

int main()
{
    int number;

    //prompt user to enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    //display result
    cout << "The integer " << number << " has this even digit: ";

    //invoke the displayEven function
    displayEven(number);

    return 0;
}

void displayEven(int number)
{
    //loop to break the integer into it's individual digits
    for(;number > 0; number /= 10)
    {
        int digit = number % 10;

        //check if digit is even and display the even digits
        if(digit % 2 == 0)
            cout << digit << " ";
    }
}