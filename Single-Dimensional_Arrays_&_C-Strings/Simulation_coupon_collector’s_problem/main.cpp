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
using namespace std;

const int CARD_DECK = 52;
const int PICKS = 4;

//function prototype
void shuffleCards(int array[], int arraySize); //to shuffle cards in the deck of card
void printArray(const int array[], int arraySize); //to print a given array
void pickCards(const int array[], int array1[]); //for collection of cards
bool isOfEachSuit(const int array[]); //to check if they are of same suit
int randomPick(int deckSize); //to get a random pick in the deck of card

int main()
{
    srand(time(0)); //rand() function seed
    int deckOfCards[CARD_DECK];
    int cardPicks[PICKS];

    for(int i = 0; i < CARD_DECK; i++)
        deckOfCards[i] = i;

    shuffleCards(deckOfCards, CARD_DECK); //invoke function to shuffle the deck of cards

    int count = 0; //initialise for counting picks

    do
    {
        count++; //increase count for every pick

        pickCards(deckOfCards, cardPicks); //pick cards
    } while(!isOfEachSuit(cardPicks)); //keep picking cards until they are from different suit

    printArray(cardPicks, PICKS); //print the picked cards

    cout << "Number of picks: " << count << endl; //print the number of picks

    return 0;
}

//function definition
void shuffleCards(int array[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        int index = randomPick(arraySize); //generate a random index

        //swap array values
        int temp = array[i]; //assign the array value to temporary value
        array[i] = array[index];
        array[index] = temp;

    }
}

void printArray(const int array[], int arraySize)
{
    //define card categories
    string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    string ranks[] = {"ace", "2", "3", "4", "5", "6", "7", "8",
                      "9", "10", "Jack", "Queen", "King"};

    //loop to print each card base on categories
    for(int i = 0; i < arraySize; i++)
        cout << ranks[array[i] % 13] << " of " << suits[array[i] / 13] << endl;
}

void pickCards(const int array[], int array1[])
{
    //pick from the deck to a new array
    for(int i = 0; i < PICKS; i++)
        array1[i] = array[randomPick(CARD_DECK)];
}

bool isOfEachSuit(const int array[])
{
    for(int i = 0; i < PICKS; i++)
    {
        for(int j = 0; j < PICKS; j++)
        {
            if(i != j && (array[i] / 13 == array[j] / 13)) //if of same suit return false
                return false;
        }
    }

    return true;
}

int randomPick(int deckSize)
{
    return rand() % deckSize;
}