/*
 * Suppose a file is encrypted using the scheme in Programming Exercise 13.19. Decode the file
 * by subtracting the index of each byte from that byte, for every byte. Write a program that
 * reads the name of an encrypted file and the name of an output file, and saves the decrypted
 * version in the output file.
 * */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //prompt for encrypted file name
    cout << "Enter an encrypted filename: ";
    string inputFilename;
    cin >> inputFilename;

    //prompt for output filename
    cout << "Enter a output filename: ";
    string outputFilename;
    cin >> outputFilename;

    //create binary object
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

    //start decryption
    int index = 0;
    char ch = char(binaryInput.get() - index);

    while(!binaryInput.eof())
    {
        binaryOutput.put(ch);
        ch = char(binaryInput.get() - index);
        index++;
    }

    binaryInput.close();
    binaryOutput.close();

    cout << "Decryption Done" << endl;

    return 0;
}
