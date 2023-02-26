#include <iostream>
#include <string>
using namespace std;

string sort(string& s); //function prototype

int main()
{
    string s;

    //prompts the user to enter a string
    cout << "Enter a string s: ";
    cin >> s;

    //print result
    cout << "The sorted string is " << sort(s) << endl;

    return 0;
}

//function implementation
string sort(string& s)
{
    for(int i = 0; i < s.length() - 2; i++)
    {
        char currentMin = s[i];
        int currentMinIndex = i;

        for(int j = i + 1; j < s.length() - 1; j++)
        {
            if(currentMin > s[j])
            {
                currentMin = s[j];
                currentMinIndex = j;
            }
        }

        if(currentMinIndex != i)
        {
            s[currentMinIndex] = s[i];
            s[i] = currentMin;
        }
    }

    return s;
}