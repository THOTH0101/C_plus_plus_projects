#include <iostream>
using namespace std;

void reverseSort(int m[][2], int numberOfRows);

int main()
{
    int numberOfRows = 6;
    int m[numberOfRows][2], i;

    //prompts the user to enter 12 points
    cout << "Enter 12 points: ";
    for(i = 0; i < numberOfRows; i++)
        cin >> m[i][0] >> m[i][1];

    reverseSort(m, numberOfRows);

    for(i = 0; i < numberOfRows; i++)
        cout << m[i][0] << " " << m[i][1] << endl;

    return 0;
}

//function definition
void reverseSort(int m[][2], int numberOfRows)
{
    for(int i = 0; i < numberOfRows - 1; i++)
    {
        //initialize first row as the currentMax
        int currentMax1 = m[i][0];
        int currentMax2 = m[i][1];
        int currentMaxIndex = i;

        for(int j = i + 1; j < numberOfRows; j++)
        {
            if(currentMax1 < m[j][0] || currentMax2 < m[j][1])
            {
                currentMax1 = m[j][0];
                currentMax2 = m[j][1];
                currentMaxIndex = j;
            }
        }

        // Swap if necessary;
        if(currentMaxIndex != i)
        {
            m[currentMaxIndex][0] = m[i][0];
            m[currentMaxIndex][1] = m[i][1];
            m[i][0] = currentMax1;
            m[i][1] = currentMax2;
        }
    }
}