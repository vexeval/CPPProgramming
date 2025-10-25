#include "MyVector.hpp"
#include <iostream>

// Implement constructor
template <typename T>
MyVector<T>::MyVector(int capacity) : size(0)
{
    this->capacity = capacity;
    elements = new int[capacity];
}

template <typename T>
MyVector<T>::~MyVector()
{
    delete [] elements;
}

template <typename T>
MyVector<T>::MyVector(const MyVector<T>& other)
{
    size = other.size;
    capacity = other.capacity;
    elements = new T[capacity];

    // copy elements
    for (int i = 0; i < size; i++)
    {
        elements[i] = other.elements[i];
    }
}

template <typename T>
void MyVector<T>::push_back(const T& value)
{
    if (size >= capacity) {
        allocate_memory(capacity * 2);
    }
    elements[size] = value;
    size++;
}

// TODO 3: method to remove last element from vector
// void pop_back(); //(capacity should not be greater than doubled size)
template <typename T>
T MyVector<T>::pop_back(void)
{
    if (size > 0) {
        if (size - 1 < capacity / 2) {
            allocate_memory(capacity / 2);
        }
        return elements[--size];
    }
    else {
        // Throw exception
        throw "The vector is empty!";
    }
}
template <typename T>
void MyVector<T>::print() const
{
    std::cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]\n";
}

template <typename T>
void MyVector<T>::allocate_memory(int memory_size)
{
    capacity = memory_size;
    int *old = elements;
    elements = new T[memory_size];

    // copy elements, allocate new memory (bigger or smaller)
    for (int i = 0; i < size; i++) {
        elements[i] = old[i];
    }

    // deallocate old memory
    delete [] old;
}

template <typename T>
T& MyVector<T>::at(int index)
{
    if (index < 0 || index > size - 1) {
        throw "Invalid index";
    }
    return elements[index];
}

template <typename T>
T& MyVector<T>::operator[](int index)
{
    return (index == 0) ? x : y;
}

template <typename T>
int MyVector<T>::getSize() const {
    return size;
}

template <typename T>
void MyVector<T>::clear() {
    delete [] elements;
    size = 0;
    capacity = 10;
    elements = new int[capacity];
}

template <typename T>
void push_front(const T& value) {
    insert(0, value);
}

template <typename T>
void insert(int pos, const T& value) {
    // conert negative index
    if (pos < 0) {
        pos = size + pos + 1;
    }

    // check bounds
    if (pos < 0 || pos > size) {
        return;
    }

    // if new size exceeds capacity, double it
    if (size + 1 > capacity) {
        // double capacity, or set to 1 if its currently set to 0.
        allocate_memory(capacity > 0 ? capacity * 2 : 1);
    }

    // shift elements to the right starting from the end down to position
    for (int i = size; i > pos; i--) {
        elements[i] = elements[i - 1];
    }

    // insert at specified pos
    elements[pos] = value;
    size++;
}