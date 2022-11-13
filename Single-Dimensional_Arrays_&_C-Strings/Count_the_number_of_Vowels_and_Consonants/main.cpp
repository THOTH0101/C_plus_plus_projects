#include <iostream>
using namespace std;

bool isVowel(char input); //function prototype

int main()
{
    char input;
    int vowels = 0;
    int consonant = 0;

    //prompt for users input
    cout << "Enter a string of character(enter 0 to end inputs): ";
    cin >> input;

    //loop for collection of data
    while(input != '0')
    {
        if(isalpha(input)) //check if input is an alphabet
        {
            if(isVowel(input)) //check if input is vowel
                vowels++;
            else
                consonant++;
        }
        cin >> input; //prompt for input
    }

    //print final result
    cout << "Number of consonant is " << consonant << endl;
    cout << "Number of vowels is " << vowels << endl;

    return 0;
}

//function definition
bool isVowel(char input) //function to determine vowels
{
    const char VOWELS_LETTER[] = "AaEeIiOoUu";

    for(int i = 0; i < 10; i++)
    {
        if(VOWELS_LETTER[i] == input)
            return true;
    }

    return false;
}