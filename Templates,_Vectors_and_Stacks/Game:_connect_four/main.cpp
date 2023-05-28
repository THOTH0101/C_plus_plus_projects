/*
 * Rewrite the Connect Four game in Programming Exercise 8.22 using vectors.
 *Connect four is a two-player board game in which the players alternately drop colored disks into a seven-column,
 * six-row vertically-suspended grid.
 * The objective of the game is to connect four same-colored disks in a row, a column, or a diagonal before your
 * opponent can do likewise. The program prompts two players to drop a RED (shown in dark blue) or YELLOW (shown in
 * light blue) disk alternately. Whenever a disk is dropped, the program re-displays the board on the console and
 * determines the status of the game (win, draw, or continue).
 *
 *
 */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board(6); //game board
static int playCount = 1;
//function prototype
void printBoard();
void dropDisk(int column, char ch);
void playerCheck(int gameCount);
void gameStatus();
int occupiedCount(int column);
bool gameCondition();
bool gameCheck(char ch);


int main()
{
    //create board with vector
    for(auto & row: board)
        row = vector<char>(7);

    //make the board empty
    for(auto & row: board)
        for(char & col: row)
            col = ' ';

    //start game
    printBoard();

    //keep playing till game conditions are met
    do
    {
        //prompt players to play game
        playerCheck(playCount);
        printBoard();
    }while(!gameCondition());

    gameStatus(); //display game result
    return 0;
}

//function implementation
void printBoard()
{
    for(auto & row: board)
    {
        for (char col: row)
            cout << '|' << col;
        cout << '|' << endl;
    }
    cout << "-------------------" << endl;
}

void dropDisk(int column, char ch)
{
    int occupied = occupiedCount(column);
    int index = 6 - occupied;

    //if column is filled
    while(index <= -1)
    {
        cout << (column < 0 || column > 6 ? "Error! invalid column. Enter a valid column (0-6): "
         : "Error! column is filled. Try another column: ");
        cin >> column;
        occupied = occupiedCount(column); //update occupied
        index = 6 - occupied;
    }

    //place disk
    board[index][column] = ch;
}

void playerCheck(int gameCount)
{
    //ask player 1
    if(gameCount % 2 == 1)
    {
        cout << "Drop a red disk at column (0-6): ";
        int col;
        cin >> col;
        dropDisk(col, 'R');
        playCount++;
        cout << endl;
    }

    //ask player 2
    if(gameCount % 2 == 0)
    {
        cout << "Drop a Yellow disk at column (0-6): ";
        int col;
        cin >> col;
        dropDisk(col, 'Y');
        playCount++;
        cout << endl;
    }
}

void gameStatus()
{
    if(gameCheck('R'))
        cout << "The red player won" << endl;
    else if(gameCheck('Y'))
        cout << "The yellow player won" << endl;
    else
        cout << "Game over, it's a draw" << endl;
}

int occupiedCount(int column)
{
    int occupied = 1;

    //count occupied columns
    for(auto & row : board)
        if(row[column] != ' ')
            occupied++;

    return occupied;
}

bool gameCondition()
{
    if(gameCheck('R'))
        return true;
    if(gameCheck('Y'))
        return true;

    int count = 0;
    for(char col : board[0])
    {
        if (col != ' ')
            count++;
    }
    if(count == board[0].size())
        return true;

    return false;
}


bool gameCheck(char ch)
{
    int row, col;

    //row check
    for(row = 0; row < board.size(); row++)
    {
        int consecutiveFour = 0;

        for(col = 0; col < board[row].size(); col++)
        {
            if(ch == board[row][col])
            {
                consecutiveFour++;
                if (consecutiveFour == 4)
                    return true;
            }
            else
                consecutiveFour = 0; //start counting again
        }
    }

    //column check
    for(col = 0; col < board[0].size(); col++)
    {
        int consecutiveFour = 0;

        for(row = 0; row < board.size(); row++)
        {
            if(ch == board[row][col])
            {
                consecutiveFour++;
                if (consecutiveFour == 4)
                    return true;
            }
            else
                consecutiveFour = 0; //start counting again
        }
    }

    //main diagonal check
    for(col = 0; col < board[0].size() - 3; col++)
    {
        int x = 0;
        int y = col;
        int consecutiveFour = 0;

        for(; x < board.size() && y < board[0].size(); x++, y++)
        {
            if(ch == board[x][y])
            {
                consecutiveFour++;
                if(consecutiveFour == 4)
                    return true;
            }
            else
                consecutiveFour = 0; //start counting again
        }
    }

    for(row = 1; row < board.size() - 3; row++)
    {
        int x = row;
        int y = 0;
        int consecutiveFour = 0;

        for(; x < board.size() && y < board[0].size(); x++, y++)
        {
            if(ch == board[x][y])
            {
                consecutiveFour++;
                if(consecutiveFour == 4)
                    return true;
            }
            else
                consecutiveFour = 0; //start counting again
        }
    }

    //sub-diagonal check
    for(col = static_cast<int>(board[0].size() - 1); col > 2; col--)
    {
        int x = 0;
        int y = col;
        int consecutiveFour = 0;

        for(; x < board.size() && y >= 0; x++, y--)
        {
            if(ch == board[x][y])
            {
                consecutiveFour++;
                if(consecutiveFour == 4)
                    return true;
            }
            else
                consecutiveFour = 0; //start counting again
        }
    }

    for(row = 1; row < board.size() - 3; row++)
    {
        int x = row;
        int y = static_cast<int>(board[0].size() - 1);
        int consecutiveFour = 0;

        for(; x < board.size() && y > 0; x++, y--)
        {
            if(ch == board[x][y])
            {
                consecutiveFour++;
                if(consecutiveFour == 4)
                    return true;
            }
            else
                consecutiveFour = 0; //start counting again
        }
    }
    return false;
}