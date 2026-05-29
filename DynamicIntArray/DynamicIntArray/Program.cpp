
#include <iostream>

#include "DynamicIntArray.h"

void test();
void testSize();
void print_values(DynamicIntArray& a);

int main(int argc, char* argv[])
{
    testSize();
    return 0;
}

void test()
{
    // DynamicIntArray* a = new DynamicIntArray(1);
    // DynamicIntArray b(1);
    //
    // DynamicIntArray& aRef = (*a);
    // aRef[0] = 1;
    // b[0] = 2;
    //
    // std::cout << aRef[0] << " " << b[0] << "\n";
    //
    // DynamicIntArray c(aRef);
    //
    // std::cout << aRef[0] << " " << c[0] << "\n";
    //
    // DynamicIntArray d(3);
    // d[0] = 0; d[1] = 1; d[2] = 2;
    //
    // std::cout << aRef[0] << " " << d[0] << "\n";
    //
    // d = aRef;
    //
    // std::cout << aRef[0] << " " << d[0] << "\n";
    //
    // delete a;
}

void testSize()
{
    DynamicIntArray a(2);
    a.set(0, 0);
    print_values(a);
    a.set(1, 1);
    print_values(a);
    return;
    // a[1] = 2;
    
    a.resize(2);
    print_values(a);
    
    // a[1] = 2;
    print_values(a);
}

void print_values(DynamicIntArray& arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
