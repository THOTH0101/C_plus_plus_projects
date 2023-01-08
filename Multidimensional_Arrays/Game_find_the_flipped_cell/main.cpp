#include <iostream>
using namespace std;

const int SIZE = 6;
//function prototype
int getFirstRowViolated(const int matrix[][SIZE]); //find the first row where the parity is violated
int getFirstCOLViolated(const int matrix[][SIZE]); //find the first column where the parity is violated

int main()
{
    int matrix[SIZE][SIZE];

    cout << "Enter a 6-by-6 matrix row by row:" << endl;

    //data collection
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            cin >> matrix[i][j];

    int row = getFirstRowViolated(matrix);
    int column = getFirstCOLViolated(matrix);

    cout << "The first row and column where the parity is violated is at (" << row << ", " << column << ")" << endl;

    return 0;
}

int getFirstRowViolated(const int matrix[][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        int count = 0; //initialize count for number of 1s

        for(int j = 0; j < SIZE; j++)
        {
            if(matrix[i][j] == 1)
                count++;
        }
        //if count is not even return index
        if(count % 2 != 0)
            return i;
    }
    return 0;
}

int getFirstCOLViolated(const int matrix[][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        int count = 0; //initialize count for number of 1s

        for(int j = 0; j < SIZE; j++)
        {
            if(matrix[j][i] == 1)
                count++;
        }
        //if count is not even return index
        if(count % 2 != 0)
            return i;
    }
    return 0;
}