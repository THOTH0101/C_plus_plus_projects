/*
 * Write a recursive function that displays the number of even and odd digits in an integer using the
 * following header:
 *
 *      void evenAndOddCount(int value)
 *
 * Write a test program that prompts the user to enter an integer and displays the number of even and odd
 * digits in it.
 * */
#include <iostream>
using namespace std;

int evenCount = 0;
int oddCount = 0;
//function prototype
void evenAndOddCount(int value);

int main()
{
    //prompt user for input
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;

    //count even and odd
    evenAndOddCount(integer);

    //display result
    cout << "The number of even digits are " << evenCount;
    cout << "\n While the number of odd digits are " << oddCount << endl;

    return 0;
}

//function implementation
void evenAndOddCount(int value)
{
    int digit = value % 10; //extract digit

    //check if its even or odd
    if(digit % 2 == 0)
        evenCount++;

    if(digit % 2 == 1)
        oddCount++;

    if(value > 1)
        evenAndOddCount(value / 10);
}