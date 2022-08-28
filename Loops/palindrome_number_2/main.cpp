#include <iostream>
using namespace std;

int main()
{
    int integer;
    int remainder;
    int sum = 0;
    int temp;

    //prompt user to enter a three-digit integer
    cout << "Enter any integer: ";
    cin >> integer;
    int data = integer;
    temp=data;

    //loop control to check palindrome
    while(data > 0)
    {
        remainder = data % 10;
        sum = (sum * 10) + remainder;
        data = data / 10;
    }

    //print confirmation
    if(temp == sum)
        cout << integer << " is a palindrome" << endl;
    else
        cout << integer << " is not a palindrome" << endl;

    return 0;
}