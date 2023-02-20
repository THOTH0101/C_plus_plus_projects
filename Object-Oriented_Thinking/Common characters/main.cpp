#include <iostream>
#include <string>
using namespace std;

string commonChars(const string& s1, const string& s2); //function prototype

int main()
{
    string s1, s2;

    //prompt user to enter s1
    cout << "Enter a string s1: ";
    cin >> s1;

    //prompt user to enter s2
    cout << "Enter a string s2: ";
    cin >> s2;

    //print result
    string commonChar = commonChars(s1, s2);

    if(commonChar.empty())
        cout << "No common characters" << endl;
    else
        cout << "The common characters are " << commonChar << endl;

    return 0;
}

//function implementation
string commonChars(const string& s1, const string& s2)
{
    string commonCh; //characters that are common to both strings

    for(char ch : s1)
    {
        //if character is found then append it to commonCh
        if(s2.find(ch) != string::npos)
            commonCh += ch;
    }

    return commonCh;
}