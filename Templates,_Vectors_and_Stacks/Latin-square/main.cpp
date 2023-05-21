/*
 * A Latin square is an n by n array filled with n different Latin letters, each occurring exactly once in
 * each row and once in each column. Write a program that prompts the user to enter the number n and the array
 * of characters, as shown in the sample output and check if the input array is a Latin square. The characters
 * are the first n characters starting from A.
 *
 * */
#include <iostream>
#include <vector>
using namespace std;

//function prototype
bool checkLatinSquare(const vector<vector<char>>& m);
bool checkFirstCol(const vector<vector<char>>& m);
bool checkFirstRowAndCol(const vector<vector<char>>& m);
bool checkOccurrence(const vector<vector<char>>& m, char ch);

int main()
{
    //prompt user for size of the square matrix
    cout << "Enter number n: ";
    int n;
    cin >> n;

    vector<vector<char>> matrix(n);
    for(auto & row : matrix)
        row = vector<char>(n);

    //prompt user for input
    cout << "Enter " << n << " rows of letters separated by spaces:" << endl;
    for(char & col : matrix[0])
        cin >> col;

    //check if the first input is in correct order
    if(!checkFirstCol(matrix))
        cout << "Wrong input: the letters must be from A to " << static_cast<char>('A' + (matrix.size() - 1))
        << endl;
    else
    {
        //collect rest of input if first column is in correct order
        for(int row = 1; row < matrix.size(); row++)
            for(int col = 0; col < matrix[0].size(); col++)
                cin >> matrix[row][col];

        //check array and display result
        cout << "The input array is" << (checkLatinSquare(matrix) ? " " : " not ") << "a Latin square"
        << endl;
    }

    return 0;
}

//function implementation
bool checkLatinSquare(const vector<vector<char>>& m)
{
    if(!checkFirstRowAndCol(m))
        return false;
    else
    {
        //check for latin square
        for(int col = 0; col < m[0].size(); col++)
        {
            if(!checkOccurrence(m, m[0][col]))
                return false;
        }
    }

    return true;
}

bool checkFirstCol(const vector<vector<char>>& m)
{
    //check if first column is in the right alpha order
    for(int col = 0; col < m[0].size(); col++)
    {
        if(m[0][col] != 'A' + col)
            return false;
    }

    return true;
}

bool checkFirstRowAndCol(const vector<vector<char>>& m)
{
    //check if first row is in the right alpha order
    for(int row = 0; row < m.size(); row++)
    {
        if(m[row][0] != 'A' + row)
            return false;
    }

    //check if first column is in the right alpha order
    for(int col = 0; col < m[0].size(); col++)
    {
        if(m[0][col] != 'A' + col)
            return false;
    }

    return true;
}

bool checkOccurrence(const vector<vector<char>>& m, char ch)
{
    //column check
    for(const auto & row : m)
    {
        int count = 0;
        for(char col : row)
        {
            //count number of occurrence
            if(ch == col)
                count++;
        }

        //check if it occurs more than once
        if(count != 1)
            return false;
    }

    //column check
    for(int col = 0; col < m[0].size(); col++)
    {
        int count = 0;
        for(const auto & row : m)
        {
            //count number of occurrence
            if(ch == row[col])
                count++;
        }

        //check if it occurs more than once
        if(count != 1)
            return false;
    }

    return true;
}