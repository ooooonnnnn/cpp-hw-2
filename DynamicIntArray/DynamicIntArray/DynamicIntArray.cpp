#include "DynamicIntArray.h"
#include <iostream>

DynamicIntArray::DynamicIntArray(size_t capacity) 
    : content(new int[capacity]), capacity(capacity)
{
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& source)
    : capacity(source.capacity)
{
    content = new int[capacity];
    for (size_t i = 0; i < capacity; ++i)
    {
        content[i] = source.content[i];
    }
}

DynamicIntArray::~DynamicIntArray()
{
    delete[] content;
}

DynamicIntArray& DynamicIntArray::operator=(const DynamicIntArray& source)
{
    DynamicIntArray temp(source);
    std::swap(content, temp.content);
    std::swap(capacity, temp.capacity);
    return *this;   
}

void DynamicIntArray::set(size_t index, int value)
{
    // std::cout << "Called non const (set)" << "\n";
    if (index == capacity) resize(capacity * 2);
    content[index] = value;
}

// Used for set
// int& DynamicIntArray::operator[](size_t index)
// {
//     std::cout << "Called non const (set)" << "\n";
//     if (index == capacity - 1) resize(capacity * 2);
//     return content[index];   
// }

//Used for get
int DynamicIntArray::operator[](size_t index) const
{
    // std::cout << "Called const (get)" << "\n";
    return content[index];
}

size_t DynamicIntArray::size() const
{
    return capacity;
}

void DynamicIntArray::resize(size_t newSize)
{
    int* newContent = new int[newSize];
    for (size_t i = 0; i < std::min(capacity, newSize); ++i)
    {
        newContent[i] = content[i];
    }
    content = newContent;
    
    capacity = newSize;
}
