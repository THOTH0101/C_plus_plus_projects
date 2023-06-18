#include <iostream>
#include <string>
#include <cctype>
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

    for(int i = 0; i < hex.size(); i++)
        hex[i] = toupper(hex[i]); // Change it to uppercase

    try
    {
        cout << "The decimal value for hex number " << hex << " is " << hex2Dec(hex) << endl;
    }
    catch(exception& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}

int hex2Dec(const string& hex)
{
    int decimalValue = 0;

    for(unsigned i = 0; i < hex.size(); i++)
    {
        if(!((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'A' && hex[i] <= 'F')))
            throw invalid_argument("not a hex string");
        decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);
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