/*
 *  Implement the hex2Dec function in Programming Exercise 16.1 to throw a HexFormatException if the string
 *  is not a hex string. Define a custom exception class named HexFormatException. Write a test program that
 *  prompts the user to enter a hex number as a string and displays the number in decimal.
 *
 * */
#include <iostream>
#include "HexFormatException.h"
using namespace std;

// Converts a hex number as a string to decimal
int hex2Dec(const string& hex);

// Converts a hex character to a decimal value
int hexCharToDecimal(char ch);

int main()
{
    // Prompt the user to enter a hex number as a string
    cout << "Enter a hex number: ";
    string hex;
    cin >> hex;

    for(char & i : hex)
        i = char(toupper(i)); // Change it to uppercase

    try
    {
        int result = hex2Dec(hex);
        cout << "The decimal value for hex number " << hex << " is " << result << endl;
    }
    catch(HexFormatException& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}

int hex2Dec(const string& hex)
{
    int decimalValue = 0;

    for(char i : hex)
    {
        if(!((i >= '0' && i <= '9') || (i >= 'A' && i <= 'F')))
            throw HexFormatException();
        decimalValue = decimalValue * 16 + hexCharToDecimal(i);
    }

    return decimalValue;
}

int hexCharToDecimal(char ch)
{
    if (ch >= 'A' && ch <= 'F')
        return 10 + ch - 'A';
    else // ch is '0', '1', ..., or '9'
        return ch - '0';
}