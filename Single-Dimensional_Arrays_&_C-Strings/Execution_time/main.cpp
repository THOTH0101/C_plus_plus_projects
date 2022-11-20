#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//function prototype
void createArray(int list[], int arraySize); //function to create an array
void selectionSort(int list[], int arraySize); //function to sort array in orderly manner
int linearSearch(const int list[], int key, int arraySize);
int binarySearch(const int list[], int key, int arraySize);

int main()
{
    srand(time(0)); //time seed for rand function

    const int ARRAY_SIZE = 100000;
    int integer[ARRAY_SIZE];

    createArray(integer, ARRAY_SIZE); //create array with random integer

    int key = rand() % 100000; //generate integer btw 0 to 100000

    cout << "the key generate is " << key << endl; //print the generate key

    long startTime = time(0); //invoke timer to start count in seconds

    int searchResult = linearSearch(integer, key, ARRAY_SIZE);

    long endTime = time(0); //invoke timer to stop count

    long executionTime = endTime - startTime;

    if(searchResult == -1)
        cout << "Key not found for binary search!" << endl;
    else
        cout << "Key found for binary search!" << endl;

    cout << "The estimated time for invoking the linearSearch function is " << executionTime << " seconds" << endl;

    selectionSort(integer, ARRAY_SIZE); //invoke to sort the integer[] array in ascending order

    long newStartTime = time(0); //invoke timer to start count in seconds

    int searchResult2 = binarySearch(integer, key, ARRAY_SIZE);

    long newEndTime = time(0); //invoke timer to stop count

    long newExecutionTime = newEndTime - newStartTime;

    if(searchResult2 < 0)
        cout << "Key not found for binary search!" << endl;
    else
        cout << "Key found for binary search!" << endl;

    cout << "The estimated time for invoking the binarySearch function is " << newExecutionTime << " seconds" << endl;

    return 0;
}

//function definition
void createArray(int list[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        list[i] = rand() % 100000;
}

int linearSearch(const int list[], int key, int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        if(key == list[i])
            return i;
    }

    return -1;
}

void selectionSort(int list[], int arraySize)
{
    for(int i = 0; i < arraySize - 1; i++)
    {
        int currentMin = list[i];
        int currentMinIndex = i;

        for(int j = i + 1; j < arraySize; j++)
        {
            if(currentMin > list[j])
            {
                currentMin = list[j];
                currentMinIndex = j;
            }
        }

        //swap list[i] with list[currentMinIndex] if necessary;
        if(currentMinIndex != i)
        {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}

int binarySearch(const int list[], int key, int arraySize)
{
    int low = 0;
    int high = arraySize - 1;

    while(high >= low)
    {
        int mid = (low + high) / 2;
        if(key < list[mid])
            high = mid - 1;
        else if(key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -low - 1;
}