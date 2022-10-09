/*
 * Roll two dice. Each die has six faces representing values 1, 2, ... , and 6, respectively.
 * Check the sum of the two dice. If the sum is 2, 3, or 12 (called craps), you lose;
 * if the sum is 7 or 11 (called natural), you win;
 * if the sum is another value (i.e., 4, 5, 6, 8, 9, or 10), a point is established.
 * Continue until you roll either a 7 (you lose) or the same point value (you win).
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototype
bool isGame(int rolled);
int gamePoint(int rolled);
void playGame(int numberOfGames);

int main()
{
    srand(time(0));

    //invoke playGame function
    playGame(5000);

    return 0;
}

bool isGame(int rolled) //check and determine the game, true means win and false means loss
{
    //check if rolled and determine Game
    if(rolled == 2 || rolled == 3 || rolled == 12)
        return false;
    else if(rolled == 7 || rolled == 11)
        return true;
    else
    {
        //invoke gamePoint function to finalise the game
        if(gamePoint(rolled) == 7)
            return false;
        else
            return true;
    }
}

int gamePoint(int rolled)
{
    int newRolled;

    //Continue until you roll either a 7 (you lose) or the same point value (you win)
    while(true)
    {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        newRolled = die1 + die2;

        if(newRolled == rolled)
            return rolled;
        else if(newRolled == 7)
            return newRolled;
    }
}

void playGame(int numberOfGames)
{
    const int NUMBER_OF_GAMES = numberOfGames;
    int count = 0;
    int wins = 0;
    int loss = 0;

    while(count < NUMBER_OF_GAMES)
    {
        count++; //increase game count

        //roll dice
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int rolled = die1 + die2;

        //check to determine win
        if(isGame(rolled))
            wins++;
        else
            loss++;
    }

    cout << "The ratio of win to lose is " << wins << " / " << loss << endl;
}