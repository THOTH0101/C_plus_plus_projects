#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
    const int SIZE = 10;
    int count = 0;

    //create a stack object
    StackOfIntegers multiples;

    //prompt user for an integer
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;

    int temp = integer;

    //store multiples to stack
    while(count < SIZE)
    {
        multiples.push(integer);
        integer += temp;
        count++;
    }

    //display multiples in reverse order
    while(!multiples.isEmpty())
        cout << multiples.pop() << ' ';

    return 0;
}
