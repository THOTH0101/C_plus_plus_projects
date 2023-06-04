/*
 * Listing 13.7, CopyFile.cpp, copies files using text I/O. Revise the program that copies files
 * using binary I/O.
 * */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //prompt user for source file
    cout << "Enter a source filename: ";
    string inputFilename;
    cin >> inputFilename;

    //prompt user for target file
    cout << "Enter a target filename: ";
    string outputFilename;
    cin >> outputFilename;

    fstream binaryInput, binaryOutput;
    binaryInput.open(inputFilename.c_str(), ios::in | ios::binary);
    binaryOutput.open(outputFilename.c_str(), ios::out | ios::binary);

    //check if source file exist
    if(binaryInput.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    char ch = char(binaryInput.get());

    while(!binaryInput.eof())
    {
        binaryOutput.put(ch);
        ch = char(binaryInput.get());
    }

    binaryInput.close();
    binaryOutput.close();

    cout << "Copy Done" << endl;

    return 0;
}
