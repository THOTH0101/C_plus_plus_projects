#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const string& s); //function prototype

int main()
{
    string s;

    //prompt user to enter a string
    cout << "Enter a string s: ";
    cin >> s;

    if(isPalindrome(s))
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a palindrome" << endl;

    return 0;
}

//function implementation
bool isPalindrome(const string& s)
{
    string str;

    for(char x : s)
        str += tolower(x);

    for(int i = 0, j = s.length() - 1; i < s.length() / 2; i++, j--)
    {
        if(str[i] != str[j])
            return false;
    }

    return true;
}