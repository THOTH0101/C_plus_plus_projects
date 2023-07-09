/*
 * Write a recursive function that returns the smallest integer in an array. Write a test program that
 * prompts the user to enter a list of five integers and displays the smallest integer.
 * */
#include <iostream>
using namespace std;

//function prototype
int minInt(int list[], int size);

int main()
{
    //prompt user for input
    cout << "Enter list of five integer: ";
    int list[5];
    for(int & i : list)
        cin >> i;

    //display result
    cout << "The smallest integer in the list is: " << minInt(list, 5) << endl;

    return 0;
}

//function implementation
int minInt(int list[], int size)
{
    if(size == 1)
        return list[0];
    else
        return min(list[size - 1], minInt(list, size - 1));
}