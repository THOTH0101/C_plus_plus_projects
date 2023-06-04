/*
 * Suppose that a text file Exercise13_4.txt contains 20 integers. Write a program that reads the integers
 * from the file, sort the integers in reverse order, and replaces the unsorted numbers by sorted numbers
 * in the file.
 * */
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> integer;
    fstream inout;

    inout.open("Exercise13_4.txt", ios::in);

    //check if file exist
    if(inout.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    int n;
    //copy the content of file into the array
    while(inout >> n)
        integer.push_back(n);

    inout.close();
    std::sort(integer.begin(), integer.end()); //to sort the array

    inout.open("Exercise13_4.txt", ios::out | ios::trunc); //overwrite previous with same name

    //write the sorted list back to the file
    for(int i = integer.size() - 1; i >= 0; i--)
        inout << integer[i] << " ";
    inout.close();

    return 0;
}