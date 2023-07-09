/*
 *  Supplement VI.A gives a program to find a solution for a Sudoku problem. Rewrite it using recursion.
 * */
#include <iostream>
using namespace std;

//function prototype
void readAProblem(int grid[][9]);
void printSolution(const int grid[][9]);
bool isValid(int i, int j, const int grid[][9]);
bool solvePuzzle(int i, int j, int grid[][9]);

int main()
{
    //read puzzle from user
    int grid[9][9];
    readAProblem(grid);

    //solve the puzzle
    solvePuzzle(0, 0, grid);

    //display solution
    printSolution(grid);

    return 0;
}

//function implementation

//read puzzle from keyboard
void readAProblem(int grid[][9])
{
    cout << "Enter a sudoku problem:" << endl;
    for(int row = 0; row < 9; row++)
        for(int col = 0; col < 9; col++)
            cin >> grid[row][col];
}

//print the puzzle solution
void printSolution(const int grid[][9])
{
    cout << "The solution to the puzzle is given below:" << endl;
    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
}

//check whether grid[i][j] is valid in the grid
bool isValid(int i, int j, const int grid[][9])
{
    //check whether grid[i][j] is valid at the i's row
    for(int column = 0; column < 9; column++)
        if(column != j && grid[i][column] == grid[i][j])
            return false;

    //check whether grid[i][j] is valid at the j's column
    for(int row = 0; row < 9; row++)
        if(row != i && grid[row][j] == grid[i][j])
            return false;

    //check whether grid[i][j] is valid in the 3-by-3 box
    for(int row = (i / 3) * 3; row < (i / 3) * 3 + 3; row++)
        for(int col = (j / 3) * 3; col < (j / 3) * 3 + 3; col++)
            if(row != i && col != j && grid[row][col] == grid[i][j])
                return false;

    return true; //the current value at grid[i][j] is valid
}

//solve the puzzle
bool solvePuzzle(int i, int j, int grid[][9])
{
    //base case
    if(i == 8 && j == 9)
        return true;

    //base case
    if(j == 9)
    {
        i++;
        j = 0;
    }

    //check if the current position fill
    if(grid[i][j] > 0)
        return solvePuzzle(i, j + 1, grid);
    else
    {
        for(int num = 1; num <= 9; num++)
        {
            grid[i][j] = num; //assign a value

            //check if the assign value is a solution
            if(isValid(i, j, grid) && solvePuzzle(i, j + 1, grid))
                return true;
            else
                grid[i][j] = 0; //if wrong try diff value
        }
    }

    return false; //if there's no solution to the puzzle
}