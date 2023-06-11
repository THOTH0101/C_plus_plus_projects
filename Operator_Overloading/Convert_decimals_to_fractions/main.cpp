/*
 * Write a program that prompts the user to enter a decimal number and display the number in a fraction.
 * (Hint: read the decimal number as a string, extract the integer part and fractional part from the string,
 * and use the Rational class to obtain a rational number for the decimal number.)
 *
 * */
#include <iostream>
#include <string>
#include <cmath>
#include "Rational.h"
using namespace std;

int main()
{
    //prompt user to enter decimal number
    cout << "Enter a decimal number: ";
    string decimal;
    cin >> decimal;

    //count the number of digit after the decimal point
    int count = 0;
    for(int i = int(decimal.length() - 1); decimal[i] != '.'; i--)
        count++;

    //extract numerator and denominator
    int denominator = int(pow(10, count));
    int numerator = int(stod(decimal) * denominator);

    //create a rational object with the extracted numerator and denominator
    Rational r1(numerator, denominator);

    //display the fraction
    cout << "The fraction number is " << r1 << endl;

    return 0;
}