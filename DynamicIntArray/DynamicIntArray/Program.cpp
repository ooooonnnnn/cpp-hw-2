
#include <iostream>

#include "DynamicIntArray.h"

void test();

int main(int argc, char* argv[])
{
    test();
    return 0;
}

void test()
{
    DynamicIntArray a(1);
    DynamicIntArray b(1);
    
    a[0] = 1;
    b[0] = 2;
    
    std::cout << a[0] << " " << b[0] << "\n";
    
    DynamicIntArray c(a);
    
    std::cout << a[0] << " " << c[0] << "\n";
}
