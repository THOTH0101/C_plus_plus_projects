/*
 * Given a square matrix with elements 0 or 1, write a program to find a maximum square sub-matrix whose
 * elements are all 1s. Your program should prompt the user to enter the number of rows in the matrix and then
 * the matrix and displays the location of the first element in the maximum square sub-matrix and the number of
 * the rows in the sub-matrix. Assume the maximum number of rows is 100.
 * Your program should implement and use the following function to find the maximum square sub-matrix:
 *
 * vector<int> findLargestBlock(const vector<vector<int>>& m)
 *
 * The return value is a vector that consists of three values. The first two values are the row and column
 * indices for the first element in the sub-matrix and the third value is the number of the rows in the sub-matrix.
 *
 * */

#include <iostream>
#include <vector>
using namespace std;

//function prototype
vector<int> findLargestBlock(const vector<vector<int>>& m);
int consecutiveCount(const vector<vector<int>>& m, int row, int col);
bool isSubMatrix(const vector<vector<int>>& m, int row, int col);

int main()
{
    //prompt for number of rows
    cout << "Enter the number of rows for the matrix: ";
    int row;
    cin >> row;

    //create a 2D square matrix
    vector<vector<int>> matrix(row);
    for(auto & i : matrix)
        i = vector<int>(row);

    //prompt for each element
    cout << "Enter the matrix row by row:" << endl;
    for(auto & j : matrix)
        for(int & k : j)
            cin >> k;

    vector<int> subMatrix = findLargestBlock(matrix);

    //display location of first element and the number of rows in the square sub-matrix
    cout << "The maximum square sub-matrix is at (" << subMatrix[0] << ", " << subMatrix[1] << ") with size "
    << subMatrix[2] << endl;

    return 0;
}

//function implementation
vector<int> findLargestBlock(const vector<vector<int>>& m)
{
    vector<int> v(3);
    int highestCount = consecutiveCount(m, 0, 0);

    for(int row = 0; row < m.size(); row++)
    {
        for(int col = 0; col < m[row].size(); col++)
        {
            if(m[row][col] == 1)
            {
                //update highestCount
                if(consecutiveCount(m, row, col) > highestCount && isSubMatrix(m, row, col))
                {
                    highestCount = consecutiveCount(m, row, col); //update highestCount
                    v[0] = row;
                    v[1] = col;
                    v[2] = highestCount;
                }
            }
        }
    }

    return v;
}

int consecutiveCount(const vector<vector<int>>& m, int row, int col)
{
    int consecutiveCount = 0;

    //check if col number is valid
    if(col == m[0].size() - 1)
        return 0;

    for(int j = col; j < m[row].size(); j++)
    {
        if(m[row][j] == 1)
            consecutiveCount++;
        else
            break; //terminate loop once 0 is encountered
    }

    if(consecutiveCount > 1)
        return consecutiveCount;
    else
        return 0;
}

bool isSubMatrix(const vector<vector<int>>& m, int row, int col)
{
    int size = consecutiveCount(m, row, col); //size for the possible sub-matrix

    //check if it's out of range
    if(row + size > m.size())
        return false;

    //check if the square matrix exit
    for(int i = row; i < row + size; i++)
    {
        for(int j = col; j < col + size; j++)
        {
            if(m[i][j] == 0)
                return false;
        }
    }

    return true;
}