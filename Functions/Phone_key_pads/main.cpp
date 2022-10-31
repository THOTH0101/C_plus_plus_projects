#include <iostream>
using namespace std;

int main()
{
    char letter;
    int num;

    //prompt user to enter a letter
    cout << "Enter a letter: ";
    cin >> letter;

    char newLetter = static_cast<char>(toupper(letter));

    if(newLetter == 'A' || newLetter == 'B' || newLetter == 'C')
        num = 2;
    else if(newLetter == 'D' || newLetter == 'E' || newLetter == 'F')
        num = 3;
    else if(newLetter == 'G' || newLetter == 'H' || newLetter == 'I')
        num = 4;
    else if(newLetter == 'J' || newLetter == 'K' || newLetter == 'L')
        num = 5;
    else if(newLetter == 'M' || newLetter == 'N' || newLetter == 'O')
        num = 6;
    else if(newLetter == 'P' || newLetter == 'Q' || newLetter == 'R' || newLetter == 'S')
        num = 7;
    else if(newLetter == 'T' || newLetter == 'U' || newLetter == 'V')
        num = 8;
    else if(newLetter == 'W' || newLetter == 'X' || newLetter == 'Y' || newLetter == 'Z')
        num = 9;
    else
        num = 0;

    if(num == 0)
        cout << letter << " is an invalid input" << endl;
    else
        cout << "The corresponding number is " << num << endl;

    return 0;
}