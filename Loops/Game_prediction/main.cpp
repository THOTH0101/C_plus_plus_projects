#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int genNumber = rand() % 100;//generated number

    //prompt user to predict the generated number
    cout << "Enter two Digits: ";
    int guess;
    cin >> guess;

    //change generated number into two individual digits
    int genDigit1 = genNumber / 10;
    int genDigit2 = genNumber % 10;

    //change guessed number into two individual digits
    int guessDigits1 = guess / 10;
    int guessDigits2 = guess % 10;

    //print the generated number
    cout << "The randomly generated number is " << genNumber << endl;

    //check the numbers for match
    if(genNumber == guess)
        cout << "The accuracy is 100%" << endl;
    else if(genDigit1 == guessDigits1
        || genDigit2 == guessDigits2
        || genDigit1 == guessDigits2
        || genDigit2 == guessDigits1)
        cout << "The accuracy is 50%" << endl;
    else
        cout << "The accuracy is 0%" << endl;
    return 0;
}