//
// Created by thoth on 3/4/23.
//

#ifndef DISPLAY_THE_MULTIPLES_STACKOFINTEGERS_H
#define DISPLAY_THE_MULTIPLES_STACKOFINTEGERS_H

class StackOfIntegers
{
public:
    StackOfIntegers();
    bool isEmpty() const;
    bool isExisted(int value) const;
    int peek() const;
    void push(int value);
    int pop();
    int getSize() const;

private:
    int elements[100];
    int size;
};

#endif //DISPLAY_THE_MULTIPLES_STACKOFINTEGERS_H
