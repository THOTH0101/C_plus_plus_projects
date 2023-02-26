#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
    //create a stack object
    StackOfIntegers nonPrime;

    //loop to store non-prime number form 1 - 100
    int number = 1;

    while(number < 100)
    {
        int temp;

        //loop to check for non-prime number
        for (int divisor = 2; divisor <= number / 2; divisor++)
            //if divisible, then integer is not prime
            if (number % divisor == 0)
                temp = number; //if not prime assign to temp

        //check if integer is already in the stack
        if(!nonPrime.isExisted(temp))
            nonPrime.push(temp); //if not in the stack, then add

        number++;
    }

    //display the result
    int count = 0;

    //print in decreasing order
    while(!nonPrime.isEmpty())
    {
        count++;

        if(count % 10 == 0)
            cout << nonPrime.pop() << endl;
        else
            cout << nonPrime.pop() << " ";
    }

    return 0;
}
