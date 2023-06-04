/*
 * Write a program that prompts the user to enter a file name and displays the number of vowels in the file.
 * */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//function prototype
bool isVowel(char ch);

int main()
{
    //prompt user to enter file name
    cout << "Enter a file name: ";
    string filename;
    cin >> filename;

    //create input object
    fstream input;
    input.open(filename.c_str(), ios::in);
    int count = 0;

    //check if file exist
    if(input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    char ch;
    //count vowels
    while(!input.eof())
    {
        input.get(ch);

        //check character
        if(isVowel(ch))
            count++;
    }

    input.close(); //close file
    cout << "The number of vowels in the file is " << count << endl;

    return 0;
}

//function implementation
bool isVowel(char ch)
{
    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O'
    || ch == 'o' || ch == 'U' || ch == 'u')
        return true;
    return false;
}