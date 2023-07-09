/*
 *  Write a recursive function to return the total number of space characters in a string. You need
 *  to define the following two functions. The second one is a recursive helper function.
 *
 *      int numberOfSpaces(const string& s)
 *      int numberOfSpaces(const string& s, int i)
 *
 *  Write a test program that prompts the user to enter a string, invokes the function, and displays
 *  the number of spaces in the string.
 * */
#include <iostream>
#include <string>
using namespace std;

int count = 0;
//function prototype
int numberOfSpaces(const string& s);
int numberOfSpaces(const string& s, int i);

int main()
{
    //prompt for user input
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    //display result
    cout << "The number of space in the string is: " << numberOfSpaces(s) << endl;

    return 0;
}

//function implementation
int numberOfSpaces(const string& s)
{
    return numberOfSpaces(s, 0);
}

int numberOfSpaces(const string& s, int i)
{
    if(s[i] == ' ')
        count++;
    if(i == s.size())
        return count;
    else
        return numberOfSpaces(s, i + 1);
}