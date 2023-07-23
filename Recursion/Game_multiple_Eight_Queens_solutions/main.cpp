/*
 * Rewrite Listing 17.8 using recursion
 * */
#include <iostream>
using namespace std;

const int NUMBER_OF_QUEENS = 8;
int queens[NUMBER_OF_QUEENS];
//function prototype
bool isValid(int row, int column);
void printResult();
bool search(int row);

int main()
{
    //invoke to print all solution
    search(0); //start search from row 0. Note row indices are 0 to 7
    return 0;
}

//check whether a queen can be placed at row i and column j
bool isValid(int row, int column)
{
    for(int i = 1; i <= row; i++)
        if (queens[row - i] == column //check column
            || queens[row - i] == column - i //check upper left diagonal
            || queens[row - i] == column + i) //check upper right diagonal
            return false; //there is a conflict
    return true; //no conflict
}

//display the chessboard with eight queens
void printResult()
{
    for(int row = 0; row < NUMBER_OF_QUEENS; row++)
    {
        for (int column = 0; column < NUMBER_OF_QUEENS; column++)
            printf(column == queens[row] ? "|Q" : "| ");
        cout << "|\n";
    }
    cout << endl;
}

//search to place a queen at the specified row
bool search(int row)
{
    if(row == NUMBER_OF_QUEENS) //stopping condition
    {
        //once solution is found
        printResult(); //print it
        return true;
    }

    bool result = false; //to check if backtracking works or not

    for(int column = 0; column < NUMBER_OF_QUEENS; column++)
    {
        queens[row] = column; //place a queen at (row, column)
        if(isValid(row, column))
            result = search(row + 1) || result; //check if position is valid as solution
    }

    return result; //return solution to base call
}