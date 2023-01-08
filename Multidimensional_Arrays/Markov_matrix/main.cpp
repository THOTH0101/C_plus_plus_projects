#include <iostream>
using namespace std;

//function prototype
const int SIZE = 3;
bool isMarkovMatrix(const double m[][SIZE]);

int main()
{
    double m[SIZE][SIZE];

    //prompt user to enter 3 * 3 matrix
    cout << "Enter a 3 by 3 matrix row by row:\n";

    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            cin >> m[i][j];

    //invoke the isMarkov function
    cout << (isMarkovMatrix(m) ?  "It is a Markov matrix" : "It is not a Markov matrix") << endl;

    return 0;
}

//function definition
bool isMarkovMatrix(const double m[][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        double sum = 0;

        for(int j = 0; j < SIZE; j++)
        {
            sum += m[j][i];
        }
        if(sum != 1)
            return false;
    }

    return true;
}