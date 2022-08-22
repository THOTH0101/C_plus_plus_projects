#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int count = 0;
    int userWins = 0;
    int comWins = 0;
    int draws = 0;

    //seed for generating random number
    srand(time(0));

    while(count < 10)
    {
        //generate a random number between 0, 1, or 2
        int comPlay = rand() % 3;

        //prompt user to choose
        cout << "scissor (0), rock (1), paper (2): ";
        int userPlay;
        cin >> userPlay;

        //print an error if the input is invalid
        if(userPlay == 0 || userPlay == 1 || userPlay == 2)
        {
            //compare play and show results
            if(comPlay == 0 && userPlay == 0)
            {
                cout << "The computer is scissor. You are scissor too. It is a draw" << endl;
                draws++;
            }
            else if(comPlay == 0 && userPlay == 1)
            {
                cout << "The computer is scissor. You are rock. You won" << endl;
                userWins++;
            }
            else if(comPlay == 0 && userPlay == 2)
            {
                cout << "The computer is scissor. You are paper. You lose" << endl;
                comWins++;
            }
            else if(comPlay == 1 && userPlay == 0)
            {
                cout << "The computer is rock. You are scissor. You lose" << endl;
                comWins++;
            }
            else if(comPlay == 1 && userPlay == 1)
            {
                cout << "The computer is rock. You are rock too. It is a draw" << endl;
                draws++;
            }
            else if(comPlay == 1 && userPlay == 2)
            {
                cout << "The computer is rock. You are paper. You won" << endl;
                userWins++;
            }
            else if(comPlay == 2 && userPlay == 0)
            {
                cout << "The computer is paper. You are scissor. You won" << endl;
                userWins++;
            }
            else if(comPlay == 2 && userPlay == 1)
            {
                cout << "The computer is paper. You are rock. You lose" << endl;
                comWins++;
            }
            else
            {
                cout << "The computer is paper. You are paper too. It is a draw" << endl;
                draws++;
            }

            count++;
        }
        else
            cout << "Error! an invalid input. Try again" << endl;
        cout << endl;
    }
    cout << "The number of times a User wins is " << userWins << ", The computer wins is "
    << comWins << ", The number draws is " << draws << "." << endl;

    return 0;
}