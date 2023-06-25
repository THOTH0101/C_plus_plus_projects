//
// Created by thoth on 6/22/23.
//

#ifndef MODIFY_STACKOFINTEGERS_CLASS_STACKOFINTEGERS_H
#define MODIFY_STACKOFINTEGERS_CLASS_STACKOFINTEGERS_H
#include "EmptyStackException.h"

class StackOfIntegers
{
public:
    StackOfIntegers();
    bool isEmpty() const;
    int peek() const;
    void push(int value);
    int pop();
    int getSize() const;
private:
    int elements[100];
    int size;
};


#endif //MODIFY_STACKOFINTEGERS_CLASS_STACKOFINTEGERS_H