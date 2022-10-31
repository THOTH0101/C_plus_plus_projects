#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a); //function prototype

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

//function definition
int count(const string& s, char a)
{
    int count = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(a == s[i])
            count++;
    }

    return count;
}