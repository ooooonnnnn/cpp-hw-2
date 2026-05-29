
#include <iostream>

#include "Fraction.h"

int main(int argc, char* argv[])
{
    Fraction a(4,5);
    Fraction b(2,3);
    std::cout << "a: " << a;
    std::cout << "\nb: " << b;
    
    std::cout << "\na+b = " << (a+b);
    std::cout << "\na-b = " << (a-b);
    std::cout << "\na*b = " << (a*b);
    std::cout << "\na/b = " << (a/b);
    
    
    return 0;
}
