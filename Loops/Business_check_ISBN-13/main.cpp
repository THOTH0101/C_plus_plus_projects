#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int NUMBER_OF_DIGITS = 12;
    int sum = 0;
    string isbn;

    //prompt user to input 12-digit ISBN
    cout << "Enter the first 12-digits of an ISBN-13 as a string: ";
    cin >> isbn;

    //check if the string is upto 12-digits and compute the 13th ISBN-13 digits
    if(isbn.size() == NUMBER_OF_DIGITS)
    {
        //even characters summation
        for(int i = 0; i < isbn.length(); i+=2)
        {
            //convert strings to integers and compute their summation
            sum += isbn.at(i) - '0';
        }

        //odd characters summation
        for(int i = 1; i < isbn.length(); i+=2)
        {
            //convert strings to integers and compute their summation
            sum += 3 * (isbn.at(i) - '0');
        }

        //compute the 13th digit
        int isbn13 = 10 - (sum % 10);

        //display the final result
        if(isbn13 == 10)
        {
            isbn13 = 0;
            cout << "The ISBN-13 number is " << isbn << isbn13 << endl;
        }
        else
            cout << "The ISBN-13 number is " << isbn << isbn13 << endl;

    }
    else
        cout << isbn << " is an invalid input" << endl;

    return 0;
}
