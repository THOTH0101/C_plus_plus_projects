#include <iostream>
using namespace std;

//function prototype
void printArray(int list[], int size); //to print array
int commonElement(const int list1[], const int list2[], int list3[], int size); //to find common element in two array

int main()
{
    const int NUMBER_OF_INTEGER = 10;
    int list1[NUMBER_OF_INTEGER];
    int list2[NUMBER_OF_INTEGER];
    int list3[NUMBER_OF_INTEGER];

    //prompt user to two array list of integer
    cout << "Enter list1: ";

    //loop for data collection
    for(int & i : list1)
        cin >> i;

    cout << "Enter list2: ";

    for(int & j : list2)
        cin >> j;

    int commonElementIndex = commonElement(list1, list2, list3, NUMBER_OF_INTEGER);

    cout << "The common elements are ";
    printArray(list3, commonElementIndex);

    return 0;
}

//function definition
void printArray(int list[], int size)
{
    for(int i = 0; i < size; i++)
        cout << list[i] << " ";
}

int commonElement(const int list1[], const int list2[], int list3[], int size)
{
    int count = 0;

    //loop to control element in list1
    for(int i = 0; i < size; i++)
    {
        //loop to control element in list2
        for(int j = 0; j < size; j++)
        {
            //if element in list1 is found in list2
            if(list1[i] == list2[j])
            {
                list3[count] = list1[i]; //assign common element to list3
                count++;
            }
        }
    }

    return count;
}