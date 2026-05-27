#pragma once

class DynamicIntArray
{
    int* content;
    int capacity;
    
public:
    
    DynamicIntArray(int capacity);
    DynamicIntArray(const DynamicIntArray& source);
    ~DynamicIntArray();
    
    DynamicIntArray& operator=(const DynamicIntArray& source);
    
    int& operator[](size_t index);
    size_t size() const;
};
