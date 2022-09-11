#include <iostream>
#include <string>
using namespace std;

int main()
{
    int upperCase = 0;
    string word;

    //prompt user to enter input
    cout << "Enter a string: ";
    getline(cin, word);

    //loop to the check for uppercase letter
    for(int i = 0; i < word.length(); i++)
    {
        if(word.at(i) >= 'A' && word.at(i) <= 'Z')
            upperCase++;
    }

    //display uppercase count
    cout << "The number of uppercase letters is " << upperCase << endl;

    return 0;
}