/*
 * Suppose you want to track how many times a program has been executed. You may store an int
 * to count the file. Increase the count by 1 each time this program is executed. Let the program
 * be Exercise13_22 and store the count in Exercise13_22.dat.
 * */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //create fstream object
    fstream binaryio;
    binaryio.open("Exercise13_22.dat", ios::binary |ios::in);
    int count;

    //check if file exist
    if(binaryio.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    //read file to know current count
    binaryio.read(reinterpret_cast<char*>(&count), sizeof(count));
    binaryio.close();

    //display count
    cout << "The program has been executed " << count << (count < 2 ? " time" : " times") << endl;

    //update count for current execution
    binaryio.open("Exercise13_22.dat", ios::binary | ios::out); //reopen file for update
    count++;
    binaryio.write(reinterpret_cast<char*>(&count), sizeof(count));
    binaryio.close();
    cout << "Update Done" << endl;

    return 0;
}