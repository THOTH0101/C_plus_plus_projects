/*
 * Write a program that creates five Loan objects and stores them in a file named Exercise13_14.dat.
 * The Loan class was introduced in Listing 9.13.
 * */
#include <iostream>
#include <fstream>
#include "Loan.h"
using namespace std;

int main()
{
    fstream binaryio;
    binaryio.open("Exercise13_14.dat", ios::out | ios::binary);

    //create five loan object
    Loan loan1(25.6, 4, 10000);
    Loan loan2(14.95, 7, 25000);
    Loan loan3(50.0, 2, 15000);
    Loan loan4(15.7, 5, 5000);
    Loan loan5(70.3, 2, 50000);

    //store in the created file
    binaryio.write(reinterpret_cast<char*>(&loan1), sizeof(Loan));
    binaryio.write(reinterpret_cast<char*>(&loan2), sizeof(Loan));
    binaryio.write(reinterpret_cast<char*>(&loan3), sizeof(Loan));
    binaryio.write(reinterpret_cast<char*>(&loan4), sizeof(Loan));
    binaryio.write(reinterpret_cast<char*>(&loan5), sizeof(Loan));

    binaryio.close(); //close file

    cout << "Done";

    return 0;
}
