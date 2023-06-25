/*
 * Rewrite the linear search function in Listing 7.9 using recursion.
 * */
#include <iostream>
using namespace std;

//function prototype
int linearSearch(const int list[], int key, int listSize);

int main()
{
    int list[] = { 2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79};

    cout << "linearSearch(list, 2, 13) returns " << linearSearch(list, 2, 13) << endl;
    cout << "linearSearch(list, 11, 13) returns " << linearSearch(list, 11, 13) << endl;
    cout << "linearSearch(list, 12, 13) returns " << linearSearch(list, 12, 13) << endl;
    cout << "linearSearch(list, 79, 13) returns " << linearSearch(list, 79, 13) << endl;


    return 0;
}

//function implementation
int linearSearch(const int list[], int key, int listSize)
{
    if(listSize < 0) //The list has been exhausted without a match
        return -1;

    int index = listSize - 1;
    if(key == list[index])
        return  index;
    else
        return linearSearch(list, key, index - 1);

}