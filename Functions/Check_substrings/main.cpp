#include <iostream>
#include <string>
using namespace std;

//function prototype
int indexOf(const string& s1, const string& s2);

int main()
{
    string s1, s2;

    //prompt user to enter first and second strings
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);

    //check whether string s1 is a substring of string s2, returns the first index in s2 if there is a match Otherwise, return -1
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;

    return 0;
}

//function definition
int indexOf(const string& s1, const string& s2)
{
    int N = s2.length();
    int M = s1.length();

    //loop to compare for a match
    for(int i = 0; i <= (N - M); i++)
    {
        int j;

        //loop to check for a match
        for(j = 0; j < M; j++)
        {
            if(s2[i + j] != s1[j]) //if no match is found terminate
                break;
        }

        if(j == M) //if match found
            return i; //return index
    }

    return -1;
}