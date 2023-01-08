#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 9;
//function prototype
bool isOddNumOf1s(int matrix[][SIZE]); //checks if every row and every column have the odd number of 1s

int main()
{
    srand(time(0));
    int matrix[SIZE][SIZE];
    int i, j;

    //generate random 0s and 1s
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            matrix[i][j] = rand() % 2;

    //display generate matrix
    for(i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }

    cout << (isOddNumOf1s(matrix) ? "True" : "False") << endl;

    return 0;
}

//function definition
bool isOddNumOf1s(int matrix[][SIZE])
{
    int i, j;

    //row check
    for(i = 0; i < SIZE; i++)
    {
        int count = 0; //initialize to count number of 1s

        for(j = 0; j < SIZE; j++)
        {
            if(matrix[i][j] == 1)
                count++;
        }

        //if count is even return for
        if(count % 2 == 0)
            return false;
    }

    //column check
    for(i = 0; i < SIZE; i++)
    {
        int count = 0; //initialize to count number of 1s

        for(j = 0; j < SIZE; j++)
        {
            if(matrix[j][i] == 1)
                count++;
        }

        //if count is even return for
        if(count % 2 == 0)
            return false;
    }

    return true; //if every row and column has odd number of 1s
}