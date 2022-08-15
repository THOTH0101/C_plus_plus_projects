#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int digit1 = rand() % 10;
    int digit2 = rand() % 10;
    int digit3 = rand() % 10;

    //use loop to generate the second digit which is distinct from first digit
    while(digit1 == digit2)
    {
        digit2 = rand() % 10;
    }

    //use loop to generate the third digit which is distinct from first and second digits
    while(digit3 == digit1 || digit3 == digit2)
    {
        digit3 = rand() % 10;
    }

    //prompt user to input a guess
    int guess;
    cout << "Enter any three digits integer: ";
    cin >> guess;

    //print the generated digits
    cout << "The randomly generated number is " << digit1 << digit2 << digit3 << endl;

    //divide guess into three individual digits
    int guessDigit1 = guess / 100;
    int gdr = guess % 100;//the guessDigit1 remainder to calculate second digit
    int guessDigit2 = gdr / 10;
    int guessDigit3 = gdr % 10;

    //check the number for a match
    if(digit1 == guessDigit1 && digit2 == guessDigit2 && digit3 == guessDigit3)
        cout << "Exact match! The accuracy is 100%" << endl;
    else if(digit1 == guessDigit1 || digit1 == guessDigit2 || digit1 == guessDigit3
        || digit2 == guessDigit1 || digit2 == guessDigit2 || digit2 == guessDigit3
        || digit3 == guessDigit1 || digit3 == guessDigit2 || digit3 == guessDigit3)
        cout << "The accuracy is 50%" << endl;
    else
        cout << "The accuracy is 0%" << endl;
    return 0;
}