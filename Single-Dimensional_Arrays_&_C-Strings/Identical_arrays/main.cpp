#include <iostream>
using namespace std;

//function prototype
bool isEqual(const int list1[], const int list2[], int size); //to check if identical
bool linearSearch(const int list[], int key, int listSize); //array searching
void createArray(int list[], int listSize); //to initialise array with default value

int main()
{
    const int LIST_SIZE = 20; //assumed maximum size for lists
    int list1[LIST_SIZE];
    int list2[LIST_SIZE];

    createArray(list1, LIST_SIZE); //create array with new default
    createArray(list2, LIST_SIZE); //create array with new default

    int listSize; //initialise list size with first input

    //prompt user for input
    cout << "Enter list1: ";
    cin >> listSize;

    //loop for input collection
    for(int i = 0; i < listSize; i++)
        cin >> list1[i];

    //prompt user for input
    cout << "Enter list1: ";
    cin >> listSize;

    for(int j = 0; j < listSize; j++)
        cin >> list2[j];

    cout << "Two lists are ";

    //print result if identical or not
    if(isEqual(list1, list2, listSize))
        cout << "identical" << endl;
    else
        cout << "not identical" << endl;

    return 0;
}

//function definition
bool isEqual(const int list1[], const int list2[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(!linearSearch(list1, list2[i], size))
            return false; //return false if elements in list2 is not in list1
    }

    return true; //else return true
}

bool linearSearch(const int list[], int key, int listSize)
{
    //loop to search for key in array
    for(int i = 0; i < listSize; i++)
    {
        if(key == list[i])
            return true; //return true if key is found
    }

    return false; //else return false
}

void createArray(int list[], int listSize)
{
    for(int i = 0; i < listSize; i++)
        list[i] = -1;
}