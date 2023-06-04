/*
 * Suppose a file named Exercise13_15.dat has been created from the preceding exercise.
 * Write a program that reads the Loan objects from the file and computes the total of the loan amount.
 * Suppose you don’t know how many Loan objects are in the file. Use the eof() to detect the end of the file.
 * */
#include <iostream>
#include <fstream>
#include <vector>
#include "Loan.h"
using namespace std;

int main()
{
    fstream binaryio;
    binaryio.open("Exercise13_15.dat", ios::in | ios::binary);

    //check if file exist
    if(binaryio.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    vector<Loan> loans; //vector of loans

    Loan loan;
    while(binaryio.read(reinterpret_cast<char*>(&loan), sizeof(Loan)))
        loans.push_back(loan);

    binaryio.close();

    double totalLoanAmount;

    //compute total of the loan amount
    for(auto & i: loans)
    {
        cout << i.getLoanAmount() << " ";
        totalLoanAmount += i.getLoanAmount();
    }

    cout << "The total loan amount: " << totalLoanAmount << endl;

    return 0;
}
