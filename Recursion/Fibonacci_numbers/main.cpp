/*
 * Rewrite the fib function in Listing 17.2 using iterations. Hint: To compute fib(n) without recursion,
 * you need to obtain fib(n - 2) and fib(n - 1) first. Let f0 and f1 denote the two previous Fibonacci
 * numbers. The current Fibonacci number would then be f0 + f1
 * */
#include <iostream>
using namespace std;

// The function for finding the Fibonacci number
int fib(int index)
{
    int f0 = 0;
    int f1 = 1;
    int currentFib;

    for(int i = 2; i <= index; i++)
    {
        currentFib = f0 + f1;
        f0 = f1;
        f1 = currentFib;
    }

    return currentFib;
}

int main()
{
    // Prompt the user to enter an integer
    cout << "Enter an index for the Fibonacci number: ";
    int index;

    cin >> index;
    // Display fibonacci
    cout << "Fibonacci number at index " << index << " is " << fib(index) << endl;

    return 0;
}
