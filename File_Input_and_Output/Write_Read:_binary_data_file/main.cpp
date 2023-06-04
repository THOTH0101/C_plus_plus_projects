/*
 * Write a program that creates a binary file Exercise13_13.dat and prompts the user to write data to it.
 * The program then reads the written data from the file and displays it back.
 * */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream binaryio;

    //create binary file
    binaryio.open("Exercise13_13.dat", ios::out | ios::binary);

    //prompt user for data
    cout << "Write data to file:" << endl;
    string data;
    getline(cin, data);

    //write the data to the created file
    binaryio.write(data.c_str(), data.size());
    binaryio.close();

    binaryio.open("Exercise13_13.dat", ios::in | ios::binary);

    //check if file exist
    if(binaryio.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    char s[data.size()];
    binaryio.read(s, data.size());
    binaryio.close();
    cout << s << endl;

    return 0;
}