/*
 * (Explore matrix) Write a program that randomly fills in 0s and 1s into a 4-by-4 square matrix, prints the matrix,
 * and finds the rows, columns, and diagonals with all 0s or 1s.
 * */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//function prototype
const int SIZE = 4;
bool isSameNumRow(int matrix[][SIZE], int num, int row); //to check if all element are the same in the row
bool isSameNumCol(int matrix[][SIZE], int num, int column); //to check if all element are the same in the column
bool isSameMainDiag(int matrix[][SIZE], int num); //to check if all element are the same in the main diagonal
bool isSameSubDiag(int matrix[][SIZE], int num); //to check if all element are the same in the sub diagonal

int main()
{
    srand(time(0));
    int matrix[SIZE][SIZE];

    //generate random 0's and 1's for all element in the matrix
    for(auto & i : matrix)
        for(int & j : i)
            j = rand() % 2;

    //display the matrix
    for(auto & j : matrix)
    {
        for (int k : j)
            cout << k << " ";
        cout << endl;
    }

    int row = 0;
    int column = 0;
    int mainDiag = 0;
    int subDiag = 0;
    int k, l;

    //check and print all 0's or 1's element in same row
    for(k = 0; k < 2; k++)
    {
        for(l = 0; l < SIZE; l++)
        {
            if(isSameNumRow(matrix, k, l))
            {
                cout << "All " << k << "'s on row " << l << endl;
                row++;
            }
        }
    }

    //check and print all 0's or 1's element in same column
    for(k = 0; k < 2; k++)
    {
        for(l = 0; l < SIZE; l++)
        {
            if(isSameNumCol(matrix, k, l))
            {
                cout << "All " << k << "'s on column " << l << endl;
                column++;
            }
        }
    }

    //check and print 0's or 1's in main diagonal
    for(k = 0; k < 2; k++)
    {
        if(isSameMainDiag(matrix, k))
        {
            cout << "All " << k << "'s on the major diagonal" << endl;
            mainDiag++;
        }
    }

    //check and print 0's or 1's in sub diagonal
    for(k = 0; k < 2; k++)
    {
        if(isSameSubDiag(matrix, k))
        {
            cout << "All " << k << "'s on the sub-diagonal" << endl;
            subDiag++;
        }
    }

    //display if elements in individual categories are not same
    if(row == 0)
        cout << "No same numbers on a row" << endl;

    if(column == 0)
        cout << "No same numbers on a column" << endl;

    if(mainDiag == 0)
        cout << "No same numbers on the major diagonal" << endl;

    if(subDiag == 0)
        cout << "No same numbers on the sub-diagonal" << endl;

    return 0;
}

//function definition
bool isSameNumRow(int matrix[][SIZE], int num, int row)
{
    for(int i = 0; i < SIZE; i++)
    {
        if(matrix[row][i] != num)
            return false;
    }

    return true;
}

bool isSameNumCol(int matrix[][SIZE], int num, int column)
{
    for(int i = 0; i < SIZE; i++)
    {
        if(matrix[i][column] != num)
            return false;
    }

    return true;
}

bool isSameMainDiag(int matrix[][SIZE], int num)
{
    for(int i = 0; i < SIZE; i++)
    {
        if(matrix[i][i] != num)
            return false;
    }

    return true;
}

bool isSameSubDiag(int matrix[][SIZE], int num)
{
    for(int i = 0, j = SIZE - 1; i < SIZE; i++, j--)
    {
        if(matrix[i][j] != num)
            return false;
    }

    return true;
}