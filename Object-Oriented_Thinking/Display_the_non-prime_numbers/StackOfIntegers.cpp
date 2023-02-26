//
// Created by thoth on 2/26/23.
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

bool StackOfIntegers::isExisted(int value) const
{
    for(int i = 0; i < size; i++)
        if(value == elements[i])
            return true;

    return false;
}

int StackOfIntegers::peek() const
{
    return elements[size - 1];
}

void StackOfIntegers::push(int value)
{
    elements[size++] = value;
}

int StackOfIntegers::pop()
{
    return elements[--size];
}

int StackOfIntegers::getSize() const
{
    return size;
}