/*
 * Write a recursive function that parses a hex number as a string into a decimal integer.
 * The function header is:
 *
 *      int hexToDecimal(const string& hexString)
 *
 * Write a test program that prompts the user to enter a hex string and displays its decimal equivalent.
 * */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//function prototype
int hexToDecimal(const string& hexString);
int hexToDecimal(const string& hexString, int index, int n, int result);
int hexDigit(char hex);

int main()
{
    //prompt user for input
    cout << "Enter a hex string: ";
    string hex;
    cin >> hex;

    //display its decimal equivalent
    cout << "The decimal equivalent for the hex number " << hex << " is " << hexToDecimal(hex) << endl;

    return 0;
}

//function implementation
int hexToDecimal(const string& hexString)
{
    int result = 0;
    int index = 0;
    int n = int(hexString.size() - 1);
    return hexToDecimal(hexString, index, n, result);
}

int hexToDecimal(const string& hexString, int index, int n, int result)
{
    result += hexDigit(hexString[index]) * pow(16, n);

    //base call
    if(n == 0)
        return result;
    else
        hexToDecimal(hexString, index + 1, n - 1, result);
}

int hexDigit(char hex)
{
    if(toupper(hex) >= 'A' && toupper(hex) <= 'F')
        return (toupper(hex) - 'A') + 10;
    else
        return hex- '0';
}
