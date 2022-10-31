#include <iostream>
#include <string>
using namespace std;

int getNumber(char uppercaseLetter); //function prototype

//test program
int main()
{
    string letter;
    string trans;

    //prompt user to enter a string
    cout << "Enter a string: ";
    getline(cin, letter);

    for(int i = 0; i < letter.length(); i++)
    {
        if(!isalpha(letter[i]))
            trans += letter[i];
        if(isalpha(letter[i]))
        {
            char uppercaseLetter = static_cast<char>(toupper(letter[i])); //convert to uppercase
            trans += to_string(getNumber(uppercaseLetter)); //convert letter to digit
        }
    }

    //print final result
    cout << trans << endl;

    return 0;
}

//function definition
int getNumber(char uppercaseLetter)
{
    if(uppercaseLetter == 'A' || uppercaseLetter == 'B' || uppercaseLetter == 'C')
        return 2;
    else if(uppercaseLetter == 'D' || uppercaseLetter == 'E' || uppercaseLetter == 'F')
        return 3;
    else if(uppercaseLetter == 'G' || uppercaseLetter == 'H' || uppercaseLetter == 'I')
        return 4;
    else if(uppercaseLetter == 'J' || uppercaseLetter == 'K' || uppercaseLetter == 'L')
        return 5;
    else if(uppercaseLetter == 'M' || uppercaseLetter == 'N' || uppercaseLetter == 'O')
        return 6;
    else if(uppercaseLetter == 'P' || uppercaseLetter == 'Q' || uppercaseLetter == 'R' || uppercaseLetter == 'S')
        return 7;
    else if(uppercaseLetter == 'T' || uppercaseLetter == 'U' || uppercaseLetter == 'V')
        return 8;
    else if(uppercaseLetter == 'W' || uppercaseLetter == 'X' || uppercaseLetter == 'Y' || uppercaseLetter == 'Z')
        return 9;

        return 0;
}