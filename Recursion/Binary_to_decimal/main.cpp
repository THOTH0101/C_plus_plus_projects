/*
 * Write a recursive function that parses a binary number as a string into a decimal integer.
 * The function header is:
 *
 *      int binaryToDecimal(const string& binaryString)
 *
 * Write a test program that prompts the user to enter a binary string and displays its decimal equivalent.
 * */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//function prototype
int binaryToDecimal(const string& binaryString);
int binaryToDecimal(const string& binaryString, int result, int index, int n);

int main()
{
    //prompt user for input
    cout << "Enter a binary string: ";
    string bin;
    cin >> bin;

    //display its decimal equivalent
    cout << "The decimal equivalent of the binary " << bin << " is " << binaryToDecimal(bin) << endl;

    return 0;
}

//function implementation
int binaryToDecimal(const string& binaryString)
{
    int index = 0;
    int result = 0;
    int n = binaryString.size() - 1;
    return binaryToDecimal(binaryString, result, index, n);
}

//recursion helper function
int binaryToDecimal(const string& binaryString, int result, int index, int n)
{
    result += (binaryString[index] - 48) * pow(2, n);

    if(n == 0)
        return result;
    else
        return binaryToDecimal(binaryString, result, index + 1, n - 1);
}