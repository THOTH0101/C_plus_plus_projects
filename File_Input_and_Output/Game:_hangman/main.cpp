/*
 * Rewrite Programming Exercise 10.15. The program reads the words stored in a text file,
 * named Exercise13_21.txt. Words are delimited by spaces. Hint: Read the words from the file
 * and store them in a vector.
 * */
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

//function prototype
vector<string> getWords();
void playHangman(string& word);
bool checkMatch(string& word, char guess);
bool checkBox(const vector<char>& b, char guess);
bool gameOver(const vector<char>& b);

int main()
{
    vector<string> words = getWords(); //extract words from file
    char input;

    while(input != 'n')
    {
        //generate random number
        srand(time(0));
        int n = rand() % (words.size() - 1);

        playHangman(words[n]); //invoke play function

        //prompt for another game
        cout << "Do you want to guess for another word? Enter y or n > ";
        cin >> input;
    }

    return 0;
}

//function implementation
vector<string> getWords()
{
    vector<string> words;

    //create textio object
    ifstream input;
    input.open("Exercise13_21.txt");

    //extract words from file
    string word;

    while(!input.eof())
    {
        getline(input, word, ' ');
        words.push_back(word);
    }
    return words;
}

void playHangman(string& word)
{
    const int SIZE = int(word.size());
    char guess;
    int i, count = 0;

    //create word box
    vector<char> box(SIZE);
    for(i = 0; i < SIZE; i++)
        box[i] = '*';

    //start game
    while(!gameOver(box))
    {
        //prompt user for a guess
        cout << "(Guess) Enter a letter in word ";
        for(auto & j: box)
            cout << j;
        cout << " > ";
        cin >> guess;

        //game condition
        if(!checkMatch(word, guess))
        {
            cout << "\t\t" << guess << " is not in the word" << endl;
            count++;
        }
        else if(checkBox(box, guess))
            cout << "\t\t" << guess << " is already in the word" << endl;
        else
        {
            for(i = 0; i < SIZE; i++)
                if(guess == word[i])
                    box[i] = guess;
        }
    }

    cout << "The word is " << word << ". You missed " << count << (count > 1 ? " times" : " time") << endl;
}

bool checkMatch(string& word, char guess)
{
    for(int i = 0; i < word.size(); i++)
        if(guess == word[i])
            return true;
    return false;
}

bool checkBox(const vector<char>& b, char guess)
{
    for(char i : b)
        if(guess == i)
            return true;
    return false;
}

bool gameOver(const vector<char>& b)
{
    for(char i : b)
        if(i == '*')
            return false;
    return true;
}