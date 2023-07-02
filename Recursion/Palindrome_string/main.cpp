/*
 * Modify Listing 17.3, RecursivePalindrome.cpp, so that the program finds the number of times the
 * isPalindrome function is called. (Hint: Use a global variable and increment it every time the function
 * is called.)
 * */
#include <iostream>
#include <string>
using namespace std;

int count = 0;
bool isPalindrome(const string& s)
{
    count++;
    if (s.size() <= 1) // Base case
        return true;
    else if (s[0] != s[s.size() - 1]) // Base case
        return false;
    else
        return isPalindrome(s.substr(1, s.size() - 2));
}

int main()
{
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    if (isPalindrome(s))
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a palindrome" << endl;

    cout << "The number of times the function is called is " << count << endl;

    return 0;
}