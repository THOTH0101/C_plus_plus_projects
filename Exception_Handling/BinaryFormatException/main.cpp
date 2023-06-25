/*
 * Implement the bin2Octal function in Programming Exercise 16.2 to throw a BinaryFormatException if the
 * string is not a binary string. Define a custom exception class named BinaryFormatException. Write a test
 * program that reads a binary number as a string, invokes the bin2Octal function,
 * and displays the octal number.
 *
 * */
#include <iostream>
#include <cmath>
#include "BinaryFormatException.h"
using namespace std;

//function prototype
int dec2Octal(int dec);
int bin2Dec(const string& binaryString);
int bin2Octal(const string& binaryString);

int main()
{
    string binaryString;

    //prompts the user to enter a binary number as a string
    cout << "Enter a binary number: ";
    getline(cin, binaryString);

    try
    {
        int result = bin2Octal(binaryString);
        //display the octal of the binary enter
        cout << "The octal number for binary number " << binaryString << " is " << result << endl;
    }
    catch(BinaryFormatException& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}

//function definition
int dec2Octal(int dec) //function to convert from decimal to octal
{
    int octal = 0; //initialize octal to zero

    //conversion from decimal to octal
    for(int i = 0;dec > 0; dec /= 8, i++)
    {
        int rem = dec % 8; //obtain remainder
        octal += int(rem * pow(10, i));
    }

    return octal; //return octal value
}

int bin2Dec(const string& binaryString) //function to convert from binary to decimal
{
    int dec = 0; //initialize decimal to zero

    //loop to convert from binary to decimal
    for(int i = int(binaryString.size() - 1), j = 0; i >= 0; i--, j++)
    {
        int digit = binaryString.at(i) - '0'; //extract individual digits

        dec += int(digit * pow(2, j));
    }

    return dec; //return decimal value
}

int bin2Octal(const string& binaryString) //function to convert from binary to octal
{
    for(char i : binaryString)
    {
        if(!(i >= '0' && i <= '1'))
            throw BinaryFormatException();
    }
    return dec2Octal(bin2Dec(binaryString));
}