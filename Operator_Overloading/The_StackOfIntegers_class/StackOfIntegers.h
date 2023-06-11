//
// Created by thoth on 6/8/23.
//

#ifndef THE_STACKOFINTEGERS_CLASS_STACKOFINTEGERS_H
#define THE_STACKOFINTEGERS_CLASS_STACKOFINTEGERS_H

class StackOfIntegers
{
public:
    StackOfIntegers();
    bool isEmpty() const;
    int peek() const;
    void push(int value);
    int pop();
    int getSize() const;
    int& operator[](int index);

private:
    int elements[100];
    int size;
};


#endif //THE_STACKOFINTEGERS_CLASS_STACKOFINTEGERS_H
