/*
 * Rewrite Programming Exercise 8.7 using vectors. The program prompts the user to enter the length of a square matrix,
 * randomly fills in 0s and 1s into the matrix, prints the matrix, and finds the rows, columns, and diagonals with
 * all 0s or 1s.
 *
 * */

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

//function prototype
void randomMatrix(vector<vector<int>>& m);
void printMatrix(vector<vector<int>>& m);
bool isSameRow(vector<vector<int>>& m, int row, int digit);
bool isSameColumn(vector<vector<int>>& m, int col, int digit);
bool isDiagCheck(vector<vector<int>>& m, int digit);
bool isSubDiag(vector<vector<int>>& m, int digit);


int main()
{
    srand(time(0));
    //prompt user to enter size of square matrix
    cout << "Enter the size for the matrix: ";
    int n;
    cin >> n;

    //create 2d vector
    vector<vector<int>> matrix(n);
    for(auto & row: matrix)
        row = vector<int>(n);

    randomMatrix(matrix); //generate random 0's and 1's
    printMatrix(matrix);

    int row = 0, col = 0, diag = 0, subDiag = 0;

    //find column, row, and diagonal with all 0s and 1s
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            if(isSameRow(matrix, j, i))
            {
                if(row == 0)
                    cout << "All " << i << "s on row " << j;
                else
                    cout << ", " << j;
                row++;
            }
        }
    }
    if(row > 0)
        cout << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            if(isSameColumn(matrix, j, i))
            {
                if(col == 0)
                    cout << "All " << i << "s on column " << j;
                else
                    cout << ", " << j;
                col++;
            }
        }
    }
    if(col > 0)
        cout << endl;

    for(int i = 0; i < 2; i++)
    {
        if(isDiagCheck(matrix, i))
        {
            cout << "All " << i << "s on the major diagonal" << endl;
            diag++;
        }
    }

    for(int i = 0; i < 2; i++)
    {
        if(isSubDiag(matrix, i))
        {
            cout << "All " << i << "s on the subdiagonal" << endl;
            subDiag++;
        }
    }

    if(row == 0)
        cout << "No same number on a row" << endl;
    if(col == 0)
        cout << "No same number on a column" << endl;
    if(diag == 0)
        cout << "No same number on the major diagonal" << endl;
    if(subDiag == 0)
        cout << "No same number on the subdiagonal" << endl;

    return 0;
}

//function implementation
void randomMatrix(vector<vector<int>>& m)
{
    for(auto & row: m)
        for(int & col: row)
            col = rand() % 2;
}

void printMatrix(vector<vector<int>>& m)
{
    for(auto & row: m)
    {
        for (int &col: row)
            cout << col << " ";
        cout << endl;
    }
}

bool isSameRow(vector<vector<int>>& m, int row, int digit)
{
    for(int i = 0; i < m[row].size(); i++)
    {
        if(m[row][i] != digit)
            return false;
    }

    return true;
}
bool isSameColumn(vector<vector<int>>& m, int col, int digit)
{
    for(int i = 0; i < m.size(); i++)
    {
        if(m[i][col] != digit)
            return false;
    }

    return true;
}

bool isDiagCheck(vector<vector<int>>& m, int digit)
{
    for(int i = 0; i < m.size(); i++)
    {
        if(m[i][i] != digit)
            return false;
    }

    return true;
}
bool isSubDiag(vector<vector<int>>& m, int digit)
{
    for(unsigned i = 0, j = m[i].size() - 1; i < m.size(); i++, j--)
    {
        if(m[i][j] != digit)
            return false;
    }

    return true;
}