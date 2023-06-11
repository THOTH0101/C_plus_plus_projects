/*
 *  Revise the EvenNumber class in Programming Exercise 9.11 to implement the preincrement, predecrement,
 *  postincrement, and post-decrement operators for getNext() and getPrevious() functions. Write a test
 *  program that creates an EvenNumber object for value 16 and invokes the ++ and -- operators to obtain
 *  next and previous even numbers.
 *
 * */
#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main()
{
    EvenNumber e1(16);
    cout << "the current even number is " << e1.getValue() << " the next even number is "
         << e1++ << " and the previous even number is " << e1-- << endl;

    return 0;
}