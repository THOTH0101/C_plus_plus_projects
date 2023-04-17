#include <iostream>
#include "GenericStack.h"
using namespace std;

int main()
{
    // Create a stack of int values
    Stack<int> intStack;
    for (int i = 0; i < 10; i++)
        intStack.push(i);

    cout << "The element 5 is located at index: " << intStack.position(5) << endl;
    intStack.printStack();

    // Create a stack of strings
    Stack<string> stringStack;
    stringStack.push("Chicago");
    stringStack.push("Denver");
    stringStack.push("London");

    cout << "The element Denver is located at index: " << stringStack.position("Denver") << endl;

    while (!stringStack.empty())
        cout << stringStack.pop() << " ";
    cout << endl;
    return 0;
}
