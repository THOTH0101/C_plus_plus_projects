//
// Created by thoth on 4/16/23.
//

#ifndef FUNCTION_POSITION_GENERICSTACK_H
#define FUNCTION_POSITION_GENERICSTACK_H
#include <iostream>

template <typename T>
class Stack
{
public:
    Stack();
    bool empty() const;
    T peek() const;
    void push(T value);
    T pop();
    int getSize() const;
    void printStack() const;
    int position(T Element) const;

private:
    T element[100];
    int size;
};

//class implementation
template <typename T>
Stack<T>::Stack()
{
    size = 0;
}

template <typename T>
bool Stack<T>::empty() const
{
    return size == 0;
}

template <typename T>
T Stack<T>::peek() const
{
    return element[size - 1];
}

template <typename T>
void Stack<T>::push(T value)
{
    element[size++] = value;
}

template <typename T>
T Stack<T>::pop()
{
    return element[--size];
}

template <typename T>
int Stack<T>::getSize() const
{
    return size;
}

template <typename T>
void Stack<T>::printStack() const
{
    for(int i = 0; i < size; i++)
        std::cout << element[i] << " ";
    std::cout << std::endl;
}

template <typename T>
int Stack<T>::position(T Element) const
{
    for(int i = 0; i < size; i++)
        if(element[i] == Element)
            return i;
}

#endif //FUNCTION_POSITION_GENERICSTACK_H