//
// Created by thoth on 6/16/23.
//

#ifndef IMPLEMENT_A_STACK_CLASS_USING_INHERITANCE_STACK_H
#define IMPLEMENT_A_STACK_CLASS_USING_INHERITANCE_STACK_H

#include <vector>
using namespace std;
template<typename T>
class Stack : public vector<T>
{
public:
    Stack();
    bool empty() const;
    T peek() const;
    void push(T value);
    T pop();
    int getSize() const;
private:
    vector<T> elements;
    int size;
};
template<typename T>
Stack<T>::Stack()
{
    size = 0;
}
template<typename T>
bool Stack<T>::empty() const
{
    return size == 0;
}
template<typename T>
T Stack<T>::peek() const
{
    return elements[size - 1];
}
template<typename T>
void Stack<T>::push(T value)
{
    size++;
    elements.push_back(value);
}
template<typename T>
T Stack<T>::pop()
{
    return elements[--size];
}
template<typename T>
int Stack<T>::getSize() const
{
    return size;
}

#endif //IMPLEMENT_A_STACK_CLASS_USING_INHERITANCE_STACK_H