//
// Created by thoth on 6/22/23.
//

#include "StackOfIntegers.h"

StackOfIntegers::StackOfIntegers()
{
    size = 0;
}
bool StackOfIntegers::isEmpty() const
{
    return size == 0;
}
int StackOfIntegers::peek() const
{
    if(StackOfIntegers::isEmpty())
        throw EmptyStackException();

    return elements[size - 1];
}
void StackOfIntegers::push(int value)
{
    elements[size++] = value;
}
int StackOfIntegers::pop()
{
    if(StackOfIntegers::isEmpty())
        throw EmptyStackException();

    return elements[--size];
}
int StackOfIntegers::getSize() const
{
    return size;
}