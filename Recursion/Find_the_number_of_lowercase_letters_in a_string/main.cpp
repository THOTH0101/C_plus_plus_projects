/*
 * Write a recursive function to return the number of lowercase letters in a string. You need to define
 * the following two functions. The second one is a recursive helper function.
 *
 *      int getNumberOfLowercaseLetters(const string& s)
 *      int getNumberOfLowercaseLetters(const string& s, int low)
 *
 * Write a test program that prompts the user to enter a string and displays the number of lowercase
 * letters in the string.
 * */
#include <iostream>
#include <string>
using namespace std;

int lowercaseCount = 0;
//function prototype
int getNumberOfLowercaseLetters(const string& s);
int getNumberOfLowercaseLetters(const string& s, int low);

int main()
{
    //prompt user for input
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    cout << "The number of lowercase letters is " << getNumberOfLowercaseLetters(s) << endl;

    return 0;
}

//function implementation
int getNumberOfLowercaseLetters(const string& s)
{
    return getNumberOfLowercaseLetters(s, 0);
}

int getNumberOfLowercaseLetters(const string& s, int low)
{
    if(islower(s[low]))
        lowercaseCount++;
    if(low == s.size())
        return lowercaseCount;
    else
        return getNumberOfLowercaseLetters(s, low + 1);
}