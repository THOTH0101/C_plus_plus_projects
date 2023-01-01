#include <iostream>
using namespace std;

const int ROW = 6;
const int COL = 7;
//function prototype
bool isRowConnect(char board[][COL], char disk); //check if any row has four colored disk connected
bool isColConnect(char board[][COL], char disk); //check if any column has four colored disk connected
bool isDiagConnect(char board[][COL], char disk); //check if any diagonal has four coloured disk connected
bool isGameOver(char board[][COL]); //check if horizontal, vertical, diagonal, or the whole board is filled
void dropDisk(char board[][COL], int dropLevel[], char disk, int col); //drop disk into column
void printBoard(char board[][COL]); //print the board

int main()
{
    int i, j;
    char board[ROW][COL];
    int dropLevel[COL];

    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            board[i][j] = ' ';

    for(i = 0; i < COL; i++)
        dropLevel[i] = 5;

    printBoard(board); //invoke display empty board

    //start game
    while(!isGameOver(board))
    {
        int col;

        //prompt player to drop a red disk
        cout << "Drop a red disk at column (0–6): ";
        cin >> col;

        dropDisk(board, dropLevel, 'R', col); //invoke to drop disk into chosen column
        printBoard(board); //display board status

        if(!isGameOver(board))
        {
            //prompt player to drop a yellow disk
            cout << "Drop a yellow disk at column (0–6): ";
            cin >> col;

            dropDisk(board, dropLevel, 'Y', col); //invoke to drop disk into chosen column
            printBoard(board); //display board status
        }
    }

    if(isColConnect(board, 'R') || isRowConnect(board, 'R') || isDiagConnect(board, 'R'))
        cout << "The red player won" << endl;

    else if(isColConnect(board, 'Y') || isRowConnect(board, 'Y') || isDiagConnect(board, 'Y'))
        cout << "The yellow player won" << endl;

    else
        cout << "Game over, it's a draw" << endl;

    return 0;
}

//function definition
bool isRowConnect(char board[][COL], char disk)
{
    for(int i = 0; i < COL; i++)
    {
        int consecutiveCount = 0;

        for(int row = 0; row < ROW; row++)
        {
            if(board[row][i] == disk)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
                consecutiveCount = 0;
        }
    }

    return false;
}

bool isColConnect(char board[][COL], char disk)
{
    for(int i = 0; i < ROW; i++)
    {
        int consecutiveCount = 0;

        for(int column = 0; column < COL; column++)
        {
            if(board[i][column] == disk)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
                consecutiveCount = 0;
        }
    }

    return false;
}

bool isDiagConnect(char board[][COL], char disk)
{
    int i, consecutiveCount;

    //left diagonal
    for(i = 0; i < ROW - 3; i++)
    {
        int row = i;
        int column = 0;
        consecutiveCount = 0;

        for(; row < ROW; row++, column++)
        {
            if(board[row][column] == disk)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
                consecutiveCount = 0;
        }
    }

    for(i = 1; i < COL - 3; i++)
    {
        int row = 0;
        int column = i;
        consecutiveCount = 0;

        for(; column < COL; row++, column++)
        {
            if(board[row][column] == disk)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
                consecutiveCount = 0;
        }
    }

    //right diagonal
    for(i = 0; i < ROW - 3; i++)
    {
        int row = i;
        int column = COL - 1;
        consecutiveCount = 0;

        for(; row < ROW; row++, column--)
        {
            if(board[row][column] == disk)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
                consecutiveCount = 0;
        }
    }

    for(i = COL - 2; i >= 3; i--)
    {
        int row = 0;
        int column = i;
        consecutiveCount = 0;

        for(; column >= 0; row++, column--)
        {
            if(board[row][column] == disk)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
                consecutiveCount = 0;
        }
    }

    return false;
}

bool isGameOver(char board[][COL])
{
    //row check
    if(isRowConnect(board, 'R'))
        return true;

    if(isRowConnect(board, 'Y'))
        return true;

    //column check
    if(isColConnect(board, 'R'))
        return true;

    if(isColConnect(board, 'Y'))
        return true;

    //diagonal check
    if(isDiagConnect(board, 'R'))
        return true;

    if(isDiagConnect(board, 'Y'))
        return true;

    //check if all column is filled
    if(board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[0][3] != ' ' && board[0][4] != ' ' &&
            board[0][5] != ' ' && board[0][6] != ' ')
        return true;

    return false;
}

void dropDisk(char board[][COL], int dropLevel[], char disk, int col)
{
    while(dropLevel[col] <= 0)
    {
        cout << "Column is full!, try another column: ";
        cin >> col;
    }

    if(board[dropLevel[col]][col] != ' ')
        dropLevel[col]--;

    board[dropLevel[col]][col] = disk;
}

void printBoard(char board[][COL])
{
    cout << "\n"; //start printing from the next line

    for(int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            cout << "|" << board[i][j];
        cout << '|' << endl;
    }

    cout << "----------------------" << endl;
}