/*
 * Write a utility program that combines the files into a new file. Your program should
 * prompt the user to enter the number of source files, each source-file name, and the target file name.
 * */
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    //prompt user for the following input
    cout << "Enter the number of source files: ";
    int n;
    cin >> n;

    vector<string> inputFile(n);
    //collect filename
    for(auto & i: inputFile)
    {
        cout << "Enter a source file: ";
        cin >> i;
    }

    cout << "Enter a target file: ";
    string outputFile;
    cin >> outputFile;

    //create fstream object
    fstream binaryOutput, binaryInput;
    binaryOutput.open(outputFile.c_str(), ios::out | ios::binary | ios::app);

    for(auto & i: inputFile)
    {
        binaryInput.open(i.c_str(), ios::in | ios::binary); //open source file

        //extract size
        binaryInput.seekg(0, ios::end);
        int size = int(binaryInput.tellg());
        binaryInput.seekg(0, ios::beg);

        char* data = new char[size];
        binaryInput.read(data, size); //read source file
        binaryInput.close();

        //write data into target file
        binaryOutput.write(data, size);
    }

    binaryOutput.close();

    cout << "Combine Done" << endl;

    return 0;
}