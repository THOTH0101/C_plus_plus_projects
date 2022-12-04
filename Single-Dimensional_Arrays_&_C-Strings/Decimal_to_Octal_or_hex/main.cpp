/*
 * (Decimal to Octal or Hex) Use the itoa function described in Table 7.1 to convert
 * a decimal number to an octal number or a hex number using C-strings with the following header:
 *      void itoaUse(int value, char s[], int radix)
 * Write a test program that prompts the user to enter a decimal number and radix,
 * and displays the corresponding octal number or hex value.
 * */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//function prototype
void itoaUse(int value, char s[], int radix); //to convert decimal to radix
int decToOctal(int value, int radix); //to convert to octal
string decToHex(int value, int radix); //to convert to hex

int main()
{
    int dec;
    int radix;
    char s[100000] = "";

    //prompt user to enter decimal number and radix
    cout << "Enter a decimal number: ";
    cin >> dec;
    cout << "Enter radix(8 or 16): ";
    cin >> radix;

    itoaUse(dec, s, radix);

    //print result
    if(radix == 8)
        cout << "The octal value for ";
    else
        cout << "The hex value for ";

    cout << dec << " is " << s << endl;

    return 0;
}

//function definition
void itoaUse(int value, char s[], int radix)
{
    if(radix == 8)
    {
        int newBase = decToOctal(value, radix); //invoke to get the octal
        string remainder = to_string(newBase); //typecast int to string

        for (int i = 0; i < remainder.length(); i++)
            s[i] = remainder[i]; //convert string to cstring
    }

    else if(radix == 16)
    {
        string newBase = decToHex(value, radix); //invoke to get hex

        for(int j = newBase.length() - 1, k = 0; j >= 0; j--, k++)
            s[k] = newBase[j]; //convert string to cstring
    }
}

int decToOctal(int value, int radix)
{
    int newBase = 0;

    for(int i = 0; value > 0; i++)
    {
        int rem = value % radix;
        newBase += rem * pow(10, i);
        value /= radix;
    }

    return newBase;
}

string decToHex(int value, int radix)
{
    string hexNum;
    char hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for(int i = 0; value > 0; i++)
    {
        int rem = value % radix;

        if(rem >= 0 && rem <= 9)
            hexNum += to_string(rem);
        else
            hexNum += hex[rem - 10];

        value /= radix;
    }

    return hexNum;
}