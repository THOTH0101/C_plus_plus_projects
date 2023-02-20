#include <iostream>
#include <string>
using namespace std;

//to check two strings if they contain same number of characters in any order
bool isAnagram(const string& s1, const string& s2); //function prototype

int main()
{
    string s1, s2;

    //prompt user to enter s1
    cout << "Enter a string s1: ";
    cin >> s1;

    //prompt user to enter s2
    cout << "Enter a string s2: ";
    cin >> s2;

    //check strings and print result
    if(isAnagram(s1, s2))
        cout << s1 << " and " << s2 << " are anagrams" << endl;
    else
        cout << s1 << " and " << s2 << " are not anagrams" << endl;

    return 0;
}

//function implementation
bool isAnagram(const string& s1, const string& s2)
{
    //check if the strings are of same size
    if(s1.size() == s2.size())
    {
        for(int i = 0; i < s1.size() - 1; i++)
        {
            char ch = s1[i]; //starting with for character

            //check if the character exist in the s2
            if(s2.find(ch) == string::npos)
                return false;
        }
    }
    else
        return false; //if the two strings are not of the same size

    return true; //default
}