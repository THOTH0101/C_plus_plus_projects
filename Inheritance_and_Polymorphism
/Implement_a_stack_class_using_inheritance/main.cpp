/*
 *  In Listing 12.4, GenericStack is implemented using arrays. Create a new stack class
 *  that extends vector. Draw the UML diagram for the classes. Implement it.
 *
 * */
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
    // Create a stack of int values
    Stack<int> intStack;

    for (int i = 0; i < 10; i++)
        intStack.push(i);

    while (!intStack.empty())
        cout << intStack.pop() << " ";
    cout << endl;

    // Create a stack of strings
    Stack<string> stringStack;
    stringStack.push("Chicago");
    stringStack.push("Denver");
    stringStack.push("London");

    while (!stringStack.empty())
        cout << stringStack.pop() << " ";
    cout << endl;

    return 0;
}
