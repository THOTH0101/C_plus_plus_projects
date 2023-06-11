//
// Created by thoth on 6/11/23.
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

int EvenNumber::getValue() const
{
    return value;
}

int EvenNumber::getNext() const
{
    int next = value + 1;

    while(next % 2 != 0)
        next++;

    return next;
}

int EvenNumber::getPrevious() const
{
    int previous = value - 1;

    while(previous % 2 != 0)
        previous--;

    return previous;
}

int EvenNumber::operator++() const
{
    int temp = getNext();
    return temp;
}

int EvenNumber::operator--() const
{
    int temp = getPrevious();
    return temp;
}

int EvenNumber::operator++(int dummy) const
{
    int temp = getNext();
    return temp;
}

int EvenNumber::operator--(int dummy) const
{
    int temp = getPrevious();
    return temp;
}