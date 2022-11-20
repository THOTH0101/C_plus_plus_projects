/*
 * The algorithm makes several passes through the array. On each pass, successive neighboring pairs are compared.
 * If a pair is in decreasing order, its values are swapped; otherwise, the values remain unchanged.
 * */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototype
void createArray(double list[], int listSize); //create a random double number array
void bubbleSort(double list[], int listSize); //function for sorting of array in ascending order

int main()
{
    srand(time(0));
    const int ARRAY_SIZE = 10;
    double arrayOfRandomNumbers[ARRAY_SIZE];

    createArray(arrayOfRandomNumbers, ARRAY_SIZE); //invoke function to create random number

    cout << "********** GENERATED ARRAY **********" << endl;

    for(int i = 0; i < ARRAY_SIZE; i++)
        cout << arrayOfRandomNumbers[i] << " ";

    cout << endl;

    bubbleSort(arrayOfRandomNumbers, ARRAY_SIZE); //invoke bubbleSort function to sort array

    cout << "*********** SORTED ARRAY ***********" << endl;

    //print final result
    for(int j = 0; j < ARRAY_SIZE; j++)
        cout << arrayOfRandomNumbers[j] << " ";

    cout << endl;

    return 0;
}

//function definition
void createArray(double list[], int listSize)
{
    for(int i = 0; i < listSize; i++)
        list[i] = (rand() % 100 + 1) / 10.0;
}

void bubbleSort(double list[], int listSize)
{
    bool changed;
    do
    {
        changed = false;
        for (int j = 0; j < listSize - 1; j++)
            if (list[j] > list[j + 1])
            {
                //swap list[j] with list[j + 1]
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;

                changed = true;
            }
    } while (changed);
}