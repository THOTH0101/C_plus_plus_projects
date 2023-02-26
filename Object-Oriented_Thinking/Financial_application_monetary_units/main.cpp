#include <iostream>
#include <string>
using namespace std;

int main()
{
    //receive the amount
    cout << "Enter an amount in string, for example 11.6: ";
    string amount;
    cin >> amount;

    double newAmount = stod(amount); //convert string to double

    int remainingAmount = static_cast<int>(newAmount * 100);

    //find the number of one dollar
    int numberOfOneDollar = remainingAmount / 100;
    remainingAmount = remainingAmount % 100;

    //find the number of quarters
    int numberOfQuarters = remainingAmount / 25;
    remainingAmount = remainingAmount % 25;

    //find the number of dimes
    int numberOfDimes = remainingAmount / 10;
    remainingAmount = remainingAmount % 10;

    //find the number of nickels
    int numberOfNickels = remainingAmount / 5;
    remainingAmount = remainingAmount % 5;

    //find the number of pennies
    int numberOfPennies = remainingAmount;

    //display result
    cout << "Your amount " << amount << " consists of " << endl <<
    "  " << numberOfOneDollar << " dollars" << endl <<
    "  " << numberOfQuarters << " quarters" << endl <<
    "  " << numberOfDimes << " dimes" << endl <<
    "  " << numberOfNickels << " nickels" << endl <<
    "  " << numberOfPennies << " pennies" << endl;

    return 0;
}