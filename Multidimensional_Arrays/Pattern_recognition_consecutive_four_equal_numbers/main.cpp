#include <iostream>
using namespace std;

const int MAX_COLUMN = 100;
bool isConsecutiveFour(int values[][MAX_COLUMN], int row); //check if array has four consecutive numbers

int main()
{
    int i, j;

    //prompt user to enter number of rows and columns
    cout << "Enter the number rows: ";
    int row;
    cin >> row;

    cout << "Enter the number column(max of 100): ";
    int col;
    cin >> col;

    int values[row][MAX_COLUMN];

    for(i = 0; i < row; i++)
        for(j = 0; j < MAX_COLUMN; j++)
            values[i][j] = -1;

    cout << "Enter values into the matrix:" << endl;

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            cin >> values[i][j];

    for(i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cout << values[i][j] << " ";
        cout << endl;
    }

    cout << (isConsecutiveFour(values, row) ? "True" : "false") << endl;

    return 0;
}

//function prototype
bool isConsecutiveFour(int values[][MAX_COLUMN], int row)
{
    int i, j;

    //row check
    for(i = 0; i < row; i++)
    {
        int currentValue = values[i][0];
        int consecutiveCount = 0;

        for(j = 0; j < MAX_COLUMN; j++)
        {
            if(values[i][j] == currentValue && values[i][j] != -1)
            {
                consecutiveCount++;

                if(consecutiveCount == 4)
                    return true;
            }
            else
            {
                currentValue = values[i][j];
                consecutiveCount = 1;
            }
        }
    }

    //column check
    for(i = 0; i < MAX_COLUMN; i++)
    {
        int currentValue = values[0][i];
        int consecutiveCount = 0;

        for(j = 0; j < row; j++)
        {
            if(values[j][i] == currentValue && values[j][i] != -1)
            {
                consecutiveCount++;

                if(consecutiveCount == 4)
                    return true;
            }
            else
            {
                currentValue = values[j][i];
                consecutiveCount = 1;
            }
        }
    }

    //top left check
    for(i = row - 1; i > 0; i--)
    {
        int x = i;
        int y = 0;
        int currentValue = values[x][y];
        int consecutiveCount = 0;

        for(; x >= 0; x--, y++)
        {
            if(values[x][y] == currentValue && values[x][y] != -1)
            {
                consecutiveCount++;

                if(consecutiveCount == 4)
                    return true;
            }
            else
            {
                currentValue = values[x][y];
                consecutiveCount = 1;
            }
        }
    }

    //top right check
    for(i = 0; i < MAX_COLUMN; i++)
    {
        int x = row - 1;
        int y = i;
        int currentValue = values[x][y];
        int consecutiveCount = 0;

        for(; x >= 0 && y < MAX_COLUMN; x--, y++)
        {
            if(values[x][y] == currentValue && values[x][y] != -1)
            {
                consecutiveCount++;

                if(consecutiveCount == 4)
                    return true;
            }
            else
            {
                currentValue = values[i][j];
                consecutiveCount = 1;
            }
        }
    }

    //bottom left check
    for(i = MAX_COLUMN - 1; i > 0; i--)
    {
        int x = row - 1;
        int y = i;
        int currentValue = values[x][y];
        int consecutiveCount = 0;

        for(; x >= 0 && y >= 0; x--, y--)
        {
            if(values[x][y] == currentValue && values[x][y] != -1)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
            {
                consecutiveCount = 1;
                currentValue = values[x][y];
            }
        }
    }

    //bottom right check
    for(i = 1; i < row; i++)
    {
        int x = i;
        int y = MAX_COLUMN - 1;
        int currentValue = values[x][y];
        int consecutiveCount = 0;

        for(; y >= 0; y--, x--)
        {
            if(values[x][y] == currentValue && values[x][y] != -1)
            {
                consecutiveCount++;
                if(consecutiveCount == 4)
                    return true;
            }
            else
            {
                consecutiveCount = 1;
                currentValue = values[x][y];
            }
        }
    }

    return false;
}
