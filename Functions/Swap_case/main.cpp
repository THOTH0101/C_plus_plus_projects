#include <iostream>
#include <string>
using namespace std;

string swapCase(const string& s); //function prototype

int main()
{
    string s;

    //prompt user to enter a string
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "The new string is: " << swapCase(s) << endl;

    return 0;
}

//function definition
string swapCase(const string& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i]))
            cout << static_cast<char>(tolower(s[i]));
        else
            cout << static_cast<char>(toupper(s[i]));
    }
}