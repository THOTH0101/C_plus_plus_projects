/*          the Luhn check or the Mod 10 check:
 * 1. Double every second digit from right to left. If doubling of a digit results in a
 *   two-digit number, add the two digits to get a single digit number.
 *   4388576018402626
 *   2 * 2 = 4
 *   2 * 2 = 4
 *   4 * 2 = 8
 *   1 * 2 = 2
 *   6 * 2 = 12 (1 + 2 = 3)
 *   5 * 2 = 10 (1 + 0 = 1)
 *   8 * 2 = 16 (1 + 6 = 7)
 *   4 * 2 = 8
 *
 *2. Now add all single-digit numbers from Step 1.
 *   4 + 4 + 8 + 2 + 3 + 1 + 7 + 8 = 37
 *
 *3. Add all digits in the odd places from right to left in the card number.
 *   6 + 6 + 0 + 8 + 0 + 7 + 8 + 3 = 38
 *
 *4. Sum the results from Step 2 and Step 3.
 *   37 + 38 = 75
 *
 *5. If the result from Step 4 is divisible by 10, the card number is valid; otherwise,
 *   it is invalid. For example, the number 4388576018402626 is invalid,
 *   but the number 4388576018410707 is valid.
 *
 *  A credit card number must have between 13 and 16 digits. The number must start with the following:
 *   4 for Visa cards
 *   5 for MasterCard cards
 *   37 for American Express cards
 *   6 for Discover cards
 */

#include <iostream>
#include <string>
using namespace std;

//function prototype
bool isValid(const string& cardNumber);
int sumOfDoubleEvenPlace(const string& cardNumber);
int getDigit(int number);
int sumOfOddPlace(const string& cardNumber);
bool startsWith(const string& cardNumber);

int main()
{
    string cardNumber;

    //prompt the user to enter a credit card number as a string
    cout << "Enter a credit card number as a string: ";
    cin >> cardNumber;

    //check and determine validity
    if(isValid(cardNumber))
        cout << cardNumber << " is valid" << endl;
    else
        cout << cardNumber << " is invalid" << endl;

    return 0;
}

//function definition
bool isValid(const string& cardNumber) // Return true if the card number is valid
{
    if(cardNumber.size() >= 13 && cardNumber.size() <= 16
    && ((sumOfDoubleEvenPlace(cardNumber) + sumOfOddPlace(cardNumber)) % 10 == 0)
    && startsWith(cardNumber))
        return true;
    else
        return false;
}

int sumOfDoubleEvenPlace(const string& cardNumber) // Get the result from Step 2
{
    int sum = 0; //initialize sum to zero

    //convert strings to integers and compute their summation
    for(int i = 0; i < cardNumber.length(); i+=2)
    {
        //convert string into an integer
        int digit = cardNumber.at(i) - '0';

        int number = digit * 2; //double the integer

        sum += getDigit(number); //get their summation
    }

    return sum;
}

int getDigit(int number) // Return this number if it is a single digit, otherwise, return the sum of the two digits
{
    if(number < 10)
        return number;
    else
    {
        int digit1 = number / 10;
        int digit2 = number % 10;

        return digit1 + digit2;
    }
}

int sumOfOddPlace(const string& cardNumber) // Return sum of odd-place digits in the card number
{
    int sum = 0;

    //convert strings to integers and compute their summation
    for(int i = 1; i < cardNumber.length(); i+=2)
    {
        sum += cardNumber.at(i) - '0';
    }

    return sum;
}

bool startsWith(const string& cardNumber) // Return true if substr is the prefix for cardNumber
{
    if(cardNumber.at(0) == '4' || cardNumber.at(0) == '5' || cardNumber.at(0) == '6'
    || cardNumber.at(0) == '3' && cardNumber.at(1) == '7')
        return true;
    else
        return false;
}