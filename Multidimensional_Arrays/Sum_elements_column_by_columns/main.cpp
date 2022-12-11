#include <iostream>
using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex); //function prototype

int main()
{
    int rowSize = 3;
    double m[rowSize][SIZE];

    cout << "Enter a 3-by-4 matrix row by row:" << endl;

    //loop for data collection
    for(int i = 0; i < rowSize; i++)
        for(int j = 0; j < SIZE; j++)
            cin >> m[i][j];

    //display result
    for(int k = 0; k < SIZE; k++)
        cout << "Sum of the elements at column " << k << " is " << sumColumn(m, rowSize, k) << endl;

    return 0;
}

//function definition
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex)
{
    double sum = 0;

    for(int row = 0; row < rowSize; row++)
        sum += m[row][columnIndex];

    return sum;
}