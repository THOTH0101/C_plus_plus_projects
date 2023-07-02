/*
 * Write a recursive function that displays a string reversely on the console using the following header:
 *
 *      void reverseDisplay(const string& s)
 *
 * For example, reverseDisplay("abcd") displays dcba. Write a test program that prompts the user to enter
 * a string and displays its reversal.
 * */
#include <iostream>
#include <string>
using namespace std;

//function prototype
void reverseDisplay(const string& s);

int main()
{
    //prompt for user input
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    cout << "The reverse string is: ";
    //display reverse string
    reverseDisplay(s);

    return 0;
}

//function implementation
void reverseDisplay(const string& s)
{
    cout << s[s.size() - 1];
    if(s.size() > 1)
        reverseDisplay(s.substr(0, s.size() - 1));
}