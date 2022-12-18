#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int columnSize = 5;
void shuffle(int m[3][columnSize]); //to shuffle columns in 2d array

int main()
{
    int m[3][5] = {{1, 2, 3, 4, 5},
                   {3, 4, 5, 6, 7},
                   {5, 6, 7, 8, 9}};

    shuffle(m); //invoke to shuffle columns

    //display result
    cout << "The new shuffled array are: " << endl;
    for(auto & i : m)
    {
        for(int j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}

//function prototype
void shuffle(int m[3][columnSize])
{
    srand(time(0)); //needed to use rand()
    int temp[3];

    for(int i = 0; i < columnSize; i++)
    {
        int i1 = rand() % columnSize; //generate random index

        //swap column i with i1
        temp[0] = m[0][i];
        temp[1] = m[1][i];
        temp[2] = m[2][i];
        m[0][i] = m[0][i1];
        m[1][i] = m[1][i1];
        m[2][i] = m[2][i1];
        m[0][i1] = temp[0];
        m[1][i1] = temp[1];
        m[2][i1] = temp[2];
    }
}