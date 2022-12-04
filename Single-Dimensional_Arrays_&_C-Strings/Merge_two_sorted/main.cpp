#include <iostream>
using namespace std;

//function prototype
void selectionSort(int list[], int size); //to sort an array
void printList(int list[], int size); //to display array
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]); //to merge and sort two unsorted list

int main()
{
    const int LIST_SIZE = 80;
    int list1[LIST_SIZE];
    int list2[LIST_SIZE];
    int list3[LIST_SIZE];
    int size1;
    int size2;

    //prompts the user to enter list
    cout << "Enter list1: ";
    cin >> size1;

    //loop for collection of data
    for(int i = 0; i < size1; i++)
        cin >> list1[i];

    //prompts the user to enter list
    cout << "Enter list2: ";
    cin >> size2;

    //loop for collection of data
    for(int j = 0; j < size2; j++)
        cin >> list2[j];

    merge(list1, size1, list2, size2, list3); //invoke to merge both list1 and list2 into list3

    //print final result
    cout << "The merged list is ";
    printList(list3, size1 + size2);

    return 0;
}

//function definition
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    //loop to add the inputs in list1 to list3
    for(int i = 0; i < size1; i++)
        list3[i] = list1[i];

    //loop to merge the inputs in list2 with list1 in list3
    for(int j = size1; j < size1 + size2; j++)
        list3[j] = list2[j - size1];

    selectionSort(list3, size1 + size2); //sort list3 in increasing order
}

void selectionSort(int list[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int currentMin = list[i];
        int currentMinIndex = i;

        for(int j = i + 1; j < size; j++)
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

void printList(int list[], int size)
{
    for(int i = 0; i < size; i++)
        cout << list[i] << " ";
}