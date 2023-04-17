#include <iostream>
using namespace std;

template<typename T>
void bubbleSort(T list[], int size)
{
    bool changed;
    do
    {
        changed = false;
        for(int i = 0; i < size - 1; i++)
            if(list[i] > list[i + 1])
            {
                T temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                changed = true;
            }
    }while(changed);
}

template<typename T>
void printArray(const T list[], int size)
{
    for(int i = 0; i < size; i++)
        cout << list[i] << " ";

    cout << endl;
}

int main()
{
    int list1[] = {4,0,1,0,1,7,8,6,5};
    bubbleSort(list1, 9);
    printArray(list1, 9);

    double list2[] = {4.1,6.3,3.5,1.8,4.0,8.4,6.4,1.6,4.4};
    bubbleSort(list2, 9);
    printArray(list2, 9);

    string list3[] = {"Illinois","Paris","Alaska","Nevada","Maine"};
    bubbleSort(list3, 5);
    printArray(list3, 5);

    return 0;
}
