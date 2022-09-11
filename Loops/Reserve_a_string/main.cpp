#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, revS;

    //prompt user to enter a string
    cout << "Enter a string: ";
    cin >> s;

    //loop to reverse the string
    for(int i = s.length() - 1; i >= 0; i--)
    {
        revS += s.at(i);
    }

    cout << "The reverse string is " << revS << endl;

    return 0;
}
