#include <iostream>
using namespace std;

template<typename T>
T minElement(const T list[], int size)
{
    T currentMin = list[0];

    for(int i = 0; i < size; i++)
    {
        if(list[i] < currentMin)
            currentMin = list[i];
    }

    return currentMin;
}

int main()
{
    const int SIZE = 10;

    int list1[SIZE] = {1,2,3,4,5,6,7,8,9,0};
    cout << "The minimum element of int array is " << minElement(list1, SIZE) << endl;

    double list2[] = {2.4,2.5,1.14,5.5,7.4,54,5.2,3.4,0.43,4.1};
    cout << "The minimum element of double array is " << minElement(list2, SIZE) << endl;

    string list3[] = {"Denver","Kentucky","Hawaii","Iowa","Wyoming"};
    cout << "The minimum element of string array is " << minElement(list3, 5) << endl;

    return 0;
}