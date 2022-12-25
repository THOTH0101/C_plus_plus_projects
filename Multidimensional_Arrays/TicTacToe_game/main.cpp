#include <iostream>
using namespace std;

const int size = 3;
//function prototype
bool isRowFilled(char board[][size], char token); //check if any row is filled with token
bool isColFilled(char board[][size], char token); //check if any column is filled with token
bool isDiagFilled(char board[][size], char token); //check if any diagonal is filled with token
bool isGameOver(char board[][size]); //check if horizontal, vertical, diagonal, or the whole board is filled
void printBoard(char board[][size]); //display the board on console
void placeToken(char board[][size], char token, int row, int column); //to place token for each play

int main()
{
    char board[size][size];
    int i, j;

    //set the board default to empty space
    for(i = 0; i < size; i++)
        for(j = 0; j < size; j++)
            board[i][j] = ' ';

    printBoard(board); //invoke to display default board

    //start game
    while(!isGameOver(board)) //quit if there's a winner or draw
    {
        int row, col;
        //prompt player X to place token
        cout << "Enter a row (0, 1, or 2) for player X: ";
        cin >> row;

        cout << "Enter a column (0, 1, or 2) for player X: ";
        cin >> col;

        placeToken(board, 'X', row, col); //invoke to place token

        printBoard(board); //print what player X play

        //prompt player O to place token
        if(!isGameOver(board))
        {
            cout << "Enter a row (0, 1, or 2) for player O: ";
            cin >> row;

            cout << "Enter a column (0, 1, or 2) for player O: ";
            cin >> col;

            placeToken(board, 'O', row, col); //invoke to place token

            printBoard(board); //print what player O play
        }

    }

    //display game result
    if(isRowFilled(board, 'X') || isColFilled(board, 'X') || isDiagFilled(board, 'X'))
        cout << "X player won" << endl;

    else if(isRowFilled(board, 'O') || isColFilled(board, 'O') || isDiagFilled(board, 'O'))
        cout << "O player won" << endl;

    else
        cout << "Game over, it's a draw" << endl;

    return 0;
}

//function definition
bool isRowFilled(char board[][size], char token)
{
    //check if any row is filled with token
    for(int i = 0; i < size; i++)
        if(board[i][0] == token && board[i][1] == token &&  board[i][2] == token)
            return true;

    return false;
}

bool isColFilled(char board[][size], char token)
{
    //check if any column is filled with token
    for(int i = 0; i < size; i++)
        if(board[0][i] == token && board[1][i] == token && board[2][i] == token)
            return true;

    return false;
}

bool isDiagFilled(char board[][size], char token)
{
    //check if main diagonal is filled with O
    if(board[0][0] == token && board[1][1] == token && board[2][2] == token)
        return true;

    //check if sub-diagonal is filled with X
    if(board[0][2] == token && board[1][1] == token && board[2][0] == token)
        return true;

    return false;
}

bool isGameOver(char board[][size])
{
    //check if row is filled
    if(isRowFilled(board, 'X'))
        return true;

    if(isRowFilled(board, 'O'))
        return true;

    //check if column is filled
    if(isColFilled(board, 'X'))
        return true;

    if(isColFilled(board, 'O'))
        return true;

    //check if diagonals are filled
    if(isDiagFilled(board, 'X'))
        return true;

    if(isDiagFilled(board, 'O'))
        return true;

    //check if the whole board is occupied
    if(board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' &&
       board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
       board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
        return true;

    return false;
}

void printBoard(char board[][size])
{
    int i, j;

    for(i = 0; i < 13; i++)
        cout << "-";
    cout << "\n";

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            cout << "| " << board[i][j] << ' ';
        }
        cout << '|' <<  endl;
        for(j = 0; j < 13; j++)
            cout << "-";
        cout << "\n";
    }
}

void placeToken(char board[][size], char token, int row, int column)
{
    //prompt error if the location is occupied
    while(board[row][column] != ' ')
    {
        cout << "Invalid move try again" << endl;

        cout << "Enter a valid row (0, 1, or 2): ";
        cin >> row;

        cout << "Enter a valid column (0, 1, or 2): ";
        cin >> column;
    }

    board[row][column] = token; //place token if location is free
}