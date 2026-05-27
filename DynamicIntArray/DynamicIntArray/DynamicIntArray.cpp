#include "DynamicIntArray.h"
#include <iostream>

DynamicIntArray::DynamicIntArray(int capacity) 
    : content(new int[capacity]), capacity(capacity)
{
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& source)
    : capacity(source.capacity)
{
    content = new int[capacity];
    for (int i = 0; i < capacity; ++i)
    {
        content[i] = source.content[i];
    }
}

DynamicIntArray::~DynamicIntArray()
{
    delete[] content;
}

int& DynamicIntArray::operator[](size_t index)
{
    return content[index];
}
