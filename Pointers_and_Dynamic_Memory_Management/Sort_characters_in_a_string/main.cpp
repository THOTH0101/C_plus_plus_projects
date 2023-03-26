#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//function prototype
string sort(string& s);

int main()
{
    //prompt user to enter a string
    cout << "Enter a string: ";
    string s;
    cin >> s;
    cout << "The sorted string is " << sort(s) << endl;

    return 0;
}

//function implementation
string sort(string& s)
{
    char* str = new char[s.length()];

    for(int i = 0; i < s.length(); i++)
        str[i] = s[i];

    sort(str, str + s.length());//sort array in ascending order

    return str;
}