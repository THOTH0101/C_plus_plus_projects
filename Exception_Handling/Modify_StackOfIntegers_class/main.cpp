/*
 * In Section 10.9, “Case Study: The StackOfIntegers Class,” you defined a stack class for integers.
 * Define a custom exception class named EmptyStackException and let the pop and peek functions throw an
 * EmptyStackException if the stack is empty. Write a test program with a try-catch block to handle this
 * type of exception.
 *
 * */
#include <iostream>
#include "StackOfIntegers.h"
#include "EmptyStackException.h"
using namespace std;

int main()
{
    try
    {
        StackOfIntegers integers;
        cout << integers.pop() << endl;
    }
    catch(EmptyStackException& ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}
