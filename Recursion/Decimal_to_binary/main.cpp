/*
 * Write a recursive function that converts a decimal number into a binary number as a string.
 * The function header is:
 *
 *      string decimalToBinary(int value)
 *
 * Write a test program that prompts the user to enter a decimal number and displays its binary equivalent.
 * */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

stringstream ss;
//function prototype 
string decimalToBinary(int value);
string reverseStr(string & str);

int main()
{
    //prompt for user input
    cout << "Enter a decimal number: ";
    int value;
    cin >> value;

    //display its binary equivalent in string
    cout << "The binary equivalent of the decimal number " << value << " is " << decimalToBinary(value);
  
    return 0;
}

//function implementation
//to convert to binary recursion
string decimalToBinary(int value)
{
    int digit = value % 2;
    ss << digit;

    //base call
    if(value == 0)
    {
        string bin = ss.str();
        return reverseStr(bin);
    }
    else
        return decimalToBinary(value / 2);
}

//to reverse string
string reverseStr(string & str)
{
    for(int i = 0, j = int(str.size() - 1); i < str.size() / 2; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;
}