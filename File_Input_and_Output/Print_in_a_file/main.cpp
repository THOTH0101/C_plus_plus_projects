/*
 * Write a program that reads characters from a file named Exercise13_1.txt if it exists. If it does exist,
 * the program counts the total numbers of characters in the file and prints the count by appending it to
 * the same file.
 * */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    fstream inout;
    inout.open("Exercise13_1.txt", ios::in);

    //check if file exist
    if(inout.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    //count characters
    while(!inout.eof())
    {
        char ch;
        inout.get(ch);
        count++;
    }
    inout.close(); //close file

    //reopen file and append total number of character to it
    inout.open("Exercise13_1.txt", ios::out | ios::app);

    inout << count;
    inout.close();

    return 0;
}
