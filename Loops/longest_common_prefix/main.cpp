#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0, j = 0;
    string s1, s2;

    //prompt user to input two strings
    cout << "Enter s1: ";
    getline(cin, s1);
    cout << "Enter s2: ";
    getline(cin, s2);

    //compare the two strings and check for prefix
    if(s1.at(0) == s2.at(0))
    {
        //display result
        cout << "The common prefix is ";
        while( i < s1.length() && j < s2.length())
        {
            //acquire the common prefix string
            if(s1.at(i) == s2.at(j))
                cout << s1.at(i);
            i++, j++;
        }
        cout << endl;
    }
    else
        cout << s1 << " and " << s2 << " have no common prefix" << endl;

    return 0;
}
