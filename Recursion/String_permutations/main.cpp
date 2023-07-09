/*
 * Write a recursive function to print all permutations of a string. For example, for a string abc,
 * the permutation is
 *
 *      abc
 *      acb
 *      bac
 *      bca
 *      cab
 *      cba
 *
 *  (Hint: Define the following two functions. The second is a helper function.)
 *
 *  void displayPermutation(const string& s)
 *  void displayPermutation(const string& s1, const string& s2)
 *
 *  The first function simply invokes displayPermutation("", s). The second function uses a loop to move
 *  a character from s2 to s1 and recursively invoke it with a new s1 and s2. The base case is that s2
 *  is empty and prints s1 to the console.
 *
 *  Write a test program that prompts the user to enter a string and displays all its permutations.
 * */
#include <iostream>
#include <string>
using namespace std;

//function prototype
void displayPermutation(const string& s);
void displayPermutation(const string& s1, const string& s2);

int main()
{
    //prompt for user input
    cout << "Enter a string: ";
    string s;
    cin >> s;

    //display the permutation
    displayPermutation(s);

    return 0;
}

//function implementation
void displayPermutation(const string& s)
{
    displayPermutation("", s);
}

void displayPermutation(const string& s1, const string& s2)
{
    if(s2.empty())
        cout << s1 << endl;
    else
    {
        for(int i = 0; i < s2.size(); i++)
            displayPermutation(s1 + s2[i], s2.substr(0, i) + s2.substr(i + 1));
    }
}