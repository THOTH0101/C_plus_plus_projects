/*
 *  Write a recursive function that converts a decimal number into a hex number as a string.
 *  The function header is:
 *
 *      string decimalToHex(int value)
 *
 *  Write a test program that prompts the user to enter a decimal number and displays its hex equivalent.
 * */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

stringstream ss;
//function prototype
string decimalToHex(int value);
string reverseStr(string & str);

int main()
{
    //prompt for user input
    cout << "Enter a decimal number: ";
    int num;
    cin >> num;

    //display the hex equivalent
    cout << "The hex equivalent of the decimal number " << num << " is " << decimalToHex(num);
  
    return 0;
}

//function implementation
string decimalToHex(int value)
{
    char hexDigits[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int digit = value % 16;
    if(digit >= 0 && digit <= 9)
        ss << digit;
    else
        ss << char(hexDigits[digit - 10]);

    if(value == 0)
      {
          string hex = ss.str();
          return reverseStr(hex);
      }
    else
      return decimalToHex(value / 16);
}


string reverseStr(string & str)
{
    for(int i = 0, j = int(str.size() - 1); i < str.size()/2; i++, j--)
      {
          char temp = str[i];
          str[i] = str[j];
          str[j] = temp;
      }

  return str;
}