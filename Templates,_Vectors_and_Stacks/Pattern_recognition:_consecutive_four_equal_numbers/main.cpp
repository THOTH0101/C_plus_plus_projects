/*
 * Write the following function that tests whether a two-dimensional array has four consecutive numbers of
 * the same value, either horizontally, vertically, or diagonally.
 * Write a test program that prompts the user to enter the number of rows and columns of a two-dimensional
 * array and then the values in the array and displays true if the array contains four consecutive numbers with
 * the same value. Otherwise, display false.
 *
 * */

#include <iostream>
#include <vector>
using namespace std;

//function prototype
void printVector(const vector<vector<int>>& matrix);
bool isConsecutiveFour(vector<vector<int>> matrix);

int main()
{
    //prompt user for the vector size
    cout << "Enter the number of rows: ";
    int row;
    cin >> row;
    cout << "Enter the number column: ";
    int col;
    cin >> col;

    //prompt user for the values
    cout << "Enter values into the matrix:" << endl;
    vector<vector<int>> matrix(row);

    for(int i = 0; i < row; i++)
        matrix[i] = vector<int>(col);

    for(int j = 0; j < row; j++)
        for(int k = 0; k < col; k++)
            cin >> matrix[j][k];

    //display the values enter into the matrix and show if it contains consecutive four
    printVector(matrix);
    cout << (isConsecutiveFour(matrix) ? "True" : "False") << endl;

    return 0;
}

//function implementation
void printVector(const vector<vector<int>>& matrix)
{
    for(auto & value : matrix)
    {
        for(int j : value)
            cout << " " << j;
        cout << endl;
    }
    cout << endl;
}

bool isConsecutiveFour(vector<vector<int>> matrix)
{
    int row, col;

    //row check
    for(row = 0; row < matrix.size(); row++)
    {
        int currentInt = matrix[row][0];
        int consecutiveFour = 0;

        for(col = 0; col < matrix[row].size(); col++)
        {
            if(currentInt == matrix[row][col])
            {
                consecutiveFour++;

                if (consecutiveFour == 4)
                    return true;
            }
            else
            {
                currentInt = matrix[row][col]; //change currentInt
                consecutiveFour = 1; //start counting again
            }
        }
    }

    //column check
    for(col = 0; col < matrix[0].size(); col++)
    {
        int currentInt = matrix[0][col];
        int consecutiveFour = 0;

        for(row = 0; row < matrix.size(); row++)
        {
            if(currentInt == matrix[row][col])
            {
                consecutiveFour++;

                if (consecutiveFour == 4)
                    return true;
            }
            else
            {
                currentInt = matrix[row][col]; //change currentInt
                consecutiveFour = 1; //start counting again
            }
        }
    }

    //main diagonal check
    for(col = 0; col < matrix[0].size() - 3; col++)
    {
        int x = 0;
        int y = col;
        int currentInt = matrix[x][y];
        int consecutiveFour = 0;

        for(; x < matrix.size() && y < matrix[0].size(); x++, y++)
        {
            if(currentInt == matrix[x][y])
            {
                consecutiveFour++;

                if(consecutiveFour == 4)
                    return true;
            }
            else
            {
                currentInt = matrix[x][y]; //change currentInt
                consecutiveFour = 1; //start counting again
            }
        }
    }

    for(row = 1; row < matrix.size() - 3; row++)
    {
        int x = row;
        int y = 0;
        int currentInt = matrix[x][y];
        int consecutiveFour = 0;

        for(; x < matrix.size() && y < matrix[0].size(); x++, y++)
        {
            if(currentInt == matrix[x][y])
            {
                consecutiveFour++;

                if(consecutiveFour == 4)
                    return true;
            }
            else
            {
                currentInt = matrix[x][y]; //change currentInt
                consecutiveFour = 1; //start counting again
            }
        }
    }

    //sub-diagonal check
    for(col = matrix[0].size() - 1; col > 2; col--)
    {
        int x = 0;
        int y = col;
        int currentInt = matrix[x][y];
        int consecutiveFour = 0;

        for(; x < matrix.size() && y >= 0; x++, y--)
        {
            if(currentInt == matrix[x][y])
            {
                consecutiveFour++;

                if(consecutiveFour == 4)
                    return true;
            }
            else
            {
                currentInt = matrix[x][y]; //change currentInt
                consecutiveFour = 1; //start counting again
            }
        }
    }

    for(row = 1; row < matrix.size() - 3; row++)
    {
        int x = row;
        int y = matrix[0].size() - 1;
        int currentInt = matrix[x][y];
        int consecutiveFour = 0;

        for(; x < matrix.size() && y > 0; x++, y--)
        {
            if(currentInt == matrix[x][y])
            {
                consecutiveFour++;

                if(consecutiveFour == 4)
                    return true;
            }
            else
            {
                currentInt = matrix[x][y]; //change currentInt
                consecutiveFour = 1; //start counting again
            }
        }
    }

    return false;
}