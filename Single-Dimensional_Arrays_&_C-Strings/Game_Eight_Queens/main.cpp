/*
 * (Game: Eight Queens) The classic Eight Queens puzzle is to place eight queens on a chessboard such
 * that no two can attack each other (i.e., no two queens are on the same row, same column, or same diagonal).
 * There are many possible solutions.
 */
#include <iostream>
using namespace std;

const int ROW_MAX = 8;
const int COLUMN_MAX = 8;

//function prototype
void getNewBoard(int array[], int arraySize); //function to set each element in array to 0
void printArray(const int array[]); //function to the array
bool isSafe(const int array[], int row, int column); //function to check if the position is safe to place queen
bool solveNQueen(int array[], int column, int numOfQueen); //recursion function to backtrack each if no solution

int main()
{
    const int BOARD_PLACES = 64;
    const int numOfQueens = 8;
    int chessboard[BOARD_PLACES]; //create an integer array

    getNewBoard(chessboard, BOARD_PLACES); //invoke getNewBoard function to create an empty chessboard

    //if there's no solution print out the following
    if(!solveNQueen(chessboard, 0, numOfQueens))
    {
        cout << "Solution does not exist" << endl;
        return 0; //terminate the program
    }

    printArray(chessboard); //print solution

    return 0;
}

//function definition
void getNewBoard(int array[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        array[i] = 0;
}

void printArray(const int array[])
{
    //loop to control rows
    for(int i = 0; i < ROW_MAX; i++)
    {
        //loop to control columns
        for(int j = 0; j < COLUMN_MAX; j++)
        {
            if(array[i * COLUMN_MAX + j] == 1)
                cout << "|Q|";
            else
                cout << "| |";
        }

        cout << endl; //move to the next line
    }
}

bool isSafe(const int array[], int row, int column)
{
    int i, j;

    //loop to check the left column
    for(i = 0; i < column; i++)
    {
        if(array[COLUMN_MAX * row + i])
            return false;
    }

    //loop to check the upper left diagonal
    for(i = row, j = column; i >= 0 && j >= 0; i--, j--)
    {
        if(array[COLUMN_MAX * i + j])
            return false;
    }

    //loop to check the lower left diagonal
    for(i = row, j = column; i < ROW_MAX && j >= 0; i++, j--)
    {
        if(array[COLUMN_MAX * i + j])
            return false;
    }

    return true; //return true if position is safe
}

bool solveNQueen(int array[], int column, int numOfQueen)
{
    //return true if all queens are place safe
    if(column >= numOfQueen)
        return true;

    //loop for placing each queen
    for(int i = 0; i < numOfQueen; i++)
    {
        //check if position is safe
        if(isSafe(array, i, column))
        {
            array[COLUMN_MAX * i + column] = 1; //mark position if safe

            //check for next possible solution
            if(solveNQueen(array, column + 1, numOfQueen))
                return true;

            array[COLUMN_MAX * i + column] = 0; //if there's no solution backtrack
        }
    }

    return false;
}