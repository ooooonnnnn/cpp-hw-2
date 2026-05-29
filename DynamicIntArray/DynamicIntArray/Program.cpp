
#include <iostream>

#include "Fraction.h"

int main(int argc, char* argv[])
{
    Fraction a(4,5);
    Fraction b(2,3);
    std::cout << "a: ";
    a.print();
    std::cout << "\nb: ";
    b.print();
    
    std::cout << "\na+b = ";
    (a+b).print();
    std::cout << "\na-b = ";
    (a-b).print();
    std::cout << "\na*b = ";
    (a*b).print();
    std::cout << "\na/b = ";
    (a/b).print();
    
    
    return 0;
}
