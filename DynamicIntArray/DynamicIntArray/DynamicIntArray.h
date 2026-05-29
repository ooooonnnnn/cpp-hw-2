#pragma once

class DynamicIntArray
{
    int* content;
    size_t capacity;
    
public:
    
    DynamicIntArray(int capacity);
    DynamicIntArray(const DynamicIntArray& source);
    ~DynamicIntArray();
    
    DynamicIntArray& operator=(const DynamicIntArray& source);
    
    // int& operator[](size_t index);
    void set(size_t index, int value);
    int operator[](size_t index) const;
    size_t size() const;
    void resize(size_t newSize);
};
