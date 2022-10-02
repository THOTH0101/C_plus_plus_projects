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
void pointGame(int rolled);
void checkGame(int die1, int die2);

int main()
{
    srand(time(0));//initialise seed to generate random number

    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;

    checkGame(die1, die2);

    return 0;
}

//function definition
void pointGame(int rolled)
{
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int newRolled = die1 + die2;

    //Continue until you roll either a 7 (you lose) or the same point value (you win)
    while(true)
    {
            die1 = rand() % 6 + 1;
            die2 = rand() % 6 + 1;
            newRolled = die1 + die2;

            //terminate if newRolled = rolled
            if(newRolled == rolled)
            {
                cout << "You rolled " << die1 << " + " << die2 << " = " << newRolled << endl;
                cout << "You win" << endl;
                break;
            }
            //terminate if newRolled = 7
            else if(newRolled == 7)
            {
                cout << "You rolled " << die1 << " + " << die2 << " = " << newRolled << endl;
                cout << "You lose" << endl;
                break;
            }
    }
}

void checkGame(int die1, int die2)
{
    int rolled = die1 + die2;

    //check if rolled and determine Game
    if(rolled == 2 || rolled == 3 || rolled == 12)
    {
        cout << "You rolled " << die1 << " + " << die2 << " = " << rolled << endl;
        cout << "You lose" << endl;
    }
    else if(rolled == 7 || rolled == 11)
    {
        cout << "You rolled " << die1 << " + " << die2 << " = " << rolled << endl;
        cout << "You win" << endl;
    }
    else
    {
        cout << "You rolled " << die1 << " + " << die2 << " = " << rolled << endl;
        cout << "point is " << rolled << endl;

        //invoke pointGame function to finalise the game
        pointGame(rolled);
    }
}