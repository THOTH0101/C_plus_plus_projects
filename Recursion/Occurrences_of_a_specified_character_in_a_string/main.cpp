/*
 *  Write a recursive function that finds the number of occurrences of a specified letter in a string
 *  using the following function header.
 *
 *      int count(const string& s, char a)
 *
 *  For example, count("Welcome", 'e') returns 2. Write a test program that prompts the user to enter a
 *  string and a character, and displays the number of occurrences for the character in the string.
 * */
#include <iostream>
#include <string>
using namespace std;

int countL = 0;
//function prototype
int count(const string& s, char a);

int main()
{
    string s;
    char a;

    //prompt user to enter a character and a string
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter a character: ";
    cin >> a;

    //show the final result
    cout << a << " appears in " << s << " "<< count(s, a) << " times" << endl;

    return 0;
}

//function implementation
int count(const string& s, char a)
{
    if(a == s[s.size() - 1])
        countL++;
    if(s.size() > 1)
        return count(s.substr(0, s.size() - 1), a);
    else
        return countL;
}