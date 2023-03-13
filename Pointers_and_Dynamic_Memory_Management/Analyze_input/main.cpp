#include <iostream>
using namespace std;

//function prototype
int evenCount(const int* list, int size);
int oddCount(const int* list, int size);
void printArray(int* list, int size);

int main()
{
    //prompt user to enter the array size
    cout << "Enter the size of array: ";
    int size;
    cin >> size;

    const int SIZE = size;
    int array[SIZE];

    //prompt user to enter integers
    cout << "Enter integers: ";
    for(int i = 0; i < SIZE; i++)
        cin >> array[i];

    int even = evenCount(array, size);
    int odd = oddCount(array, size);

    cout << "The even count: " << even << "\nThe odd count: " << odd << endl;
    printArray(array, size);

    return 0;
}

//function implementation
int evenCount(const int* list, int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
        if(list[i] % 2 == 0)
            count++;

    return count;
}

int oddCount(const int* list, int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
        if(list[i] % 2 == 1)
            count++;

    return count;
}

void printArray(int* list, int size)
{
    for(int i = 0; i < size; i++)
        cout << list[i] << ", ";
}