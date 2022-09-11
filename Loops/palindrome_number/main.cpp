#include <iostream>
using namespace std;

int main()
{
    //prompt user to enter a three-digit integer
    cout << "Enter any three-digit integer: ";
    int integer;
    cin >> integer;

    //initialize palindrome bool value
    bool isPalindrome = false;

    //break user input to three individual digits
    int digit1 = integer / 100;
    int digit1Rem = integer % 100;
    int digit3 = digit1Rem % 10;

    //create a palindrome condition
    if(digit1 == digit3)
    {
        isPalindrome = true;
    }

    //print confirmation
    if(isPalindrome)
        cout << integer << " is a palindrome" << endl;
    else
        cout << integer << " is not a palindrome" << endl;

    return 0;
}