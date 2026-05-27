
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
    DynamicIntArray* a = new DynamicIntArray(1);
    DynamicIntArray b(1);
    
    DynamicIntArray& aRef = (*a);
    aRef[0] = 1;
    b[0] = 2;
    
    std::cout << aRef[0] << " " << b[0] << "\n";
    
    DynamicIntArray c(aRef);
    
    std::cout << aRef[0] << " " << c[0] << "\n";
    
    DynamicIntArray d(3);
    d[0] = 0; d[1] = 1; d[2] = 2;
    
    std::cout << aRef[0] << " " << d[0] << "\n";
    
    d = aRef;
    
    std::cout << aRef[0] << " " << d[0] << "\n";
    
    delete a;
}
