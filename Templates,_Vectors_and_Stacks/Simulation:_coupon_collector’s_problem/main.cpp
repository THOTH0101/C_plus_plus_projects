/*
 * (Simulation: coupon collector’s problem) Coupon collector is a classic statistic problem with many
 * practical applications. The problem is to pick objects from a set of objects repeatedly and determine
 * how many picks are needed for all the objects to be picked at least once. A variation of the problem
 * is to pick cards from a shuffled deck of 52 cards repeatedly and find out how many picks are needed
 * before you see one of each suit. Assume a picked card is placed back in the deck before picking another.
 * Write a program to simulate the number of picks needed to get four cards from each suit and display the
 * four cards picked (it is possible that a card may be picked twice).
 * */


#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

const int NO_OF_CARDS = 52;
const int NO_OF_PICKS = 4;
//function prototype
int randomPick(int deckSize);
void shuffleDeck(vector<int>& deck);
void pickCards(vector<int>& deck, vector<int>& picks);
bool isSameSuit(const vector<int>& picks);
void printCards(const vector<int>& picks);

int main()
{
    srand(time(0));
    vector<int> deckOfCards (NO_OF_CARDS);
    vector<int> picks (NO_OF_PICKS);

    //initialize deck of cards
    for(int i = 0; i < NO_OF_CARDS; i++)
        deckOfCards[i] = i;

    shuffleDeck(deckOfCards); //shuffle

    int count = 0; //count number picks

    //pick cards from each suit and count number picks
    while(!isSameSuit(picks))
    {
        count++;
        pickCards(deckOfCards, picks); //pick card
    }

    printCards(picks);
    cout << "Number of picks: " << count << endl; //print the number of picks

    return 0;
}

//implementation
int randomPick(int deckSize)
{
    return rand() % deckSize;
}

void shuffleDeck(vector<int>& deck)
{
    for(int i = 0; i < deck.size(); i++)
    {
        //generate random index for shuffle
        int index = randomPick(NO_OF_CARDS);

        //swap cards position to shuffle
        int temp = deck[i];
        deck[i] = deck[index];
        deck[index] = temp;
    }
}

void pickCards(vector<int>& deck, vector<int>& picks)
{
    for(int i = 0; i < NO_OF_PICKS; i++)
        picks[i] = deck[randomPick(NO_OF_CARDS)];
}

bool isSameSuit(const vector<int>& picks)
{
    for(int i = 0; i < NO_OF_PICKS; i++)
        for(int j = 0; j < NO_OF_PICKS; j++)
        {
            //return false if the suit are same
            if(i != j && (picks[i] / 13 == picks[j] /13))
                return false;
        }

    return true;
}

void printCards(const vector<int>& picks)
{
    //define card categories
    string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    string ranks[] = {"ace", "2", "3", "4", "5", "6", "7", "8",
                      "9", "10", "Jack", "Queen", "King"};

    //loop to print each card base on categories
    for(int pick : picks)
        cout << ranks[pick % 13] << " of " << suits[pick / 13] << endl;
}