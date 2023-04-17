//
// Created by thoth on 4/16/23.
//

#ifndef IMPLEMENT_VECTOR_CLASS_VECTOR_H
#define IMPLEMENT_VECTOR_CLASS_VECTOR_H

template <typename T>
class Vector
{
public:
    Vector();
    Vector(int size);
    Vector(int size, T value);
    void push_back(T value);
    void pop_back();
    unsigned size() const;
    T at(int index) const;
    bool empty() const;
    void clear();
    void swap(Vector& v2);

private:
    T* element;
    unsigned capacity;
    int current;
};

//class implementation
template <typename T>
Vector<T>::Vector():capacity(0),current(0)
{
    element = new T[current];
}

template <typename T>
Vector<T>::Vector(int size)
{
    element = new T[size];
    capacity = size;
    current = size;
}

template <typename T>
Vector<T>::Vector(int size, T value)
{
    element = new T[size];
    capacity = size;
    current = size;

    for(int i = 0; i < size; i++)
        element[i] = value;
}

template <typename T>
void Vector<T>::push_back(T value)
{
    if(capacity >= current)
    {
        T* temp = new T[capacity + 1];

        for (int i = 0; i < capacity; i++)
            temp[i] = element[i];

        delete[] element;
        capacity++;
        element = temp;
    }

    element[current++] = value;
}

template <typename T>
void Vector<T>::pop_back()
{
    capacity--;
    current--;
}

template <typename T>
unsigned int Vector<T>::size() const
{
    return capacity;
}

template <typename T>
T Vector<T>::at(int index) const
{
    return element[index];
}

template <typename T>
bool Vector<T>::empty() const
{
    return capacity == 0;
}

template <typename T>
void Vector<T>::clear()
{
    delete [] element;
    capacity = 0;
    current = 0;
}

template <typename T>
void Vector<T>::swap(Vector& v2)
{
    v2.element = new T[capacity];
    v2.capacity = capacity;
    v2.current = current;

    for(int i = 0; i < capacity; i++)
        v2.element[i] = element[i];
}

#endif //IMPLEMENT_VECTOR_CLASS_VECTOR_H