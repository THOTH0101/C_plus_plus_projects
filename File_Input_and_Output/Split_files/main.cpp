/*
 * Suppose you wish to back up a huge file (e.g., a 10-GB AVI file) to a CD-R. You can do this by
 * splitting the file into smaller pieces and backing up these pieces separately. Write a utility
 * program that splits a large file into smaller ones. Your program should prompt the user to enter
 * a source file and the number of bytes in each smaller file.
 *
 * */
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    //prompt user for source
    cout << "Enter a source file name: ";
    string filename;
    cin >> filename;

    //prompt user for bytes size
    cout << "Enter the number of bytes in each smaller file: ";
    int bytes;
    cin >> bytes;

    //create binary file object
    fstream binaryInput, binaryOutput;
    binaryInput.open(filename.c_str(), ios::in | ios::binary);

    //check if file exist
    if(binaryInput.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    //get file size
    binaryInput.seekg(0, ios::end); //move pointer to the end of file to get file size
    int SIZE = int(binaryInput.tellg());
    binaryInput.seekg(0, ios::beg); //return pointer to original position

    filename += ".0";
    char* data = new char[bytes]; //to store extracted data

    for(int i = 0; i <= (SIZE / bytes); i++)
    {
        //generate new filename for split files
        int size = int(filename.size());
        filename[size - 1] = char('0' + i);
        char newFilename[size];
        strcpy(newFilename, filename.c_str());

        //read file
        binaryOutput.open(newFilename, ios::out | ios::binary); //create output file
        binaryInput.read(data, bytes);

        if(binaryInput.tellg() < SIZE - (SIZE % bytes))
        {
            //write to new file
            binaryOutput.write(data, bytes);
            binaryOutput.close();
        }
        else
        {
            binaryOutput.write(data, SIZE % bytes);
            binaryOutput.close();
        }

        //notification action
        cout << "File " << newFilename << " produced" << endl;
    }
    binaryInput.close();

    cout << "Split Done" << endl;

    return 0;
}