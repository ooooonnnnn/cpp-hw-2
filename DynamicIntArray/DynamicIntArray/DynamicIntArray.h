#pragma once

class DynamicIntArray
{
    int* content;
    int capacity;
    
public:
    
    DynamicIntArray(int capacity);
    DynamicIntArray(const DynamicIntArray& source);
    ~DynamicIntArray();
    
    int& operator[](size_t index);
};
