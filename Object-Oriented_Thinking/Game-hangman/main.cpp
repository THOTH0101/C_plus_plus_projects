#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//create array of words
string words[] = {"write", "that", "season", "love", "effect", "paris", "london",
                  "estonia", "winter", "condition", "package"};

//function prototype
void playHangman(int word);
bool isFilled(const char game[], int size);
bool isMatch(const string& str, char guess);
bool isExisted(const char game[], char guess, int size);

int main()
{
    srand(time(0)); //seed to generate random number

    char input;

    while(input != 'n')
    {
        int word = rand() % 10; //to randomly select a word from the array of word to be guessed

        //invoke the play function
        playHangman(word);

        //prompt user for new game
        cout << "Do you want to guess for another word? Enter y or n > ";
        cin >> input;
    }

    return 0;
}

//function implementation
void playHangman(int word)
{
    string str = words[word];
    const int SIZE = str.size();
    char guess, game[SIZE]; //create game
    int i, count = 0; //count for wrong guesses;

    //loop to initialise game with *
    for(i = 0; i < SIZE; i++)
        game[i] = '*';

    while(!isFilled(game, SIZE)) //keep play till a word is form
    {
        //prompt user to enter a guess
        cout << "(Guess) Enter a letter in word " << game << " > ";
        cin >> guess;

        //check if guess is correct
        if(!isMatch(str, guess))
        {
            cout << "\t\t" << guess << " is not in the word" << endl;
            count++;
        }
        else if(isExisted(game, guess, SIZE))
            cout << "\t\t" << guess << " is already in the word" << endl;
        else
        {
            for(i = 0; i < SIZE; i++)
                if(guess == str[i])
                    game[i] = guess;
        }
    }

    cout << "The word is " << str << ". You missed " << count << (count > 1 ? " times" : " time") << endl;
}

bool isFilled(const char game[], int size)
{
    for(int i = 0; i < size; i++)
        if(game[i] == '*')
            return false;

    return true;
}

bool isMatch(const string& str, char guess)
{
    for(int i = 0; i < str.length(); i++)
        if(str[i] == guess)
            return true; //match found

    return false; //no match found
}

bool isExisted(const char game[], char guess, int size)
{
    for(int i = 0; i < size; i++)
        if(guess == game[i])
            return true;

    return false;
}