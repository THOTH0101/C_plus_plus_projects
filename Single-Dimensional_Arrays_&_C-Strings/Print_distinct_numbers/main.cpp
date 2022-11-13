#include <iostream>
using namespace std;

//function prototype
bool isNumInArray(const int list[], int listSize, int inputs);
void createArray(int list[], int listSize);

int main()
{
    const int SIZE_OF_NUMBERS = 10; //capacity of number to be stored
    int distinctNum[SIZE_OF_NUMBERS]; //initialize array
    int inputs; //initialize user input

    createArray(distinctNum, SIZE_OF_NUMBERS);

    //prompt user to Enter ten numbers
    cout << "Enter ten numbers: ";

    //loop for collection of data
    for(int i = 0; i < SIZE_OF_NUMBERS; i++)
    {
        cin >> inputs;

        if(!isNumInArray(distinctNum, SIZE_OF_NUMBERS, inputs)) //check if is not in array add, hence discard
            distinctNum[i] = inputs;
    }

    //print result
    cout << "The distinct numbers are:";

    //loop for printing result
    for(int j = 0; j < SIZE_OF_NUMBERS; j++)
    {
        if(distinctNum[j] > 0)
            cout << " " << distinctNum[j];
    }

    cout << endl; //move to next line

    return 0;
}

//function definition
bool isNumInArray(const int list[], int listSize, int inputs) //function to check if number exit in array
{
    for(int i = 0; i < listSize; i++)
    {
        if(list[i] == inputs)
            return true;
    }

    return false;
}

void createArray(int list[], int listSize) //function to create a new array
{
    for(int i = 0; i < listSize; i++)
        list[i] = 0;
}