#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 6;
int getRow1sCounts(int m[][SIZE], int row); //to get number of 1s in the row
int getCol1sCounts(int m[][SIZE], int col); //to get number of 1s in the column
int smallestRow(int m[][SIZE]);
int smallestCol(int m[][SIZE]);

int main()
{
    srand(time(0));
    int m[SIZE][SIZE];
    int i, j;

    //generate random 0s and 1s
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            m[i][j] = rand() % 2;

    //display generate array
    for(i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    //display result
    cout << "The smallest row’s index: " << smallestRow(m) << endl;
    cout << "The smallest column’s index: " << smallestCol(m) << endl;

    return 0;
}

//function definition
int getRow1sCounts(int m[][SIZE], int row)
{
    int sum = 0;

    for(int i = 0; i < SIZE; i++)
        if(m[row][i] == 1)
            sum += m[row][i];

    return sum;
}

int getCol1sCounts(int m[][SIZE], int col)
{
    int sum = 0;

    for(int i = 0; i < SIZE; i++)
        if(m[i][col] == 1)
            sum += m[i][col];

    return sum;
}

int smallestRow(int m[][SIZE])
{
    int smallestRowIndex = 0;
    int smallest1sCount = getRow1sCounts(m, 0);

    for(int i = 1; i < SIZE; i++)
    {
        if(getRow1sCounts(m, i) < smallest1sCount)
        {
            smallestRowIndex = i; //update index
            smallest1sCount = getRow1sCounts(m, i); //update 1s count
        }
    }

    return smallestRowIndex;
}

int smallestCol(int m[][SIZE])
{
    int smallestColIndex = 0;
    int smallest1sCount = getCol1sCounts(m, 0);

    for(int i = 1; i < SIZE; i++)
    {
        if(getCol1sCounts(m, i) < smallest1sCount)
        {
            smallestColIndex = i; //update index
            smallest1sCount = getCol1sCounts(m, i); //update 1s counts
        }
    }

    return smallestColIndex;
}