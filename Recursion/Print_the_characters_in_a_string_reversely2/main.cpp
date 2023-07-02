/*
 * Rewrite Programming Exercise 17.9 using a helper function to pass the substring high index to the
 * function. The helper function header is as follows:
 *
 *      void reverseDisplay(const string& s, int high)
 * */
#include <iostream>
#include <string>
using namespace std;

//function prototype
void reverseDisplay(const string& s);
void reverseDisplay(const string& s, int high);

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
    reverseDisplay(s, int(s.size() - 1));
}

void reverseDisplay(const string& s, int high)
{
    cout << s[high];
    if(high > 0)
        reverseDisplay(s, high - 1);
}