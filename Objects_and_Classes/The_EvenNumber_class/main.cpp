/*
 *(The EvenNumber class) Define the EvenNumber class for representing an even number. The class contains:
 *
 * *A data field value of the int type that represents the integer value stored in the object.
 * *A no-arg constructor that creates an EvenNumber object for the value 0.
 * *A constructor that constructs an EvenNumber object with the specified value.
 * *A function named getValue() to return an int value for this object.
 * *A function named getNext() to return an EvenNumber object that represents
 * the next even number after the current even number in this object.
 * *A function named getPrevious() to return an EvenNumber object that represents
 * the previous even number before the current even number in this object.
 *
 * Draw the UML diagram for the class. Implement the class. Write a test program
 * that creates an EvenNumber object for value 16 and invokes the getNext() and getPrevious()
 * functions to obtain and displays these numbers.
 * */

#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main()
{
    //create an EvenNumber object
    EvenNumber evenNumber(16);

    //invoke functions and display results
    cout << "the current even number is " << evenNumber.getValue() << " the next even number is "
    << evenNumber.getNext() << " and the previous even number is " << evenNumber.getPrevious() << endl;

    return 0;
}