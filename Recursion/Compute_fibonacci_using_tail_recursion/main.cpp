/*
 * Rewrite the fib function in Listing 17.2 using tail recursion.
 * */
#include <iostream>
using namespace std;

// The function for finding the Fibonacci number
int fib(int);
int fib(int index, int result);

int main()
{
    // Prompt the user to enter an integer
    cout << "Enter an index for the Fibonacci number: ";
    int index;
    cin >> index;

    // Display factorial
    cout << "Fibonacci number at index " << index << " is " << fib(index) << endl;

    return 0;
}

// The function for finding the Fibonacci number
int fib(int index)
{
    return fib(index, 1);
}

int fib(int index, int result)
{
    if(index == 0)
        return 0;
    else if(index == 1)
        return result;
    else
        return fib(index - 1, fib(index - 2) + result);
}