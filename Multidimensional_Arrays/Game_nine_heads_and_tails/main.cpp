#include <iostream>
using namespace std;

void nineHeadsAndTails(int matrix[][3], int num); //function prototype

int main()
{
    int matrix [3][3];
    int i, j;

    //initialise array with zero
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matrix[i][j] = 0;
        }
    }

    //prompt user to enter a number between 0 and 511
    cout << "Enter a number between 0 and 511: ";
    int num;
    cin >> num;

    nineHeadsAndTails(matrix, num); //invoke to play nine heads and tails game

    return 0;
}

//function definition
void nineHeadsAndTails(int matrix[][3], int num)
{
    int i, j;

    //convert num to binary
    for(i = 2; i >= 0; i--)
    {
        for(j = 2; j >= 0; j--)
        {
            matrix[i][j] += num % 2;
            num /= 2;
        }
    }

    //0s = H and 1s = T
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cout << (matrix[i][j] == 0 ? 'H' : 'T') << " ";
        cout << endl;
    }

}