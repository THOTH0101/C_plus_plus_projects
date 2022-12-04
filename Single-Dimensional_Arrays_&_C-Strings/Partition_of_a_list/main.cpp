#include <iostream>
using namespace std;

//function prototype
int partition(int list[], int size); //to rearrange array in partition
void printArray(const int list[], int size); //to print array

int main()
{
    const int LIST_MAX = 80;
    int list[LIST_MAX];
    int size;

    //prompt user for input
    cout << "Enter list: ";
    cin >> size;

    for(int i = 0; i < size; i++)
        cin >> list[i];

    int pivotIndex = partition(list, size); //invoke to partition array list

    //print result
    cout << "Pivot is located at " << pivotIndex + 1 << endl;
    cout << "After the partition, the list is ";
    printArray(list, size);

    return 0;
}

//function definition
int partition(int list[], int size)
{
    int pivot = list[0];
    int pivotIndex;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            //any element found less than partition should move to the first part of the partition
            if(list[j] <= pivot)
            {
                //swap their position
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    for(int k = 0; k < size; k++)
    {
        if(pivot == list[k])
            pivotIndex = k;
    }

    return pivotIndex;
}

void printArray(const int list[], int size)
{
    for(int i = 0; i < size; i++)
        cout << list[i] << " ";
}