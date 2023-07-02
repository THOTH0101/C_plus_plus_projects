/*
 * Write a recursive function that computes the product of the digits in an integer. Use the following
 * function header:
 *
 *      int productDigits(int n)
 *
 * For example, productDigits(912) returns 9 * 1 * 2 = 18. Write a test program that prompts the user to
 * enter an integer and displays the product of digits.
 * */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int product = 1;
//function prototype
int productDigits(int n);

int main()
{
    //prompt user to enter an input
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;

    //display result
    cout << "Product digits of " << integer << " = " << productDigits(integer) << endl;

    return 0;
}

int productDigits(int n)
{
    int digit = n % 10;

    if(n == 0)
        return product;
    else
    {
        product *= digit;
        return productDigits(n / 10);
    }
}