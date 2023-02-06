//
// Created by THOTH0101 on 2/4/23.
//

#include "EvenNumber.h"

EvenNumber::EvenNumber()
{
    value = 0;
}

EvenNumber::EvenNumber(int newValue)
{
    value = newValue;
}

int EvenNumber::getValue()
{
    return value;
}

int EvenNumber::getNext()
{
    int next = value + 1;

    while(next % 2 != 0)
        next++;

    return next;
}

int EvenNumber::getPrevious()
{
    int previous = value - 1;

    while(previous % 2 != 0)
        previous--;

    return previous;
}