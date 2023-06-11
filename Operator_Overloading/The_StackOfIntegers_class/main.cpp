/*
 * Section 10.9, “Case Study: The StackOfIntegers Class,” defined the StackOfIntegers class.
 * Implement the subscript operator [] in this class to access the elements via the [] operator
 *
 * */
#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
    //create stack object
    StackOfIntegers stack;

    //push value into the stack
    for (int i = 0; i < 10; i++)
        stack.push(i);

    //print stack
    for(int i = 0; i < stack.getSize(); i++)
        cout << stack[i] << ' ';

    return 0;
}