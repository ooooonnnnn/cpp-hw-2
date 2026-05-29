
#include <iostream>

#include "Fraction.h"

int main(int argc, char* argv[])
{
    Fraction a(5,5);
    Fraction b(2,3);
    (a+b).print();
    std::cout << "\n";
    (a-b-b).print();
    return 0;
}
