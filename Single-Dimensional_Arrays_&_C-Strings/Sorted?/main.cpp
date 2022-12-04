#include <iostream>
using namespace std;

//function prototype
bool isSorted(const int list[], int size); //to check if a list is sorted or not

int main()
{
    const int MAX_SIZE = 80;
    int list[MAX_SIZE];
    int size;

    //prompt user input
    cout << "Enter list: ";
    cin >> size;

    //loop for data collection
    for(int i = 0; i < size; i++)
        cin >> list[i];

    //display if the list is sorted or not
    cout << "The list is ";

    //check if the list is sorted
    if(isSorted(list, size))
        cout << "already sorted" << endl;
    else
        cout << "not sorted" << endl;


    return 0;
}

//function definition
bool isSorted(const int list[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int currentMin = list[i];

        for(int j = i + 1; j < size; j++)
        {
            //if currentMin is greater than any other element in the array, hence the list is unsorted
            if(currentMin > list[j])
                return false;
        }
    }

    return true; //true if array is sorted
}