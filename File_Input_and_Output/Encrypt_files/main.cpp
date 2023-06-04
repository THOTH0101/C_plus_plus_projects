/*
 * Encode the file by adding the index of each byte to that byte, for every byte. Write a program that
 * prompts the user to enter an input file name, an output file name, and saves the encrypted version
 * in the output file.
 * */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //prompt user for input file
    cout << "Enter a input file name: ";
    string inputFilename;
    cin >> inputFilename;

    //prompt user for output file name
    cout << "Enter a output file: ";
    string outputFilename;
    cin >> outputFilename;

    //create binary file object
    fstream binaryInput, binaryOutput;
    binaryInput.open(inputFilename.c_str(), ios::in | ios::binary);
    binaryOutput.open(outputFilename.c_str(), ios::out | ios::binary);

    //check if file exist
    if(binaryInput.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    //start encryption
    int index = 0;
    char ch = char(binaryInput.get() + index);

    while(!binaryInput.eof())
    {
        binaryOutput.put(ch);
        ch = char(binaryInput.get() + index);
        index++;
    }

    binaryInput.close();
    binaryOutput.close();

    cout << "Encryption Done" << endl;

    return 0;
}
