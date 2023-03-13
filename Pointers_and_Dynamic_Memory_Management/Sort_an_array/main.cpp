#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void bubbleSort(int* const array, int size);
void printArray(const int* array, int size);

int main()
{
    srand(time(0));
    const int SIZE = 50;
    int list[SIZE];

    for(int & i : list)
        i = rand() % 50;

    printArray(list, SIZE);
    bubbleSort(list, SIZE);
    cout << endl;
    printArray(list, SIZE);

    return 0;
}

//function implement
void bubbleSort(int* const array, int size)
{
    bool changed;

    do
    {
        changed = false;
        for(int j = 0; j < size; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                changed = true;
            }
        }
    }while(changed);
}

void printArray(const int* array, int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        count++;

        if(count % 10 == 0)
            cout << array[i] << endl;
        else
            cout << array[i] << ' ';
    }
}